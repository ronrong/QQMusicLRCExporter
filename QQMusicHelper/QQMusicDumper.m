//
//  QQMusicDumper.m
//  QQMusicHelper
//
//  Created by Zhang Naville on 15/4/26.
//
//
#import "QQLyricParse.h"
#import "QQMusicDumper.h"
#import "LyricManager.h"
#import "IO.h"
#import "SQLHelper.h"
#import "SongInfo.h"
#import "UIKit/UIKit.h"
#import "QQLineLyricQRC.h"
#import "DLLRCParser.h"
@implementation QQMusicDumper
+(int)Dump{
    NSFileManager* fm=[NSFileManager defaultManager];
    if([fm fileExistsAtPath:[IO GetPath:@"DUMP"]]==YES){
        NSLog(@"ShouldDump");
        [fm removeItemAtPath:[IO GetPath:@"DUMP"] error:nil];
        dispatch_async(dispatch_get_global_queue(0, 0), ^{
            NSError* error;
            // LyricManager* lm=[NSClassFromString(@"LyricManager") sharedLyricManager];
            // LyricManager* lm=NSClassFromString(@"LyricManager");
            
            
            NSFileManager* fm=[NSFileManager defaultManager];
            [fm removeItemAtPath:[IO GetPath:@"qqmusicHelper.sqlite"] error:nil];
            //BOOL EXISTS;
            NSLog(@"Start Dumping");
            /* if( [fm fileExistsAtPath:[IO GetPath:@"Lyrics"] isDirectory:&EXISTS]!=false&&EXISTS==false){
             NSError* e;
             BOOL Success=[fm createDirectoryAtPath:[IO GetPath:@"Lyrics"]  withIntermediateDirectories:false attributes:nil error:&e];
             if(Success==false||e!=nil){
             UIAlertView* UA=[[UIAlertView alloc] initWithTitle:@"Alert" message:[NSString stringWithFormat:@"Error:%@",[e localizedDescription]] delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil];
             [UA show];
             [UA release];
             
             }
             
             
             
             }*/
            [fm copyItemAtPath:[IO GetPath:@"qqmusic.sqlite"] toPath:[IO GetPath:@"qqmusicHelper.sqlite"] error:&error];
            NSLog(@"Copy A New DataBase");
            
            
            
            NSArray* list=[SQLHelper querySQL:[IO GetPath:@"qqmusicHelper.sqlite"] TableName:@"SONGS" ColumnNames:@[@"name",@"singer",@"id",@"album",@"type"] Error:&error];
            NSLog(@"QQMusic-List:%@",list);
            NSLog(@"List Fetched");
            
            for(int i=0;i<[list count];i++){
                NSMutableArray* lrcforcombine=[NSMutableArray array];
                NSDictionary* SongInfoDict=[list objectAtIndex:i];
                SongInfo* si=[[NSClassFromString(@"SongInfo") alloc] initWithSongType:[[SongInfoDict objectForKey:@"type"] intValue] songID:[[SongInfoDict objectForKey:@"id"] longLongValue]];
                
                //NSLog(@"SongInfo:%@",si);
                
                
                
                NSString* YinYipath=[NSClassFromString(@"LyricManager") getYInyiLyricFilePath:si];
                NSString* FanYipath=[NSClassFromString(@"LyricManager") getTranslateLyricFilePath:si];
                NSString* ID3PathQRC=[NSClassFromString(@"LyricManager") getID3VersionLyricFilePath:si isQrc:YES];
                
                
                
                NSLog(@"翻译路径:%@",FanYipath);
                NSLog(@"音译路径:%@",YinYipath);
                NSLog(@"ID3路径:%@",ID3PathQRC);
                
                
                if([fm fileExistsAtPath:ID3PathQRC]){
                    NSLog(@"ID3 Exists!");
                    // NSData* ID3Data=[NSData dataWithContentsOfFile:ID3PathQRC];
                    NSString* raw=[NSClassFromString(@"LyricManager") decodeQrcFileWithPath:ID3PathQRC];
                    //   NSLog(@"Line 73decodeQrcFileWithPathRET:%@",raw);
                    
                    
                    QQLyricParse* rawlyrics=[[NSClassFromString(@"LyricManager") sharedLyricManager] parseText:raw];
                    //   NSLog(@"Line 77 getQrcTextFromXml:%@",rawlyrics);
                    
                    NSArray* lyricist=rawlyrics.mLineLyricList;
                    NSLog(@"Line 80 mLineLyricList Fetched");
                    NSLog(@"End Line80");
                    //此处输出为Array 时间:598,歌词:「私の恋を悲剧のジュリエットにしないで ここから连れ出して
                    NSMutableString* lyrics=[NSMutableString stringWithFormat:@"[ti:%@]\n[ar:%@]\n",[SongInfoDict objectForKey:@"name"],[SongInfoDict objectForKey:@"singer"]];
                    for(int i=0;i<[lyricist count];i++){
                        //NSString* CLASSNAME=NSStringFromClass([lyricist objectAtIndex:i]);
                        QQLineLyricQRC* qll=[lyricist objectAtIndex:i];
                        // NSLog(@"Line92 QRC");
                        NSMutableString* rawtimestring=[NSMutableString stringWithFormat:@"%lu",qll.time];
                        NSString* timestring=[self ConvertLRCTime:[rawtimestring longLongValue]];
                        //       NSLog(@"Time String Generated%@:%@",tmpstr,timestring);
                        [qll release];
                        [rawtimestring release];
                        
                        NSString* appendString=[NSString stringWithFormat:@"%@%@\n",timestring,qll.text];
                        [lyrics appendString:appendString];
                        //  NSLog(@"%@",appendString);
                        [timestring release];
                        [appendString release];
                    }
           [lrcforcombine addObjectsFromArray:[[[DLLRCParser alloc] init] parseLRC:lyrics]];
                    //#error String Appended in the for cycle has no effect
                    NSLog(@"Line 97");
                    [lyrics writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@ID3.txt",NSHomeDirectory(),[SongInfoDict objectForKey:@"name"],[SongInfoDict objectForKey:@"singer"],[SongInfoDict objectForKey:@"album"]] atomically:YES encoding:NSUTF8StringEncoding error:nil];
                    NSLog(@"Line 97 LRC Wrote");
                    [lyrics release];
                    
                    
                }
                else{
                    NSLog(@"ID3 Gone");
                   
                    NSString* TMPPATH=[NSClassFromString(@"LyricManager") getID3VersionLyricFilePath:si isQrc:NO];
                    NSString* raw;
                    if([fm fileExistsAtPath:TMPPATH]){
                        NSLog(@"ID3 NOT QRC VERSION FOUND");
                    raw=[NSClassFromString(@"LyricManager") decodeQrcFileWithPath:TMPPATH];
                        if(raw!=nil){
                            
                            QQLyricParse* rawlyrics=[[NSClassFromString(@"LyricManager") sharedLyricManager] parseText:raw];
                            //  NSLog(@"getQrcTextFromXml:%@",rawlyrics);
                            
                            NSArray* lyricist=rawlyrics.mLineLyricList;
                            NSMutableString* lyrics=[NSMutableString string];
                            for(int i=0;i<[lyricist count];i++){
                                QQLineLyric* qll=[lyricist objectAtIndex:i];
                                NSMutableString* rawtimestring=[NSMutableString stringWithFormat:@"%lu",qll.time];
                                NSString* timestring=[self ConvertLRCTime:[rawtimestring longLongValue]];
                                //       NSLog(@"Time String Generated%@:%@",tmpstr,timestring);
                                [qll release];
                                [rawtimestring release];
                                
                                [lyrics appendString:[NSString stringWithFormat:@"%@%@\n",timestring,qll.text]];
                                
                                [timestring release];
                            }
                            //  NSLog(@"%@",lyrics);
                                [lrcforcombine addObjectsFromArray:[[[DLLRCParser alloc] init] parseLRC:lyrics]];
                            [lyrics writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@ID3.txt",NSHomeDirectory(),[SongInfoDict objectForKey:@"name"],[SongInfoDict objectForKey:@"singer"],[SongInfoDict objectForKey:@"album"]] atomically:YES encoding:NSUTF8StringEncoding error:nil];
                            [lyrics release];
                            
                        }
                        else{
                            NSLog(@"ID3 Doesn't Exist");
                        }

                    }
                    
                }
                
                //   NSData* ID3Data=[NSData dataWithContentsOfFile:YinYipath];
                //    NSString* lyrics=[NSClassFromString(@"LyricManager") decodeDes:ID3Data.bytes size:ID3Data.length];
                NSLog(@"YinYi Path:%@",YinYipath);
                NSString* yinyilyrics=[NSClassFromString(@"LyricManager") decodeQrcFileWithPath:YinYipath];
                 NSLog(@"Line 139 YinYI Lyrics:%@",yinyilyrics);
                if(yinyilyrics!=nil){
                    id LyricManager=[NSClassFromString(@"LyricManager") sharedLyricManager];
                    NSLog(@"LyricManager:%@",LyricManager);
                    QQLyricParse* rawlyrics=[LyricManager parseText:yinyilyrics];
                    
                     NSLog(@"Line 141getQrcTextFromXml");
                    [yinyilyrics release];
                    
                    NSArray* lyricist=rawlyrics.mLineLyricList;
                    NSMutableString* lyrics=[NSMutableString string];
                    for(int i=0;i<[lyricist count];i++){
                        QQLineLyricQRC* qll=[lyricist objectAtIndex:i];
                        NSMutableString* rawtimestring=[NSMutableString stringWithFormat:@"%lu",qll.time];
                        NSString* timestring=[self ConvertLRCTime:[rawtimestring longLongValue]];
                        
                        [rawtimestring release];
                        
                        
                        [lyrics appendString:[NSString stringWithFormat:@"%@%@\n",timestring,qll.text]];
                        
                        [timestring release];
                    }
                    [lyricist release];
         NSLog(@"Line 158%@",lyrics);
                              [lrcforcombine addObjectsFromArray:[[[DLLRCParser alloc] init] parseLRC:lyrics]];
                    [lyrics writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@音译.txt",NSHomeDirectory(),[SongInfoDict objectForKey:@"name"],[SongInfoDict objectForKey:@"singer"],[SongInfoDict objectForKey:@"album"]] atomically:YES encoding:NSUTF8StringEncoding error:nil];
                    [lyrics release];
                    
                    
                    
                    
                }
                //  NSData* ID3Data=[NSData dataWithContentsOfFile:FanYipath];
                NSString* fanyilyrics=[NSClassFromString(@"LyricManager") decodeQrcFileWithPath:FanYipath];
                NSLog(@"FanYi Lyrics Fetched:%@",fanyilyrics);
                if(fanyilyrics!=nil){
                    NSLog(@"FanYiLyrics:%@",fanyilyrics);
                          //  [lrcforcombine addObjectsFromArray:[[[DLLRCParser alloc] init] parseLRC:fanyilyrics]];
                    NSError* Error;
                    [fanyilyrics writeToFile:[NSString stringWithFormat:@"%@/Documents/Lyrics/%@-%@-%@翻译.txt",NSHomeDirectory(),[SongInfoDict objectForKey:@"name"],[SongInfoDict objectForKey:@"singer"],[SongInfoDict objectForKey:@"album"]] atomically:YES encoding:NSUTF8StringEncoding error:&Error];
                    if(Error!=nil){
                  NSLog(@"FanYi Wrote Error:%@",[Error localizedDescription]);
                            
                        
                    }
                    NSLog(@"FanYi Lyrics Wrote");
                }
                [fanyilyrics release];
                [lrcforcombine release];
              //  NSLog(@"%@",lrcforcombine);
                
                
                
            }
            
            
            NSLog(@"Dump Finished");
        });
        return 0;
    }
    else{

        NSLog(@"ShouldNotDump");
        return 1;
        
    }


    NSLog(@"End GCD");
}
+(NSString*)ConvertLRCTime:(long long)microsecond{
    double seconds=microsecond/1000.0;
    int min=seconds/60;
    double sec=seconds-60*min;
    
    return [NSString stringWithFormat:@"[%02d:%05.2lf]",min,sec];
    
}




@end

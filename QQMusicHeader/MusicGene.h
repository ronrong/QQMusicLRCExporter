//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MusicGene : NSObject
{
    int _geneType;
    int _geneId;
    NSString *_name;
    NSString *_picUrl;
    int _score;
    int _numberOfSongsUserListened;
    int _numberOfUsersEverListenedMine;
    int _trend;
    NSString *_colorHexStr;
}

+ (id)translateFromJsonData:(id)arg1;
@property(retain, nonatomic) NSString *colorHexStr; // @synthesize colorHexStr=_colorHexStr;
@property(nonatomic) int trend; // @synthesize trend=_trend;
@property(nonatomic) int numberOfUsersEverListenedMine; // @synthesize numberOfUsersEverListenedMine=_numberOfUsersEverListenedMine;
@property(nonatomic) int numberOfSongsUserListened; // @synthesize numberOfSongsUserListened=_numberOfSongsUserListened;
@property(nonatomic) int score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int geneId; // @synthesize geneId=_geneId;
@property(nonatomic) int geneType; // @synthesize geneType=_geneType;
- (void).cxx_destruct;
- (id)geneColor;
- (id)uniqueId;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (int)trendResult;
- (id)formattedNumberStr:(int)arg1;
- (id)description;

@end

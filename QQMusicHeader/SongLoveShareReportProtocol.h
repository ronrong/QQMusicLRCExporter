//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SongLoveShareReportProtocol : ProtocolBaseJason
{
    unsigned long _song_ID;
    int _loveCnt;
    int _shareCnt;
    NSString *_friendQQ;
}

@property(retain, nonatomic) NSString *friendQQ; // @synthesize friendQQ=_friendQQ;
@property(nonatomic) int shareCnt; // @synthesize shareCnt=_shareCnt;
@property(nonatomic) int loveCnt; // @synthesize loveCnt=_loveCnt;
@property(nonatomic) unsigned long song_ID; // @synthesize song_ID=_song_ID;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end


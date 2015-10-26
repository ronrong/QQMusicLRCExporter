//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolAuthBase.h"

__attribute__((visibility("hidden")))
@interface ReceiveSongProtocol : ProtocolAuthBase
{
    int count;
    unsigned long _uin;
    unsigned long lastCheckTime;
    unsigned long lastRedPointTime;
    BOOL hasNewReceiveSong;
    BOOL _checked;
}

@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
- (BOOL)isNeedShowReqestSongRedPoint;
- (void)setCheckedRequestSongRedPoint;
- (void)setCountByAPN:(int)arg1;
- (int)getNewRequestSongCount;
- (void)dealloc;
- (void)startWork;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)initWithUin:(unsigned long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class ChannelV4Category;

__attribute__((visibility("hidden")))
@interface ChannelSquareProtocol : ProtocolBaseJason
{
    ChannelV4Category *_category;
    int _from;
    double _refreshInterval;
}

@property(nonatomic) int from; // @synthesize from=_from;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) ChannelV4Category *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (BOOL)canReportError;
- (int)cid;
- (id)init;

@end


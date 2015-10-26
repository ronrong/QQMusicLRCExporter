//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ForMeNewInfoProtocol : ProtocolBaseJason
{
    BOOL _hasNewInfo;
    NSArray *_infoList;
    double _refreshTimeInterval;
}

@property(nonatomic) double refreshTimeInterval; // @synthesize refreshTimeInterval=_refreshTimeInterval;
@property(retain, nonatomic) NSArray *infoList; // @synthesize infoList=_infoList;
@property(nonatomic) BOOL hasNewInfo; // @synthesize hasNewInfo=_hasNewInfo;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUser;
- (id)getUrl;
- (int)cid;

@end


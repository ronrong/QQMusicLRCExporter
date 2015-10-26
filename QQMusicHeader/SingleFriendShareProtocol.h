//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class FriendShareData;

__attribute__((visibility("hidden")))
@interface SingleFriendShareProtocol : ProtocolBaseJason
{
    FriendShareData *_requestData;
    FriendShareData *_shareData;
}

@property(retain, nonatomic) FriendShareData *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) FriendShareData *requestData; // @synthesize requestData=_requestData;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end


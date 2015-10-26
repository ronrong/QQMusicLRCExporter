//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ChirrupSendProtocol : ProtocolBaseJason
{
    NSString *_codeid;
    NSString *_nick;
    long long _songid;
}

@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *codeid; // @synthesize codeid=_codeid;
@property(nonatomic) long long songid; // @synthesize songid=_songid;
- (void).cxx_destruct;
- (id)md5:(id)arg1;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;
- (id)init;

@end

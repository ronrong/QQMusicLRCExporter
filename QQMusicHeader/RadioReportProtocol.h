//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RadioReportProtocol : ProtocolBaseJason
{
    int _operateType;
    NSString *_callBackString;
    int _operateSource;
    long long _song_ID;
    double _listenTime;
}

@property(nonatomic) int operateSource; // @synthesize operateSource=_operateSource;
@property(retain, nonatomic) NSString *callBackString; // @synthesize callBackString=_callBackString;
@property(nonatomic) double listenTime; // @synthesize listenTime=_listenTime;
@property(nonatomic) int operateType; // @synthesize operateType=_operateType;
@property(nonatomic) long long song_ID; // @synthesize song_ID=_song_ID;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (int)cid;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ChinaUnicomFreeFlowProtocol : ProtocolBaseJason
{
    int subCode;
    NSString *phoneNumber;
}

@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber;
@property int subCode; // @synthesize subCode;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (BOOL)canReportError;
- (int)cid;

@end


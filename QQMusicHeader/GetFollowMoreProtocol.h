//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface GetFollowMoreProtocol : ProtocolBaseJason
{
    NSArray *friendGroup;
}

@property(retain, nonatomic) NSArray *friendGroup; // @synthesize friendGroup;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (BOOL)canReportError;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class ListBase;

__attribute__((visibility("hidden")))
@interface ParticularIndexSingerProtocol : ProtocolBaseJason
{
    int retState;
    ListBase *list;
}

@property(nonatomic) __weak ListBase *list; // @synthesize list;
@property(nonatomic) int retState; // @synthesize retState;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (BOOL)canReportError;
- (id)getUrl;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WVJBResponseCallbackObject;

@protocol QMJsMessageDelegate <NSObject>
- (BOOL)handleJSCMD:(NSString *)arg1 withParam:(id)arg2 responseCallback:(WVJBResponseCallbackObject *)arg3;
- (void)handleJSCMD:(NSString *)arg1 withParam:(id)arg2;
@end

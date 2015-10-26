//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QMFreeFlowManager : NSObject
{
    BOOL isShowAlertWhenFreeFlowFirstShow;
}

+ (id)sharedManager;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)onNotificationShowFlowPackChanged:(id)arg1;
- (void)delayShowAlert;
- (void)onNotificationCheckFreeFlowFinish:(id)arg1;
- (void)onNotifyNetStateChange:(id)arg1;
- (void)terminateAction;
- (void)backGroudCheck;
- (void)showChinaUnicomWebView:(id)arg1;
- (void)procressFlowCountReport;
- (void)requestFreeFlowProtocol;
- (void)checkShowAlertView;
- (void)showFlowTipsAlert:(id)arg1 message:(id)arg2;
- (void)showChinaUnicomAlert;
- (void)startGetHostIp;
- (long)compareCurrentTime:(id)arg1;
- (void)initAction;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCloudProtocolCallBackParam;

@protocol CloudProtocolsManagerDelegate <NSObject>
- (void)onSessionAllDone:(SCloudProtocolCallBackParam *)arg1;
- (void)onSessionItemDone:(SCloudProtocolCallBackParam *)arg1;
- (void)onActionWillDone:(SCloudProtocolCallBackParam *)arg1;
- (void)onActionWillStart:(SCloudProtocolCallBackParam *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseHttpResovle;

@protocol HttpControlDelegate <NSObject>

@optional
- (void)onError:(BaseHttpResovle *)arg1;
- (void)onPause:(BaseHttpResovle *)arg1;
- (void)onStart:(BaseHttpResovle *)arg1;
- (void)onReady:(BaseHttpResovle *)arg1;
- (void)onFinish:(BaseHttpResovle *)arg1;
@end


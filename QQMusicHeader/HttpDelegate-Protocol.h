//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseHttp;

@protocol HttpDelegate <NSObject>

@optional
- (void)onFinish:(BaseHttp *)arg1;
- (void)onError:(BaseHttp *)arg1;
- (void)onPause:(BaseHttp *)arg1;
- (void)onStart:(BaseHttp *)arg1;
- (void)onReady:(BaseHttp *)arg1;
@end

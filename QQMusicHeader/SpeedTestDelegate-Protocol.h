//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SpeedTest;

@protocol SpeedTestDelegate <NSObject>
- (void)onSpeedTestDone:(SpeedTest *)arg1 bytesPerSecond:(unsigned int)arg2 shouldRetry:(BOOL)arg3 downTime:(int)arg4;
@end


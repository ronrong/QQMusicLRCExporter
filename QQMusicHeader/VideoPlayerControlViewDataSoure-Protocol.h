//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol VideoPlayerControlViewDataSoure <NSObject>
- (BOOL)isLocalMVFlag;
- (NSString *)getCurrentClarity;
- (NSArray *)clarityArray;
- (NSString *)getTitleAtIndex:(int)arg1;
- (double)getCurrentPlaybackTime;
- (double)getPlayableDuration;
- (double)getDuration;
- (int)currentPlayIndex;
- (NSString *)listTableTitle;
- (NSArray *)listTableDataSource;
- (NSString *)currentTitle;
@end


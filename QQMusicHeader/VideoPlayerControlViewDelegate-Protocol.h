//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol VideoPlayerControlViewDelegate <NSObject>
- (void)downloadMV;
- (void)freeFlowCheck;
- (void)changeClarity:(NSString *)arg1;
- (void)shareMV;
- (void)setSeekPlayTime:(double)arg1;
- (void)setMovieScalingMode:(int)arg1;
- (void)setVolume:(float)arg1;
- (void)playSongAtIndex:(int)arg1;
- (void)stop;
- (void)forcePause;
- (void)pause;
- (void)play;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KKMediaPlayInfo, KKVideoInfo, NSError, NSString;

@protocol KKMediaPlayPrepareDelegate <NSObject>
- (void)onClarityInfoUpdated;
- (BOOL)isPlayHDMI;
- (BOOL)isPlayP2PFailed;
- (void)onVideoIDPrepared:(KKVideoInfo *)arg1;
- (BOOL)isNeedDetailData;
- (void)onVideoDetailDataReady;
- (void)onVideoInfoUpdated:(int)arg1;
- (void)onVideoInfoPrepareFailed:(NSError *)arg1;
- (void)onVideoInfoPrepared:(KKMediaPlayInfo *)arg1;
- (int)currentInterfaceType;
- (NSString *)currentVideoFormat;
- (NSString *)playerVersion;
@end

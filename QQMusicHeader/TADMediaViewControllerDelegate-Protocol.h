//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TADMediaViewControllerDelegate <NSObject>

@optional
- (void)adLandingViewEndLoadingH5;
- (void)adLandingViewStartLoadingH5;
- (void)adLandingViewDidDismiss;
- (void)adLandingViewWillDismiss;
- (void)adLandingViewDidPresent;
- (void)adLandingViewWillPresent;
- (void)adLandingViewWillPresent:(BOOL)arg1;
- (BOOL)adLandingViewShouldPresent;
- (void)adMediaViewWillTurnVolume:(BOOL)arg1;
- (void)adMediaViewWillExpand;
- (void)adMediaViewWillSkipAd;
- (void)adMediaViewDidPresent;
@end


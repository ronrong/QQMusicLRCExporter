//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL, TADContainerView;

@protocol TADContainerViewDelegate <NSObject>
- (void)containerView:(TADContainerView *)arg1 didFailToReceiveAdWithError:(NSError *)arg2;
- (void)containerViewDidLoadAd:(TADContainerView *)arg1;

@optional
- (void)containerLandingViewDidDismiss;
- (void)containerLandingViewWillDismiss;
- (void)containerLandingViewDidPresent;
- (void)containerLandingViewWillPresent;
- (BOOL)containerView:(TADContainerView *)arg1 shouldOpenURL:(NSURL *)arg2;
- (void)containerViewCloseButtonPressed:(TADContainerView *)arg1;
@end


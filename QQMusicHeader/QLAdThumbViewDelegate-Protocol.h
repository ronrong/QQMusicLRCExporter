//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLAdThumbViewTouchDelegate.h"

@class NSString, TADItemInfo;

@protocol QLAdThumbViewDelegate <QLAdThumbViewTouchDelegate>

@optional
- (void)adLandingViewMindLinkClicked:(int)arg1 adItem:(TADItemInfo *)arg2;
- (void)adLandingViewRefreshUrl:(NSString *)arg1 adItem:(TADItemInfo *)arg2;
- (void)adLandingViewDidFinishLoadingUrl:(NSString *)arg1 adItem:(TADItemInfo *)arg2;
- (void)adLandingViewStartLoadingUrl:(NSString *)arg1 adItem:(TADItemInfo *)arg2;
- (void)adLandingViewDidFailLoad:(TADItemInfo *)arg1;
- (void)adLandingViewDidFinishLoad:(TADItemInfo *)arg1;
- (void)adLandingViewDidStartLoad:(TADItemInfo *)arg1;
- (void)adLandingViewDidDismiss:(TADItemInfo *)arg1;
- (void)adLandingViewDidDisappear:(TADItemInfo *)arg1;
- (void)adLandingViewWillDisappear:(TADItemInfo *)arg1;
- (void)adLandingViewWillDismiss:(TADItemInfo *)arg1;
- (void)adLandingViewDidAppear:(TADItemInfo *)arg1;
- (void)adLandingViewWillAppear:(TADItemInfo *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TADLandingViewStatObject : NSObject
{
    long _middleViewLoadingDuration;
    long _middleViewStayDuration;
    long _landingViewLoadingDuration;
    long _landingViewStayDuration;
    long _adDidShownSeconds;
    double _middleViewStartLoadingTime;
    double _middleViewEndLoadingTime;
    double _landingViewStartLoadingTime;
    double _landingViewEndLoadingTime;
    double _landingViewLeaveTime;
}

@property(nonatomic) double landingViewLeaveTime; // @synthesize landingViewLeaveTime=_landingViewLeaveTime;
@property(nonatomic) double landingViewEndLoadingTime; // @synthesize landingViewEndLoadingTime=_landingViewEndLoadingTime;
@property(nonatomic) double landingViewStartLoadingTime; // @synthesize landingViewStartLoadingTime=_landingViewStartLoadingTime;
@property(nonatomic) double middleViewEndLoadingTime; // @synthesize middleViewEndLoadingTime=_middleViewEndLoadingTime;
@property(nonatomic) double middleViewStartLoadingTime; // @synthesize middleViewStartLoadingTime=_middleViewStartLoadingTime;
@property(nonatomic) long adDidShownSeconds; // @synthesize adDidShownSeconds=_adDidShownSeconds;
@property(nonatomic) long landingViewStayDuration; // @synthesize landingViewStayDuration=_landingViewStayDuration;
@property(nonatomic) long landingViewLoadingDuration; // @synthesize landingViewLoadingDuration=_landingViewLoadingDuration;
@property(nonatomic) long middleViewStayDuration; // @synthesize middleViewStayDuration=_middleViewStayDuration;
@property(nonatomic) long middleViewLoadingDuration; // @synthesize middleViewLoadingDuration=_middleViewLoadingDuration;
- (void)computeDuration;
- (id)description;

@end

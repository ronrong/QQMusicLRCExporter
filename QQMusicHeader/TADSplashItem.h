//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TADItemInfo, UIImage;

@interface TADSplashItem : NSObject
{
    NSString *_idStr;
    UIImage *_splashImage;
    NSString *_splashVideo;
    NSString *_adBrandName;
    NSString *_adDescription;
    NSString *_link;
    int _landingPageType;
    TADItemInfo *_tadItem;
    double _duration;
    double _video_duration;
}

@property(retain, nonatomic) TADItemInfo *tadItem; // @synthesize tadItem=_tadItem;
@property(nonatomic) int landingPageType; // @synthesize landingPageType=_landingPageType;
@property(nonatomic) double video_duration; // @synthesize video_duration=_video_duration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *adDescription; // @synthesize adDescription=_adDescription;
@property(retain, nonatomic) NSString *adBrandName; // @synthesize adBrandName=_adBrandName;
@property(retain, nonatomic) NSString *splashVideo; // @synthesize splashVideo=_splashVideo;
@property(retain, nonatomic) UIImage *splashImage; // @synthesize splashImage=_splashImage;
@property(retain, nonatomic) NSString *idStr; // @synthesize idStr=_idStr;
- (void).cxx_destruct;
- (void)dealloc;

@end


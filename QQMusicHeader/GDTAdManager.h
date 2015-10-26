//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtocolHostDelegate.h"

@class FlashScreenManager, GDTBannerManager;

__attribute__((visibility("hidden")))
@interface GDTAdManager : NSObject <ProtocolHostDelegate>
{
    GDTBannerManager *_imageBannerManager;
    GDTBannerManager *_imageTextBannerManager;
    FlashScreenManager *_flashScreenManager;
}

+ (id)sharedAdManager;
+ (id)managerWithAdType:(unsigned int)arg1;
@property(retain, nonatomic) FlashScreenManager *flashScreenManager; // @synthesize flashScreenManager=_flashScreenManager;
@property(retain, nonatomic) GDTBannerManager *imageTextBannerManager; // @synthesize imageTextBannerManager=_imageTextBannerManager;
@property(retain, nonatomic) GDTBannerManager *imageBannerManager; // @synthesize imageBannerManager=_imageBannerManager;
- (void).cxx_destruct;
- (void)setUpFlashScreenManager;
- (void)setUpImageTextBannerManager;
- (void)setUpImageBannerManager;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DownLoadTaskDelegate.h"
#import "GDTFlashScreenDelegate.h"
#import "ProtocolHostDelegate.h"

@class GDTFlashScreenProtocol, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface FlashScreenManager : NSObject <ProtocolHostDelegate, GDTFlashScreenDelegate, DownLoadTaskDelegate>
{
    NSObject<OS_dispatch_queue> *_splashWriteFileQueue;
    GDTFlashScreenProtocol *_gdtFlashScreenProtocol;
    NSMutableArray *_dynamicSplashDownloadTask;
}

@property(retain, nonatomic) NSMutableArray *dynamicSplashDownloadTask; // @synthesize dynamicSplashDownloadTask=_dynamicSplashDownloadTask;
@property(retain, nonatomic) GDTFlashScreenProtocol *gdtFlashScreenProtocol; // @synthesize gdtFlashScreenProtocol=_gdtFlashScreenProtocol;
- (void).cxx_destruct;
- (void)download:(id)arg1 didAppendProgress:(float)arg2;
- (void)download:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)download:(id)arg1 error:(id)arg2;
- (void)download:(id)arg1 didDownloadSuccWithFile:(id)arg2;
- (void)unzipFileAsynchrously:(id)arg1 toFilePath:(id)arg2 overWrite:(BOOL)arg3;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (BOOL)isVip;
- (BOOL)shouldLoadGDTFlash;
- (id)filteredAdForVipUser:(id)arg1;
- (void)reportDelayReportItem;
- (void)saveFlashScreenReportItem:(id)arg1;
- (void)doReportSplash:(id)arg1 exposureTime:(double)arg2 clicked:(BOOL)arg3 isJumpOver:(BOOL)arg4;
- (void)doReportGDTFlashScreen:(id)arg1 exposureTime:(double)arg2 exposureUrl:(id)arg3 targetUrl:(id)arg4;
- (void)onLoadGTDFlashScreenSuccess:(id)arg1;
- (void)cleanCachedData;
- (void)cleanCachedRescource;
- (id)getRandomItem:(id)arg1;
- (id)getSplashItem:(id)arg1 byID:(id)arg2;
- (void)filterShownSplash:(id)arg1 items:(id)arg2;
- (id)getAvailableItem;
- (void)loadFlashScreenItemResource:(id)arg1;
- (void)startDownLoad;
- (id)loadFlashScreens;
- (void)saveFlashScreens:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


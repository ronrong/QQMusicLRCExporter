//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileManagerDelegate.h"
#import "NSURLConnectionDataDelegate.h"

@class NSFileManager, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

__attribute__((visibility("hidden")))
@interface QQOfflineWebApp : NSObject <NSFileManagerDelegate, NSURLConnectionDataDelegate>
{
    NSMutableArray *_expiredBids;
    NSFileManager *_fileManager;
    NSObject<OS_dispatch_semaphore> *_webappCacheNewSemaphore;
    NSString *_documentPath;
    NSString *_pathToWebappCacheInDocuments;
    NSString *_pathToWebappCacheNewInDocuments;
    NSString *_pathToWebappCacheInQQApp;
    NSMutableArray *_updatingBusinesses;
    NSString *_clientVersion;
    int _currentBid;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_queue> *_downloadQueue;
    NSMutableDictionary *_urlMap;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *urlMap; // @synthesize urlMap=_urlMap;
- (void).cxx_destruct;
- (int)internalDownloadUpdateForBusiness:(id)arg1 url:(id)arg2;
- (id)internalShouldUpdateForBusiness:(id)arg1 responseText:(id)arg2;
- (id)internalGetServerResponseForBusiness:(id)arg1;
- (void)downloadUpdateForBusiness:(id)arg1 zipUrl:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)checkUpdateOnlyForBusiness:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onQQLoginSuccessNotification:(id)arg1;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (id)uuid;
- (void)setBusiness:(id)arg1 isCurrentlyUpdating:(BOOL)arg2;
- (BOOL)isCurrentlyUpdating:(id)arg1;
- (BOOL)isCurrentlyUpdating;
- (void)unmarkCheckUpdateRecentlyForBusiness:(id)arg1;
- (void)markCheckUpdateRecentlyForBusiness:(id)arg1;
- (BOOL)hasAlreadyCheckUpdateRecentlyForBusiness:(id)arg1;
- (int)updateIntervalForBusiness:(id)arg1;
- (BOOL)remoteVersionNumber:(int)arg1 isBiggerThenLocalVersionNumberOfBusiness:(id)arg2;
- (int)readLocalVersionNumberForBusiness:(id)arg1;
- (int)readUpdateFrequencyForBusiness:(id)arg1;
- (id)readLocalConfigForBusiness:(id)arg1;
- (BOOL)copyWebappCacheFromQQAppToDocuments;
- (BOOL)removeWebappCacheInDocuments;
- (void)markBundleFilesAlreadyCopied;
- (BOOL)alreadyCopiedBundleFilesToDocuments;
- (BOOL)hasNewVersionInQQAppBundle;
- (id)localFileContentForUrl:(id)arg1;
- (BOOL)hasLocalVersionForUrl:(id)arg1;
- (id)localPathForUrl:(id)arg1 withBid:(BOOL)arg2;
- (id)urlMapKeyForUrl:(id)arg1;
- (int)bidForUrl:(id)arg1;
- (void)rebuildUrlMap;
- (void)handleUnprocessedUpdates;
- (void)checkUpdateHelperForBusiness:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)checkUpdateForBusiness:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)checkUpdateForBusiness:(id)arg1;
- (void)checkUpdateForUrl:(id)arg1;
- (int)localVersionOfBusiness:(id)arg1;
- (void)ensureCacheFolder0Exists;
- (BOOL)clearWebAppCacheFolder;
- (BOOL)initializeWebAppCacheInDocuments;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

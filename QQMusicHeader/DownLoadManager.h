//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ListBase.h"

#import "DownLoadTaskDelegate.h"
#import "LaucherNumer.h"
#import "ProtocolHostDelegate.h"

@class DownLoadTask, DownloadHistoryProtocol, FolderInfo, LaucherNumer, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface DownLoadManager : ListBase <DownLoadTaskDelegate, ProtocolHostDelegate, LaucherNumer>
{
    NSMutableDictionary *listDownLoadTasks;
    DownLoadTask *current;
    float lastPercent;
    ListBase *downloadedList;
    ListBase *downloadingList;
    ListBase *downloadHistoryList;
    FolderInfo *downloadedFolderInfo;
    FolderInfo *downloadingFolderInfo;
    DownloadHistoryProtocol *downloadHistoryProtocol;
    LaucherNumer *laucherNumber;
    unsigned int lastNetworkStatus;
    BOOL _keepDownloadViaCarrier;
    BOOL _hasShownDisableDownlaodViaNetworkAlert;
    BOOL _downloadedNewSong;
}

+ (id)existedIndexSetInSongs:(id)arg1;
+ (void)checkIfExclusiveSongOkToDownload:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (BOOL)isUpSettingDownloadLimit;
+ (int)getSeetingDownloadLimit;
+ (id)getRateStringBySong:(id)arg1;
+ (id)sharedDownLoadManager;
+ (BOOL)isDownloading;
+ (BOOL)isDownloading:(id)arg1;
+ (BOOL)isDownloadOK:(id)arg1;
+ (BOOL)isNeedToBeDownload:(id)arg1;
@property BOOL downloadedNewSong; // @synthesize downloadedNewSong=_downloadedNewSong;
@property(nonatomic) BOOL hasShownDisableDownlaodViaNetworkAlert; // @synthesize hasShownDisableDownlaodViaNetworkAlert=_hasShownDisableDownlaodViaNetworkAlert;
@property(readonly, nonatomic) BOOL keepDownloadViaCarrier; // @synthesize keepDownloadViaCarrier=_keepDownloadViaCarrier;
@property(readonly, nonatomic) LaucherNumer *laucherNumber; // @synthesize laucherNumber;
@property(readonly, nonatomic) DownloadHistoryProtocol *downloadHistoryProtocol; // @synthesize downloadHistoryProtocol;
@property(readonly, nonatomic) FolderInfo *downloadingFolderInfo; // @synthesize downloadingFolderInfo;
@property(readonly, nonatomic) FolderInfo *downloadedFolderInfo; // @synthesize downloadedFolderInfo;
@property(retain, nonatomic) ListBase *downloadHistoryList; // @synthesize downloadHistoryList;
@property(readonly, nonatomic) ListBase *downloadingList; // @synthesize downloadingList;
@property(readonly, nonatomic) ListBase *downloadedList; // @synthesize downloadedList;
@property(retain, nonatomic) DownLoadTask *current; // @synthesize current;
- (void).cxx_destruct;
- (int)laucherNumberNextUpdateTime;
- (void)laucherNumerSaveLastTime:(int)arg1;
- (int)laucherNumerLastTime;
- (BOOL)laucherNumerIsDataLoadFinish;
- (void)_makeClearTimeoutReason:(id)arg1;
- (BOOL)allNeedManualStart;
- (void)showDisableDownloadViaCarrierAlertBeforeAdded:(CDUnknownBlockType)arg1;
- (int)_clickStatusOfAlertBeforeAddedByButtonIndex:(int)arg1;
- (void)showDisableDownloadViaCarrierAlert:(CDUnknownBlockType)arg1;
- (BOOL)needShowDisableDownloadViaCarrierAlert;
- (void)onDownloadNetworkSettingChanged;
- (void)disableKeepDownloadViaCarrier;
- (void)enableKeepDownloadViaCarrier;
- (id)filterSongs:(id)arg1;
- (id)getAllDownloadSongs:(id)arg1;
- (unsigned int)_guessDownloadedSizeOfSong:(id)arg1 highQuality:(BOOL)arg2;
- (void)addStat;
- (void)updateDownloadFolderCount;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (void)insertNewDownloaded:(id)arg1;
- (void)getDownloadHistoryListDataFromSerial:(unsigned int)arg1 toSerial:(unsigned int)arg2 lastReceivedSongID:(long long)arg3 addTime:(long long)arg4;
- (void)downloadOK:(id)arg1;
- (void)download:(id)arg1 willUseAddress:(id)arg2 urlEncoded:(BOOL)arg3;
- (void)download:(id)arg1 error:(id)arg2;
- (void)download:(id)arg1 didDownloadSuccWithFile:(id)arg2;
- (void)download:(id)arg1 didAppendProgress:(float)arg2;
- (void)download:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (BOOL)isSongDownloadedBefore:(id)arg1;
- (unsigned int)downloadingExclusiveSongNumber;
- (BOOL)checkIsDownload:(id)arg1;
- (void)processNext;
- (BOOL)canDownloadViaCurrentNetwork;
- (void)clearAllSongs;
- (int)getDownloadedHighQualityCounts;
- (void)deleteDownloadTask:(id)arg1;
- (void)batchDeleteDownloadtask:(id)arg1;
- (void)InterruptWaitingTask;
- (void)pauseAllTask;
- (BOOL)pauseOrResumeDownloadTask:(id)arg1;
- (void)startAll;
- (BOOL)isDownloading:(id)arg1;
- (void)_checkAddResult:(id)arg1;
- (void)backgroundBatchAddToDownload:(id)arg1 quality:(int)arg2 expInfos:(id)arg3 stat:(id)arg4 block:(CDUnknownBlockType)arg5 showNetAlert:(BOOL)arg6;
- (void)_backgroundBatchAddToDownload:(id)arg1 quality:(int)arg2 expInfos:(id)arg3 stat:(id)arg4 block:(CDUnknownBlockType)arg5;
- (id)batchAddToDownload:(id)arg1 quality:(int)arg2 expInfos:(id)arg3 stat:(id)arg4 stopedCurrent:(BOOL)arg5;
- (void)_reverseOrder:(id *)arg1 expInfos:(id *)arg2;
- (void)_restoreDataFromDownloadingResult:(id)arg1;
- (void)_saveDataToDownloadingResult:(id)arg1;
- (void)addToDownload:(id)arg1 quality:(int)arg2 expInfo:(id)arg3 stat:(id)arg4;
- (void)addTodownloadBySongId:(long long)arg1;
- (id)_joinDownloadingTask:(id)arg1 newTaskInfos:(id)arg2 newTaskExpInfos:(id)arg3 insertBelowFirstOne:(BOOL)arg4;
- (id)_fixAddToDownloadExpInfoCount:(id)arg1 songsCount:(unsigned int)arg2 quality:(int)arg3;
- (void)_statAddToDownload:(id)arg1 stat:(id)arg2;
- (void)transferAutoSaveToDownloadBySongId:(long long)arg1;
- (unsigned int)_getMaxAddTimeFromList:(id)arg1;
- (unsigned int)_getMaxAddTime:(BOOL)arg1;
- (unsigned int)nextUpdateTime;
- (unsigned int)nextAddTimeToDownloaded;
- (unsigned int)nextAddTimeToDownloading;
- (void)decryptExclusiveSong:(id)arg1;
- (void)writeDownloadSongAttributeAndReport:(id)arg1 stat:(id)arg2 expInfo:(id)arg3 addResult:(id)arg4;
- (id)getDownloadList:(id)arg1 quality:(int)arg2 expInfo:(id)arg3 statFrom:(id)arg4 addResult:(id)arg5;
- (void)downloadSucc:(id)arg1 expInfo:(id)arg2 File:(id)arg3 downloaded:(id)arg4;
- (void)_notifyUIAfterDownloadSuccess;
- (void)addToDownloaded:(id)arg1 File:(id)arg2;
- (void)processDownloadingData;
- (id)getTask:(id)arg1;
- (void)reloadDownloadedDbData;
- (void)reloadDBData;
- (void)dealloc;
- (void)netChange;
- (void)reachabilityChanged:(id)arg1;
- (void)_autoDownloadAllAfterStartup;
- (void)onNofityLogout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


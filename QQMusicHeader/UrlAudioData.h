//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AudioDataBase.h"

#import "ASIHTTPRequestDelegate.h"
#import "SongInfoFreshDelegate.h"

@class ASIHTTPRequest, NSFileHandle, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLConnection, RetryLogic, SongInfo;

__attribute__((visibility("hidden")))
@interface UrlAudioData : AudioDataBase <SongInfoFreshDelegate, ASIHTTPRequestDelegate>
{
    SongInfo *saveSong;
    NSURLConnection *taskConnection;
    NSString *tempFile;
    NSFileHandle *storeDataFileHandle;
    BOOL downloadFinish;
    _Bool m_bHourGlassGeted;
    int dataLength;
    BOOL saveFlg;
    id <UrlAudioDataDelegate> _delegate;
    NSString *saveFilePath;
    NSObject<OS_dispatch_queue> *fileWritingQueue;
    BOOL _hasPostNoDataNotify;
    BOOL _hqDownding;
    BOOL _sqDownding;
    BOOL _pauseFlg;
    BOOL _hasFirstCache;
    BOOL _didRequestLastRangeData;
    NSURL *downloadURL;
    unsigned long _iTimeConnectedToServer;
    unsigned long _iTImeGetFirstPacketData;
    int _lastPlayURLIndex;
    NSString *_cdnHost;
    ASIHTTPRequest *_asiHttpRequest;
    int _statusCode;
    RetryLogic *_retryLogic;
    int _currentSongRateType;
    int _firstPieceDataSize;
    double _nextCacheSeconds;
}

@property(nonatomic) BOOL didRequestLastRangeData; // @synthesize didRequestLastRangeData=_didRequestLastRangeData;
@property(nonatomic) int firstPieceDataSize; // @synthesize firstPieceDataSize=_firstPieceDataSize;
@property(nonatomic) double nextCacheSeconds; // @synthesize nextCacheSeconds=_nextCacheSeconds;
@property(nonatomic) int currentSongRateType; // @synthesize currentSongRateType=_currentSongRateType;
@property(retain, nonatomic) RetryLogic *retryLogic; // @synthesize retryLogic=_retryLogic;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) ASIHTTPRequest *asiHttpRequest; // @synthesize asiHttpRequest=_asiHttpRequest;
@property(retain, nonatomic) NSString *cdnHost; // @synthesize cdnHost=_cdnHost;
@property(readonly, nonatomic) BOOL hasFirstCache; // @synthesize hasFirstCache=_hasFirstCache;
@property(readonly, nonatomic) int lastPlayURLIndex; // @synthesize lastPlayURLIndex=_lastPlayURLIndex;
@property BOOL pauseFlg; // @synthesize pauseFlg=_pauseFlg;
@property unsigned long iTImeGetFirstPacketData; // @synthesize iTImeGetFirstPacketData=_iTImeGetFirstPacketData;
@property unsigned long iTimeConnectedToServer; // @synthesize iTimeConnectedToServer=_iTimeConnectedToServer;
@property(retain, nonatomic) NSString *saveFilePath; // @synthesize saveFilePath;
@property(retain, nonatomic) NSURL *downloadURL; // @synthesize downloadURL;
@property BOOL downloadFinish; // @synthesize downloadFinish;
- (void).cxx_destruct;
- (void)calcLoadingPercent;
- (BOOL)_firstPieceDataCached;
- (BOOL)_fullCached;
- (void)saveLocalFileForRecentPlay;
- (void)_deletePlayingTempFileExcept:(id)arg1;
- (id)getPlayingLocalFilePath;
- (int)getLastError;
- (void)setLastError:(int)arg1;
- (BOOL)bufferingEnough;
- (double)loadingPercent;
- (void)_tryUseFirstPieceCache;
- (void)upDateStumbCount;
- (void)addPlayingDataToIntellModel;
- (void)endNetSpeed;
- (void)startNetSpeed;
- (id)_optimizerURL:(id)arg1 songRateType:(int)arg2;
- (void)bFreshSongInfoCommplete:(id)arg1;
- (void)dealloc;
- (BOOL)_currentThreadIsFileWriteQueue;
- (double)currentBufferPercent;
- (void)connectionError;
- (BOOL)isDownLoaingSQ;
- (BOOL)isDownLoaingHQ;
- (void)checkSettingAndDoAutoSave;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)_checkHijack:(id)arg1;
- (void)_handleHttpStatusCodeOther:(id)arg1;
- (void)_handleHttpStatusCode200_206:(id)arg1;
- (int)getWifiName;
- (int)get3GName;
- (BOOL)isRealFinish;
- (void)cancelInMainThread;
- (void)stop;
- (BOOL)start;
- (BOOL)prepare;
- (id)createASIRequest:(unsigned int)arg1;
- (id)ASIRequestRange:(id)arg1;
- (void)refreshAudioPlayTimeInterval:(double)arg1;
- (BOOL)shouldSeparateRequestRange;
- (void)calcLengthBeforeCreateConnection;
- (void)retry;
- (void)totalyRetry;
- (void)checkDownloadAfterNetChanged;
- (void)resume;
- (void)pause;
- (void)restart;
- (id)readDataByLength:(int)arg1 From:(int)arg2 actuallyReadFrom:(int *)arg3;
- (id)initWithSong:(id)arg1 AutoSave:(BOOL)arg2 delegate:(id)arg3;
- (int)minBufferingSize;
- (float)_getNextCacheSeconds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


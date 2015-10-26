//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQMusicNetBaseDelegate.h"

@class NSNumber, NSString, QQMusicNetBase;

__attribute__((visibility("hidden")))
@interface ProtocolBase : NSObject <QQMusicNetBaseDelegate>
{
    id <ProtocolHostDelegate> host;
    Class hostClass;
    QQMusicNetBase *net;
    int cid;
    BOOL bGetXml;
    BOOL bWriteSendBufferLog;
    double fTimer;
    int m_iRetState;
    unsigned long long _startWorkTime;
    unsigned long long _netStartTime;
    unsigned long long _netResponseTime;
    unsigned long long _netFinishTime;
    unsigned long long _parseFinishTime;
    BOOL parseDataAsynchronized;
    BOOL _isRunning;
    BOOL m_ReceiveFormatOK;
    BOOL _bAutoRelease;
    BOOL _bFirstLoadLastData;
    NSString *_cgiName;
    NSNumber *_protocolKey;
    unsigned long _reqSize;
    unsigned long _resSize;
    int _httpResponseCode;
    NSObject *_context;
    CDUnknownBlockType _finishBlock;
    NSString *_localDataFile;
}

+ (id)protocolDebugData;
+ (void)releaseReference:(id *)arg1;
+ (void)addReference:(id)arg1;
+ (void)initReference;
+ (id)defaultHost;
+ (void)freshHost;
+ (id)getDefaultMusichallHost;
+ (id)getDefaultAppConfHost;
+ (id)getDefaultStatHost;
+ (id)getDefaultRecognizHost;
+ (id)getDefaultSplCloudHost;
+ (id)getDefaultUnicomHost;
+ (id)getDefaultLyricHost;
+ (id)getDefaultSongListEditHost;
+ (id)getDefaultBaseMusicHost;
+ (id)getDefaultJsonHost;
+ (id)getDefaultXmlHost;
+ (id)getDefaultBaseISDHost;
+ (id)getCVStr;
@property(retain, nonatomic) NSString *localDataFile; // @synthesize localDataFile=_localDataFile;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) BOOL bFirstLoadLastData; // @synthesize bFirstLoadLastData=_bFirstLoadLastData;
@property(retain, nonatomic) NSObject *context; // @synthesize context=_context;
@property(nonatomic) int httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
@property(nonatomic) unsigned long resSize; // @synthesize resSize=_resSize;
@property(nonatomic) unsigned long reqSize; // @synthesize reqSize=_reqSize;
@property(nonatomic) BOOL bAutoRelease; // @synthesize bAutoRelease=_bAutoRelease;
@property(nonatomic) BOOL m_ReceiveFormatOK; // @synthesize m_ReceiveFormatOK;
@property(readonly) NSNumber *protocolKey; // @synthesize protocolKey=_protocolKey;
@property(nonatomic) Class hostClass; // @synthesize hostClass;
@property(retain, nonatomic) NSString *cgiName; // @synthesize cgiName=_cgiName;
@property(readonly, nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) int m_iRetState; // @synthesize m_iRetState;
@property(nonatomic) BOOL parseDataAsynchronized; // @synthesize parseDataAsynchronized;
@property(nonatomic) BOOL bWriteSendBufferLog; // @synthesize bWriteSendBufferLog;
@property(nonatomic) BOOL bGetXml; // @synthesize bGetXml;
@property(nonatomic) int cid; // @synthesize cid;
@property(nonatomic) __weak id <ProtocolHostDelegate> host; // @synthesize host;
- (void).cxx_destruct;
- (void)checkStatTimeValid;
- (void)setNetStartTime:(unsigned long long)arg1;
- (void)setStartWorkTime:(unsigned long long)arg1;
- (BOOL)useCustomQQ;
- (void)addCgiStat:(int)arg1;
- (void)_getHistoryDomainIp:(id)arg1 domains:(id *)arg2 ips:(id *)arg3 httpStatus:(id *)arg4 lastXmlCode:(int)arg5;
- (double)getElapsedTime;
- (id)getProtocolHistoryRequestItem;
- (BOOL)permanentLog;
- (BOOL)forceDoNotUseKeepAliveProxy;
- (void)fireBackWithResult:(int)arg1;
- (void)_fireBackWithResult:(id)arg1;
- (void)_fireBackWithLocal:(id)arg1;
- (void)_fireBackWithResultOnMainThread:(id)arg1;
- (BOOL)isDataBeginWithFiveZero:(id)arg1;
- (void)netBase:(id)arg1 didFailWithError:(int)arg2;
- (void)netBaseDidFinishLoading:(id)arg1;
- (void)netBase:(id)arg1 didReceiveData:(id)arg2;
- (void)netBase:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)parseCompressedData:(id)arg1;
- (void)continueWorkWithUIDSIDError;
- (void)continueWorkWith:(id)arg1 SID:(id)arg2;
- (void)delayFireBackWithObject:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)createPostData:(id)arg1 SIDStr:(id)arg2;
- (BOOL)canReportError;
- (id)getProcessedUrl;
- (id)getUrl;
- (void)_startWorkOnMainThread:(id)arg1;
- (id)GetCurrentTimeStamp;
- (void)startWorkWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)startWork;
- (void)_loadDataFromLocalFile;
- (void)_parseCompressedData:(id)arg1 WithCallback:(SEL)arg2;
- (id)getCVStr;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


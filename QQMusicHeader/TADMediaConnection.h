//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, TADMediaLog, TADReachability, TADReportDP3, TADUserInfo;

@interface TADMediaConnection : NSObject
{
    BOOL _isTest;
    BOOL _isFinished;
    BOOL _canSkip;
    id _delegate;
    NSDictionary *_userInfo;
    NSDictionary *_vmindLog;
    NSString *_requestID;
    int _rType;
    NSArray *_mediaItems;
    ASIHTTPRequest *_currentRequest;
    int _adaptor;
    NSString *_pu;
    NSString *_live;
    NSString *_dType;
    NSString *_defaultFmt;
    NSMutableArray *_videoItems;
    NSMutableDictionary *_videoInfo;
    NSTimer *_requestQueueTimer;
    TADReachability *_reachability;
    TADReportDP3 *_dp3Reporter;
    TADUserInfo *_userInfoReporter;
    TADMediaLog *_logService;
    TADMediaConnection *_me;
    double _timeout;
    double _startFlag;
    double _lastAdTime;
}

+ (void)MovieDidFinishPlaying;
+ (void)PlayerStartPlaying;
+ (void)Finish;
+ (id)requestQueue;
@property(retain, nonatomic) TADMediaConnection *me; // @synthesize me=_me;
@property(retain, nonatomic) TADMediaLog *logService; // @synthesize logService=_logService;
@property(retain, nonatomic) TADUserInfo *userInfoReporter; // @synthesize userInfoReporter=_userInfoReporter;
@property(retain, nonatomic) TADReportDP3 *dp3Reporter; // @synthesize dp3Reporter=_dp3Reporter;
@property(nonatomic) BOOL canSkip; // @synthesize canSkip=_canSkip;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) double lastAdTime; // @synthesize lastAdTime=_lastAdTime;
@property(nonatomic) double startFlag; // @synthesize startFlag=_startFlag;
@property(nonatomic) TADReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSTimer *requestQueueTimer; // @synthesize requestQueueTimer=_requestQueueTimer;
@property(retain, nonatomic) NSMutableDictionary *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) NSMutableArray *videoItems; // @synthesize videoItems=_videoItems;
@property(copy, nonatomic) NSString *defaultFmt; // @synthesize defaultFmt=_defaultFmt;
@property(copy, nonatomic) NSString *dType; // @synthesize dType=_dType;
@property(copy, nonatomic) NSString *live; // @synthesize live=_live;
@property(copy, nonatomic) NSString *pu; // @synthesize pu=_pu;
@property(nonatomic) int adaptor; // @synthesize adaptor=_adaptor;
@property(retain, nonatomic) ASIHTTPRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(nonatomic) int rType; // @synthesize rType=_rType;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) BOOL isTest; // @synthesize isTest=_isTest;
@property(retain, nonatomic) NSDictionary *vmindLog; // @synthesize vmindLog=_vmindLog;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)convertRemoteUrlToLocalUrl:(id)arg1;
- (void)adServiceDidReceiveAd;
- (void)adServiceDidFailToReceiveAdWithError:(id)arg1;
- (void)adConnectionFaildOnCreateWithError:(id)arg1;
- (void)loadVideoSourceFailed:(id)arg1;
- (void)loadVideoSourceFinished:(id)arg1;
- (void)transformVidToVideoSourceWith:(id)arg1;
- (void)transformedMediaItems:(id)arg1;
- (BOOL)isValidAdURLString:(id)arg1;
- (BOOL)parseAdListDict:(id)arg1 mergedItems:(id *)arg2 otherItems:(id *)arg3;
- (void)loadAdListFailed:(id)arg1;
- (void)loadAdListFinished:(id)arg1;
- (void)sendAdListRequest:(id)arg1;
- (void)sendAdListRequestWithAdaptor;
- (BOOL)checkAdidInfo:(id)arg1;
- (void)loadAdidFailed:(id)arg1;
- (void)loadAdidFinished:(id)arg1;
- (void)sendAdidRequest:(id)arg1;
- (int)requestTimeCost;
- (void)cancelByTimer;
- (void)cancelWithError:(id)arg1;
- (void)cancel;
- (void)resetConnetion;
- (void)requestStarted:(id)arg1;
- (id)createUinCookies;
- (id)vipInfo;
- (int)checkInternalAdRequestControlConfig:(id)arg1;
- (int)checkExternalAdRequestControlConfig:(id)arg1;
- (BOOL)shouldSendAdReuqest:(id)arg1;
- (void)connectionWithVideoInfo:(id)arg1 userInfo:(id)arg2 delegate:(id)arg3;
- (void)connectionWithVideoInfo:(id)arg1 delegate:(id)arg2;
- (id)url:(id)arg1 withRetryCode:(int)arg2;
- (double)defaultRequestTimeOut;
- (BOOL)retryRequest:(id)arg1;
- (id)createRequestWithURL:(id)arg1 rawURL:(id)arg2 cachePolicy:(int)arg3 delegate:(id)arg4 finishSelector:(SEL)arg5 failSelector:(SEL)arg6 cookies:(id)arg7 userAgent:(id)arg8 userInfo:(id)arg9 failedCount:(int)arg10 timeOutSeconds:(double)arg11;
- (id)createRequestWithURL:(id)arg1 rawURL:(id)arg2 cachePolicy:(int)arg3 delegate:(id)arg4 finishSelector:(SEL)arg5 failSelector:(SEL)arg6 cookies:(id)arg7 userAgent:(id)arg8 userInfo:(id)arg9;
- (void)timeDiffUpdated;
- (id)requestAdTypeString;
- (void)setRequestAdType:(int)arg1;
- (BOOL)isRequestPauseAd;
- (void)dealloc;
- (id)init;

@end

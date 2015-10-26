//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASIHTTPRequest.h"

@class NSString;

@interface QLASIHTTPRequest : ASIHTTPRequest
{
    id <QLASIHTTPDelegate> _userdelegate;
    struct timeval startTime;
    CDUnknownBlockType _completionBlock;
    BOOL isLoading;
    BOOL _enableAutoRetry;
    unsigned int _modelID;
    NSString *backUpHost;
    unsigned int requestTimes;
    unsigned int ztid;
    id <QLASIURLResponse> response;
    NSString *_urlMD5;
    long _waitingDuration;
    long _connectDuration;
    long _downloadDuration;
}

+ (id)getCacheQueue;
+ (id)getNetQueue;
+ (id)requestWithURL:(id)arg1 userdelegate:(id)arg2;
@property(readonly, nonatomic) long downloadDuration; // @synthesize downloadDuration=_downloadDuration;
@property(readonly, nonatomic) long connectDuration; // @synthesize connectDuration=_connectDuration;
@property(readonly, nonatomic) long waitingDuration; // @synthesize waitingDuration=_waitingDuration;
@property(nonatomic) BOOL enableAutoRetry; // @synthesize enableAutoRetry=_enableAutoRetry;
@property(retain, nonatomic) NSString *urlMD5; // @synthesize urlMD5=_urlMD5;
@property(readonly, nonatomic) BOOL isLoading; // @synthesize isLoading;
@property(retain, nonatomic) id <QLASIURLResponse> response; // @synthesize response;
@property(nonatomic) unsigned int ztid; // @synthesize ztid;
@property(nonatomic) id <QLASIHTTPDelegate> userdelegate; // @synthesize userdelegate=_userdelegate;
@property unsigned int requestTimes; // @synthesize requestTimes;
@property(retain, nonatomic) NSString *backUpHost; // @synthesize backUpHost;
@property unsigned int modelID; // @synthesize modelID=_modelID;
- (BOOL)addRecordAndCheck:(BOOL)arg1;
- (BOOL)isStatusCodeError:(id)arg1;
- (BOOL)shouldReportForModelID:(unsigned int)arg1;
- (BOOL)retryRequest:(unsigned int)arg1;
- (long)showtmpDuration;
- (long)getTimeLengthWithStartTime:(struct timeval)arg1 endTime:(struct timeval)arg2;
- (id)makeBackUpUrl:(id)arg1;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestDidFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestDidStartLoad:(id)arg1;
- (void)requestWillFinishedLoad:(id)arg1;
- (BOOL)checkDelegateValid:(id)arg1 URL:(id)arg2;
- (void)setDefaultCookies;
- (id)initWithURL:(id)arg1 userdelegate:(id)arg2;
- (void)send;
- (void)clearDelegatesAndCancel;
- (void)cancel;
- (void)dealloc;
- (void)loadCacheWithSetCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sendWithSetCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;

@end

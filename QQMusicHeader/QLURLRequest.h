//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTURLRequest.h"

@class NSString;

@interface QLURLRequest : TTURLRequest
{
    id <TTURLRequestDelegate> _delegate;
    struct timeval startTime;
    BOOL _enableAutoRetry;
    int _modelID;
    NSString *backUpHost;
    int requestTimes;
    int ztid;
}

+ (id)requestWithURL:(id)arg1 delegate:(id)arg2;
@property(nonatomic) BOOL enableAutoRetry; // @synthesize enableAutoRetry=_enableAutoRetry;
@property(nonatomic) int ztid; // @synthesize ztid;
@property(nonatomic) id <TTURLRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property int requestTimes; // @synthesize requestTimes;
@property(retain, nonatomic) NSString *backUpHost; // @synthesize backUpHost;
@property int modelID; // @synthesize modelID=_modelID;
- (BOOL)addRecordAndCheck:(BOOL)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestDidStartLoad:(id)arg1;
- (void)requestDidCancelLoad:(id)arg1;
- (void)request:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)requestDidUploadData:(id)arg1;
- (long)showtmpDuration;
- (id)makeBackUpUrl:(id)arg1;
- (long)getTimeLengthWithStartTime:(struct timeval)arg1 endTime:(struct timeval)arg2;
- (BOOL)retryRequest:(int)arg1;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (void)cancel;
- (void)dealloc;

@end


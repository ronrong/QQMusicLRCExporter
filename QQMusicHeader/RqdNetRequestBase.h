//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData, NSMutableURLRequest, NSString, NSURLConnection, RqdReqDataPackage;

@interface RqdNetRequestBase : NSObject
{
    int priority;
    NSString *serverUrl;
    RqdReqDataPackage *reqDataPkg;
    id delegate;
    BOOL checkNetStatus;
    NSURLConnection *urlConnection;
    NSMutableURLRequest *request;
    NSData *retryPostData;
    NSMutableData *rspData;
}

+ (id)defaultQueue;
@property(retain, nonatomic) NSData *retryPostData; // @synthesize retryPostData;
@property(retain, nonatomic) NSMutableData *rspData; // @synthesize rspData;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(retain, nonatomic) RqdReqDataPackage *reqDataPkg; // @synthesize reqDataPkg;
@property(retain, nonatomic) NSString *serverUrl; // @synthesize serverUrl;
@property(nonatomic) BOOL checkNetStatus; // @synthesize checkNetStatus;
@property(nonatomic) int priority; // @synthesize priority;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)doSuccessOperation:(id)arg1;
- (void)doFailOperation:(id)arg1;
- (void)_startAsync;
- (void)dealloc;
- (id)init;
- (void)reqFinished;
- (void)startAsync;

@end


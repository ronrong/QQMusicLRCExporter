//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest;

@interface TADConfigUpdateProcess : NSObject
{
    BOOL _MD5Check;
    ASIHTTPRequest *_fileRequest;
    int _exceptionReportCount;
}

+ (id)sharedUpdateProcess;
@property(nonatomic) int exceptionReportCount; // @synthesize exceptionReportCount=_exceptionReportCount;
@property(nonatomic) BOOL MD5Check; // @synthesize MD5Check=_MD5Check;
@property(retain, nonatomic) ASIHTTPRequest *fileRequest; // @synthesize fileRequest=_fileRequest;
- (void).cxx_destruct;
- (void)feedbackForException:(id)arg1;
- (void)feedbackForFailedUpdateWithRequest:(id)arg1 errorType:(int)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)requestStarted:(id)arg1;
- (void)updateConfigFromURL:(id)arg1 WithMD5Check:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end


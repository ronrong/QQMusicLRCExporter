//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest, NSData, NSString;

@interface TADQLFileLoader : NSObject
{
    id _weakTarget;
    SEL _actionSel;
    BOOL _isPermanentStorage;
    NSString *_url;
    NSString *_vid;
    ASIHTTPRequest *_request;
    NSData *_data;
    CDUnknownBlockType _progressBlock;
    double _timeout;
}

+ (id)FileLoader;
@property(nonatomic) BOOL isPermanentStorage; // @synthesize isPermanentStorage=_isPermanentStorage;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) ASIHTTPRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)cachePathWithURL:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (void)clearTargetAndAction;
- (void)p_callBlock:(CDUnknownBlockType)arg1;
- (void)p_performBlockOnMainThread:(CDUnknownBlockType)arg1;
- (void)requestDidReceiveAccurateBytes:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (BOOL)p_setData:(id)arg1;
- (void)action;
- (void)downloadFileNOCacheWithURL:(id)arg1 priority:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)downloadFileWithURL:(id)arg1 priority:(int)arg2 target:(id)arg3 action:(SEL)arg4 permanently:(BOOL)arg5;
- (void)downloadFileWithURL:(id)arg1 priority:(int)arg2 isoffline:(BOOL)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)downloadFileWithURL:(id)arg1 priority:(int)arg2 target:(id)arg3 action:(SEL)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (void)downloadFileWithURL:(id)arg1 priority:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)downloadFileWithURL:(id)arg1 priority:(int)arg2 useCache:(BOOL)arg3 allowResume:(BOOL)arg4 isoffline:(BOOL)arg5 target:(id)arg6 action:(SEL)arg7 progressBlock:(CDUnknownBlockType)arg8 permanently:(BOOL)arg9;
- (void)downloadFileWithURL:(id)arg1 priority:(int)arg2 useCache:(BOOL)arg3 allowResume:(BOOL)arg4 isoffline:(BOOL)arg5 target:(id)arg6 action:(SEL)arg7 progressBlock:(CDUnknownBlockType)arg8;
- (void)downloadFileWithURL:(id)arg1 priority:(int)arg2 useCache:(BOOL)arg3 allowResume:(BOOL)arg4 isoffline:(BOOL)arg5 target:(id)arg6 action:(SEL)arg7;
- (id)p_fileTemporaryPathForUrl:(id)arg1;
- (void)pauseDownload;
- (id)init;

@end


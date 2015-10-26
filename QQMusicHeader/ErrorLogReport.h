//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSLock, NSMutableArray, NSString, NSTimer, UploadLogFile, WloginSdk;

@interface ErrorLogReport : NSObject
{
    NSString *userAccount;
    unsigned int appid;
    WloginSdk *wloginSdk;
    NSString *_logFile;
    NSFileHandle *_fileHandle;
    NSString *_logDate;
    NSMutableArray *_caches;
    NSTimer *_timer;
    NSLock *_lock;
    BOOL _canSaveLogOpt;
    unsigned int _uin;
    UploadLogFile *_uploadTool;
}

+ (id)_filePathWithDirName:(id)arg1 andFileName:(id)arg2;
+ (id)_dayByBase64:(id)arg1;
+ (id)_curDay;
+ (void)freeSharedQueue;
+ (id)sharedQueue;
+ (id)singleton;
@property(retain, nonatomic) UploadLogFile *uploadTool; // @synthesize uploadTool=_uploadTool;
@property(nonatomic) unsigned int uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSMutableArray *caches; // @synthesize caches=_caches;
@property(retain, nonatomic) NSString *logFile; // @synthesize logFile=_logFile;
@property(retain, nonatomic) WloginSdk *wloginSdk; // @synthesize wloginSdk;
@property(nonatomic) unsigned int appid; // @synthesize appid;
@property(retain, nonatomic) NSString *userAccount; // @synthesize userAccount;
- (id)_dirPath;
- (int)uploadLog;
- (int)uploadLogFromDay:(long)arg1 toDay:(long)arg2;
- (int)uploadLogWithDay:(id)arg1;
- (void)checkLogFile;
- (void)processCheckLogFile;
- (int)syncLog;
- (void)writeLog:(unsigned int)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 msg:(id)arg5 arguments:(void *)arg6;
- (void)writeLog:(unsigned int)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 msg:(id)arg5;
- (void)outPutLog:(id)arg1;
- (void)timeToSaveLog;
- (void)asyncSaveLog;
- (void)_writeDataToFile:(id)arg1;
- (void)saveLog:(id)arg1;
- (void)saveLogThread:(id)arg1;
- (void)checkLogSize;
- (void)checkLogSizeOperation;
- (void)openFile;
- (void)dealloc;
- (void)clearFileHandle;
- (void)clearTimer;
- (id)init;
- (void)WillEnterForeground;
- (void)initLogFile;

@end

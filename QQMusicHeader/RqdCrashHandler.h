//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface RqdCrashHandler : NSObject
{
    NSString *attachLog;
    NSArray *excludeShortNames;
    BOOL excludeSave;
    NSArray *includeShortNames;
    NSString *strBuildStr;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *includeShortNames; // @synthesize includeShortNames;
@property(retain, nonatomic) NSString *strBuildStr; // @synthesize strBuildStr;
@property(retain, nonatomic) NSArray *excludeShortNames; // @synthesize excludeShortNames;
@property(nonatomic) BOOL excludeSave; // @synthesize excludeSave;
@property(retain, nonatomic) NSString *attachLog; // @synthesize attachLog;
- (long long)getTimeOfTodayStart;
- (BOOL)cleanInvalidExp;
- (BOOL)persistCrashToFile:(id *)arg1;
- (id)getCrashedNeedUpload:(int)arg1;
- (BOOL)expExist;
- (BOOL)cleanCrashReports:(id)arg1;
- (BOOL)cleanAllCrashReport;
- (BOOL)doUploadPostProcess:(id)arg1;
- (id)generateExpUploadObj;
- (BOOL)saveCrashData;
- (long long)getLastCrashTime;
- (void)persistLastCrashTime:(long long)arg1;
- (BOOL)hasLastCrashNeedReport;
- (void)persistLastCrashNeedReport:(BOOL)arg1;

@end

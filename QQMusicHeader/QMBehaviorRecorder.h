//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QMBehaviorRecorder : NSObject
{
    NSMutableArray *_actionRecords;
}

+ (id)sharedRecorder;
@property(retain, nonatomic) NSMutableArray *actionRecords; // @synthesize actionRecords=_actionRecords;
- (void).cxx_destruct;
- (void)_logout;
- (void)_loginSuccess;
- (id)_filePath;
- (void)saveRecordsToFile;
- (void)_restoreRecordsFromFile;
- (id)historyList;
- (void)recordAction:(id)arg1 saveToFileWhenFinished:(BOOL)arg2;
- (id)init;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QQMusicDBAdapter : NSObject
{
    NSString *dbPath;
}

+ (id)sharedQQMusicDBAdapter;
@property(retain, nonatomic) NSString *dbPath; // @synthesize dbPath;
- (void).cxx_destruct;
- (void)dealloc;
- (int)countForSQL:(id)arg1;
- (id)createDataSet:(id)arg1;
- (int)maxTable:(id)arg1 Field:(id)arg2 uin:(unsigned long)arg3 where:(id)arg4;
- (int)minTable:(id)arg1 Field:(id)arg2;
- (int)countTableDistinct:(id)arg1 table:(id)arg2 Where:(id)arg3;
- (int)countTable:(id)arg1 Where:(id)arg2;
- (void)rollbackTransaction;
- (void)commitTransaction;
- (void)endTransaction;
- (void)beginTransaction;
- (BOOL)deleteTabel:(id)arg1;
- (BOOL)createTable:(id)arg1 Value:(id)arg2;
- (id)selectTable:(id)arg1 What:(id)arg2 Where:(id)arg3 OrderBy:(id)arg4;
- (id)selectTable:(id)arg1 Where:(id)arg2 OrderBy:(id)arg3;
- (id)selectTable:(id)arg1 Where:(id)arg2;
- (BOOL)updateTable:(id)arg1 Data:(id)arg2 Where:(id)arg3;
- (BOOL)deleteTable:(id)arg1 Where:(id)arg2;
- (BOOL)insertTable:(id)arg1 Value:(id)arg2;
- (BOOL)insertTable:(id)arg1 Data:(id)arg2;
- (BOOL)executeSQL:(id)arg1;
- (id)formatSQL:(id)arg1 argumentList:(void *)arg2;
- (struct sqlite3 *)getDB;
- (void)closeDB;
- (BOOL)openDB;
- (id)initWithDBPath:(id)arg1;

@end


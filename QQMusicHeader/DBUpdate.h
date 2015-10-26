//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface DBUpdate : NSObject
{
    id <DBUpdateDelegate> delegate;
}

+ (void)rebuildDB;
+ (BOOL)isDBNeedRebuild;
+ (BOOL)beginUpdateDB;
+ (BOOL)isDBNeedUpdate;
@property(nonatomic) __weak id <DBUpdateDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)updateDBOneStepWithOldVersion:(int)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)updateDBWithOldVersion:(int)arg1 ToNowVersion:(int)arg2;
- (void)beginDBUpdate;
- (void)mainThreadFireOnUpdateDBWithProcessWithCurrent:(int)arg1 All:(int)arg2;
- (void)mainThreadFireOnUpdateDBWithProcess:(id)arg1;

@end


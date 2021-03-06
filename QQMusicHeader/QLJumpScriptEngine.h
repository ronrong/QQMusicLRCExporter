//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLJumpObjectOpenUrlDelegate.h"

@class NSArray, NSDictionary, NSString;

@interface QLJumpScriptEngine : NSObject <QLJumpObjectOpenUrlDelegate>
{
    BOOL _isCheckConfigValid;
    NSDictionary *_scriptDict;
    NSDictionary *_instanceReplaceDict;
    NSDictionary *_classReplaceDict;
    NSArray *_instanceOrgArray;
    NSArray *_classOrgArray;
}

+ (BOOL)OpenJumpUrlWithobject;
+ (BOOL)OpenJumpUrlWithArgumentDic:(id)arg1;
+ (id)getInstance;
@property(retain) NSArray *classOrgArray; // @synthesize classOrgArray=_classOrgArray;
@property(retain) NSArray *instanceOrgArray; // @synthesize instanceOrgArray=_instanceOrgArray;
@property(retain) NSDictionary *classReplaceDict; // @synthesize classReplaceDict=_classReplaceDict;
@property(retain) NSDictionary *instanceReplaceDict; // @synthesize instanceReplaceDict=_instanceReplaceDict;
@property(retain) NSDictionary *scriptDict; // @synthesize scriptDict=_scriptDict;
@property BOOL isCheckConfigValid; // @synthesize isCheckConfigValid=_isCheckConfigValid;
- (int)isValidScriptConfig:(id)arg1;
- (void)loadScriptConfig;
- (id)findReplaceScriptMethod:(id)arg1 isNeedCallOriginal:(char *)arg2;
- (id)runScript:(id)arg1 withVar:(id)arg2;
- (void)callMethod:(id)arg1;
- (void)callAllMethodWithType:(id)arg1;
- (void)EnterBackground;
- (void)EnterForeground;
- (void)stop;
- (void)start;
- (void)handleUpdateConfig:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLLangDyncConfig.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface QLConfigDataModel : NSObject <QLLangDyncConfig>
{
    NSDictionary *langConfigDict;
    NSNumber *langDataVersion;
    NSDictionary *propConfigDict;
    int _langLocation;
    NSMutableDictionary *_configCacheDict;
}

+ (id)instance;
@property(retain) NSMutableDictionary *configCacheDict; // @synthesize configCacheDict=_configCacheDict;
@property int langLocation; // @synthesize langLocation=_langLocation;
@property(retain) NSDictionary *propConfigDict; // @synthesize propConfigDict;
@property(retain) NSNumber *langDataVersion; // @synthesize langDataVersion;
@property(retain) NSDictionary *langConfigDict; // @synthesize langConfigDict;
- (void)setConfigWithDict:(id)arg1 isResetDefault:(BOOL)arg2;
- (id)getConfigPropertyArray:(id)arg1;
- (id)getConfigPropertyObject:(id)arg1;
- (id)getConfigPropertyString:(id)arg1;
- (BOOL)getConfigPropertyBool:(id)arg1;
- (double)getConfigPropertyDouble:(id)arg1;
- (float)getConfigPropertyFloat:(id)arg1;
- (int)getConfigPropertyInt:(id)arg1;
- (void)saveLangConfig:(id)arg1;
- (void)loadLangConfig;
- (id)getConfigString:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


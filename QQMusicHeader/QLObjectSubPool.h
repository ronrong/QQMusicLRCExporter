//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface QLObjectSubPool : NSObject
{
    NSRecursiveLock *_dictLock;
    NSMutableDictionary *_objectDict;
    int _type;
    const struct _RecoverConfig *_config;
    unsigned long _curTime;
    _Bool _needWriteFile;
    NSString *_filePath;
}

- (void)writeToFile;
- (int)subPoolType;
- (void)removeAllObjects;
- (id)objectDictionary;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (const struct _RecoverConfig *)getRecoverConfig;
- (id)getObjectDict;
- (void)unlock;
- (void)lock;
- (unsigned long)currentTime;
- (void)UpdateCurrentTime:(unsigned long)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MVInfoManager : NSObject
{
    NSMutableDictionary *allMV;
}

+ (id)keyWithMV:(id)arg1;
+ (id)keyWithMVMid:(id)arg1 Type:(int)arg2;
+ (id)sharedSongMVInfoManagerInstance;
- (void).cxx_destruct;
- (id)getSongWithMid:(id)arg1 Type:(int)arg2 Name:(id)arg3;

@end


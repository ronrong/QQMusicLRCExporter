//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface Hourglass : NSObject
{
    NSMutableDictionary *hourglasses;
}

+ (double)getCurrentTime;
+ (id)sharedHourglass;
- (void).cxx_destruct;
- (double)pauseByName:(id)arg1;
- (double)stopByName:(id)arg1;
- (void)startByName:(id)arg1;
- (id)init;

@end


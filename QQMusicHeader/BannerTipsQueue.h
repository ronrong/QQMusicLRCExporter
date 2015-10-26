//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BannerTipsQueue : NSObject <NSCopying>
{
    NSMutableArray *_array;
}

@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
- (void)removeAllObject;
- (void)removeObject:(id)arg1;
- (id)description;
- (id)getArray;
- (void)clear;
- (void)pop;
- (void)push:(id)arg1;
- (id)top;
- (unsigned int)size;
- (BOOL)empty;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface ListTagCallback : NSObject <NSCopying>
{
    id callback;
}

+ (id)callbackWithID:(id)arg1;
@property __weak id callback; // @synthesize callback;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;

@end

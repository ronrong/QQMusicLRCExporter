//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (SafeArray)
+ (id)QLArrayWithObject:(id)arg1;
- (void)QLReplaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)QLRemoveObjectAtIndex:(unsigned int)arg1;
- (void)QLInsertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)QLAddObject:(id)arg1;
- (id)QLObjectAtIndex:(unsigned int)arg1;
- (id)urlAtIndex:(unsigned int)arg1;
- (id)dateAtIndex:(unsigned int)arg1;
- (id)dataAtIndex:(unsigned int)arg1;
- (id)numberAtIndex:(unsigned int)arg1;
- (id)stringAtIndex:(unsigned int)arg1;
- (id)dictionaryAtIndex:(unsigned int)arg1;
- (id)arrayAtIndex:(unsigned int)arg1;
- (id)numberAtIndexSafeModel:(unsigned int)arg1;
- (id)stringAtIndexSafeModel:(unsigned int)arg1;
- (id)dictionaryAtIndexSafeModel:(unsigned int)arg1;
- (id)arrayAtIndexSafeModel:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1 verifyClass:(Class)arg2;
- (Class)objectClassAtIndex:(unsigned int)arg1;
@end


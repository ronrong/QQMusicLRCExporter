//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDictionary.h"

@interface NSDictionary (SafeDictionary)
- (void)qlSetObject:(id)arg1 forKey:(id)arg2;
- (void)QLRemoveObjectForKey:(id)arg1;
- (id)QLObjectForKey:(id)arg1;
- (id)urlForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKeySafeModel:(id)arg1;
- (id)numberForKeySafeModel:(id)arg1;
- (id)stringForKeySafeModel:(id)arg1;
- (id)dictionaryForKeySafeModel:(id)arg1;
- (id)arrayForKeySafeModel:(id)arg1;
- (BOOL)findForKey:(id)arg1;
- (id)objectForKey:(id)arg1 verifyClass:(Class)arg2;
- (Class)objectClassForKey:(id)arg1;
@end


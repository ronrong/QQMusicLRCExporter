//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QLSharedResourceMgr : NSObject
{
    NSMutableDictionary *_dicSharedRes;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *dicSharedRes; // @synthesize dicSharedRes=_dicSharedRes;
- (id)stretchImageForName:(id)arg1;
- (id)imageForName:(id)arg1;
- (id)init;

@end


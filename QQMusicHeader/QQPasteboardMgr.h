//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QQPasteboardMgr : NSObject
{
    NSMutableArray *_boards;
}

+ (id)instance;
- (id)getArrayPasteboardByName:(id)arg1;
- (id)getObjectPasteboardByName:(id)arg1;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Convert, NSURL;

@protocol ConvertDelegate <NSObject>
- (void)onSessionConvertDone:(Convert *)arg1 urlFile:(NSURL *)arg2;
- (void)onDurationGetted:(Convert *)arg1 duration:(unsigned int)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, UIEvent;

@protocol TouchUIImageDelegate <NSObject>
- (void)imageTouch:(NSSet *)arg1 withEvent:(UIEvent *)arg2 whichView:(id)arg3;

@optional
- (void)imageTouchBegan:(NSSet *)arg1 withEvent:(UIEvent *)arg2 whichView:(id)arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QPlayDevice : NSObject
{
    NSString *identifier;
    NSString *name;
    NSString *manufacturer;
    NSString *modelName;
    BOOL lostControl;
}

@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
@property(nonatomic) BOOL lostControl; // @synthesize lostControl;
- (void).cxx_destruct;
- (int)compatibilityMode;
- (BOOL)_isSonyDevice;
- (BOOL)_isOldBODevice;
- (BOOL)_isOldMarantzDevice;
- (int)sortDevice:(id)arg1;
- (void)detectingAvailabe;
- (void)setNameWithControlPoint:(id)arg1 controlPoint:(id)arg2;
- (id)initWithIdentifer:(id)arg1 controlPoint:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, TADFrequency;

@interface TADFrequencyManager : NSObject
{
    TADFrequency *_myFrequency;
    NSMutableDictionary *_orderMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *orderMap; // @synthesize orderMap=_orderMap;
@property(retain, nonatomic) TADFrequency *myFrequency; // @synthesize myFrequency=_myFrequency;
- (void).cxx_destruct;
- (id)p_stringFromDate:(id)arg1;
- (void)appWillResignActiveNotification:(id)arg1;
- (int)orderPvCount:(id)arg1;
- (void)addOrderViewCount:(id)arg1;
- (void)checkDate;
- (id)init;

@end


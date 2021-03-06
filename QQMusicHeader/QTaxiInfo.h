//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QTaxiInfo : NSObject
{
    int _distance;
    int _time;
    int _dayTotalFee;
    int _dayStartFee;
    int _dayFeePerKM;
    NSString *_dayTime;
    int _nightTotalFee;
    int _nightStartFee;
    int _nightFeePerKM;
    NSString *_nightTime;
}

@property(retain, nonatomic) NSString *nightTime; // @synthesize nightTime=_nightTime;
@property(nonatomic) int nightFeePerKM; // @synthesize nightFeePerKM=_nightFeePerKM;
@property(nonatomic) int nightStartFee; // @synthesize nightStartFee=_nightStartFee;
@property(nonatomic) int nightTotalFee; // @synthesize nightTotalFee=_nightTotalFee;
@property(retain, nonatomic) NSString *dayTime; // @synthesize dayTime=_dayTime;
@property(nonatomic) int dayFeePerKM; // @synthesize dayFeePerKM=_dayFeePerKM;
@property(nonatomic) int dayStartFee; // @synthesize dayStartFee=_dayStartFee;
@property(nonatomic) int dayTotalFee; // @synthesize dayTotalFee=_dayTotalFee;
@property(nonatomic) int time; // @synthesize time=_time;
@property(nonatomic) int distance; // @synthesize distance=_distance;
- (void)dealloc;
- (id)init;

@end


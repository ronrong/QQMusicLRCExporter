//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface QBusLineInfo : NSObject
{
    NSString *_uid;
    NSString *_reverseUid;
    NSString *_announcement;
    NSString *_name;
    NSString *_startStation;
    NSString *_endStation;
    NSString *_startTime;
    NSString *_endTime;
    int _distance;
    int _price;
    int _stopNum;
    CDStruct_c3b9c2ee *_busNodeList;
    unsigned int _busNodeCount;
    NSArray *_stationList;
}

@property(retain, nonatomic) NSArray *stationList; // @synthesize stationList=_stationList;
@property(readonly, nonatomic) unsigned int busNodeCount; // @synthesize busNodeCount=_busNodeCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *busNodeList; // @synthesize busNodeList=_busNodeList;
@property(nonatomic) int price; // @synthesize price=_price;
@property(nonatomic) int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *endStation; // @synthesize endStation=_endStation;
@property(retain, nonatomic) NSString *startStation; // @synthesize startStation=_startStation;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *announcement; // @synthesize announcement=_announcement;
@property(retain, nonatomic) NSString *reverseUid; // @synthesize reverseUid=_reverseUid;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)setBusNodeList:(CDStruct_c3b9c2ee *)arg1 widthBusNodeCount:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end


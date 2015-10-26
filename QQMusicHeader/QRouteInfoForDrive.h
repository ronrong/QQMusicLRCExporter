//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, QPlaceInfo;

@interface QRouteInfoForDrive : NSObject
{
    QPlaceInfo *_start;
    QPlaceInfo *_end;
    int _time;
    int _distance;
    int _keyPlaceNum;
    int _parkingNum;
    CDStruct_c3b9c2ee *_routeNodeList;
    unsigned int _routeNodeCount;
    NSArray *_routeSegment;
    NSArray *_routeSegmentList;
}

@property(retain, nonatomic) NSArray *routeSegmentList; // @synthesize routeSegmentList=_routeSegmentList;
@property(readonly, nonatomic) unsigned int routeNodeCount; // @synthesize routeNodeCount=_routeNodeCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *routeNodeList; // @synthesize routeNodeList=_routeNodeList;
@property(nonatomic) int parkingNum; // @synthesize parkingNum=_parkingNum;
@property(nonatomic) int keyPlaceNum; // @synthesize keyPlaceNum=_keyPlaceNum;
@property(nonatomic) int time; // @synthesize time=_time;
@property(nonatomic) int distance; // @synthesize distance=_distance;
@property(retain, nonatomic) QPlaceInfo *end; // @synthesize end=_end;
@property(retain, nonatomic) QPlaceInfo *start; // @synthesize start=_start;
- (void)setRouteNodeList:(CDStruct_c3b9c2ee *)arg1 withRouteNodeCount:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface QPoiData : NSObject
{
    int _totalPoiNum;
    int _currPoiNum;
    int _pageNum;
    int _pageIndex;
    NSArray *_poiInfoList;
}

@property(retain, nonatomic) NSArray *poiInfoList; // @synthesize poiInfoList=_poiInfoList;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) int pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) int curPoiNum; // @synthesize curPoiNum=_currPoiNum;
@property(nonatomic) int totalPoiNum; // @synthesize totalPoiNum=_totalPoiNum;
- (void)dealloc;
- (id)init;

@end

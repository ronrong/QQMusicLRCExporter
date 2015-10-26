//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TADReportBase.h"

@class NSMutableArray, NSString;

@interface TADReportVideoCacheInfo : NSObject <TADReportBase>
{
    NSMutableArray *_cacheHitItems;
    int _total;
    double _oldestCacheTimestamp;
}

@property(nonatomic) double oldestCacheTimestamp; // @synthesize oldestCacheTimestamp=_oldestCacheTimestamp;
@property(nonatomic) int total; // @synthesize total=_total;
@property(retain, nonatomic) NSMutableArray *cacheHitItems; // @synthesize cacheHitItems=_cacheHitItems;
- (void).cxx_destruct;
- (id)dataDictWithKey;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChannelV4CellData.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ChannelV4CellDataForCategory : ChannelV4CellData
{
    int _groupType;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)init;

@end


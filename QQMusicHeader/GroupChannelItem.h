//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableArray, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface GroupChannelItem : NSObject <NSCoding, NSCopying>
{
    UIColor *_color;
    int _groupId;
    NSString *_groupName;
    NSMutableArray *_channelList;
    int _groupType;
}

@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSMutableArray *channelList; // @synthesize channelList=_channelList;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) int groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (BOOL)isEqualContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end


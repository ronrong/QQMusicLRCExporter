//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class ListBase, NSDate, NSString, SongInfo, SongListItem;

__attribute__((visibility("hidden")))
@interface ShareObject : NSObject <NSCopying>
{
    BOOL _isZanedByMe;
    NSString *_shareId;
    int _shareType;
    NSString *_objid;
    int _type;
    int _subtype;
    unsigned long _shareUserQQ;
    NSString *_shareUserName;
    NSDate *_dateAndTime;
    unsigned long _time;
    NSString *_shareMsg;
    int _numberOfZan;
    SongInfo *_shareSong;
    SongListItem *_shareItem;
    ListBase *_playingList;
    NSString *_dayOfMonth;
    NSString *_month;
}

+ (id)translateFromJsonData:(id)arg1;
@property(retain, nonatomic) NSString *month; // @synthesize month=_month;
@property(retain, nonatomic) NSString *dayOfMonth; // @synthesize dayOfMonth=_dayOfMonth;
@property(retain, nonatomic) ListBase *playingList; // @synthesize playingList=_playingList;
@property(retain, nonatomic) SongListItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) SongInfo *shareSong; // @synthesize shareSong=_shareSong;
@property(nonatomic) BOOL isZanedByMe; // @synthesize isZanedByMe=_isZanedByMe;
@property(nonatomic) int numberOfZan; // @synthesize numberOfZan=_numberOfZan;
@property(retain, nonatomic) NSString *shareMsg; // @synthesize shareMsg=_shareMsg;
@property(nonatomic) unsigned long time; // @synthesize time=_time;
@property(retain, nonatomic) NSDate *dateAndTime; // @synthesize dateAndTime=_dateAndTime;
@property(retain, nonatomic) NSString *shareUserName; // @synthesize shareUserName=_shareUserName;
@property(nonatomic) unsigned long shareUserQQ; // @synthesize shareUserQQ=_shareUserQQ;
@property(nonatomic) int subtype; // @synthesize subtype=_subtype;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *objid; // @synthesize objid=_objid;
@property(nonatomic) int shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
- (void).cxx_destruct;
- (id)playingListKey;
- (BOOL)isCurrentPlayingList;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)subtitle;
- (id)title;
- (id)init;
- (void)dealloc;

@end


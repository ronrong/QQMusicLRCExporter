//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBannerItem.h"

@class NSString;

@interface QLTopicBannerItem : QLBannerItem
{
    BOOL _isUpdateNotified;
    BOOL _isShowUpdateNotify;
    int _updateNotifyBookType;
    NSString *_updateNotifyCoverID;
    NSString *_updateNotifyColumnID;
}

+ (id)createItem:(int)arg1 name:(id)arg2 introduction:(id)arg3 imageURL:(id)arg4;
@property(retain, nonatomic) NSString *updateNotifyColumnID; // @synthesize updateNotifyColumnID=_updateNotifyColumnID;
@property(retain, nonatomic) NSString *updateNotifyCoverID; // @synthesize updateNotifyCoverID=_updateNotifyCoverID;
@property(nonatomic) BOOL isShowUpdateNotify; // @synthesize isShowUpdateNotify=_isShowUpdateNotify;
@property(nonatomic) int updateNotifyBookType; // @synthesize updateNotifyBookType=_updateNotifyBookType;
@property(nonatomic) BOOL isUpdateNotified; // @synthesize isUpdateNotified=_isUpdateNotified;
- (void)dealloc;

@end


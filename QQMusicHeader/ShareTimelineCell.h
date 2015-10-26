//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ShareObject, ShareView, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface ShareTimelineCell : UITableViewCell
{
    ShareObject *_shareObj;
    id <ShareTimelineCellDelegate> _delegate;
    ShareView *_shareView;
    UILabel *_dayLabel;
    UILabel *_monthLabel;
    UIView *_segmentedLine;
    UILabel *_shareMsgLabel;
    UIImageView *_shareTypeIcon;
    UILabel *_shareTypeLabel;
}

+ (float)heightForText:(id)arg1 withFont:(id)arg2 andLimitedWidth:(float)arg3;
+ (float)cellHeightForShareObject:(id)arg1 withDateHeader:(BOOL)arg2;
@property(retain, nonatomic) UILabel *shareTypeLabel; // @synthesize shareTypeLabel=_shareTypeLabel;
@property(retain, nonatomic) UIImageView *shareTypeIcon; // @synthesize shareTypeIcon=_shareTypeIcon;
@property(retain, nonatomic) UILabel *shareMsgLabel; // @synthesize shareMsgLabel=_shareMsgLabel;
@property(retain, nonatomic) UIView *segmentedLine; // @synthesize segmentedLine=_segmentedLine;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) ShareView *shareView; // @synthesize shareView=_shareView;
@property(nonatomic) __weak id <ShareTimelineCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ShareObject *shareObj; // @synthesize shareObj=_shareObj;
- (void).cxx_destruct;
- (BOOL)isDate:(id)arg1 equalToDateIgnoringTime:(id)arg2;
- (BOOL)isYesterday:(id)arg1;
- (BOOL)isToday:(id)arg1;
- (void)readyToPlayShareObj:(id)arg1;
- (void)startRequestPlayingShareObj:(id)arg1;
- (void)playStatusDidChange:(id)arg1;
- (void)playListDidChange:(id)arg1;
- (void)didClickStopBtn;
- (void)didClickPlayBtn;
- (void)didClickZanBtn;
- (void)didClickDeleteBtn;
- (void)didClick;
- (void)setShareObject:(id)arg1 showDateHeader:(BOOL)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)reuseIdentifier;
- (void)dealloc;

@end


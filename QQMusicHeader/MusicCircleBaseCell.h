//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMusicCell.h"

#import "ImageManagerDelegate.h"
#import "OHAttributedLabelDelegate.h"
#import "QMCreatorViewDelegate.h"

@class MusicCircleFeed, NSString, OHAttributedLabel, QMCreatorView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface MusicCircleBaseCell : QQMusicCell <ImageManagerDelegate, OHAttributedLabelDelegate, QMCreatorViewDelegate>
{
    BOOL _bCanShowDelete;
    MusicCircleFeed *_feed;
    QMCreatorView *_creatorView;
    OHAttributedLabel *_creatorNameLabel;
    UILabel *_creatorActionLabel;
    OHAttributedLabel *_descLabel;
    UILabel *_showAllLabel;
    UIButton *_mainBgButton;
    UIButton *_mainImgButton;
    UILabel *_mainTitleLabel;
    UILabel *_mainTitleLabelExt;
    UIButton *_playButton;
    UILabel *_secTitleLabel;
    UILabel *_thrTitleLabel;
    UIButton *_playPauseBtn;
    UILabel *_timeLabel;
    UIButton *_delButton;
    UIButton *_zanButton;
    UIButton *_zanBaseButton;
    UIButton *_commentButton;
    id <MusicCircleCellDelegate> _delegate;
    NSString *_mainImgName;
    UIActivityIndicatorView *_activityView;
    UIImageView *_activityBgView;
    UIImageView *_zanSanjiaoView;
    UIView *_actionView;
    UIView *_actionContentView;
    UIButton *_actionLeftButton;
    UIButton *_actionRightButton;
    UIButton *_actionBtn;
}

@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UIButton *actionRightButton; // @synthesize actionRightButton=_actionRightButton;
@property(retain, nonatomic) UIButton *actionLeftButton; // @synthesize actionLeftButton=_actionLeftButton;
@property(retain, nonatomic) UIView *actionContentView; // @synthesize actionContentView=_actionContentView;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIImageView *zanSanjiaoView; // @synthesize zanSanjiaoView=_zanSanjiaoView;
@property(retain, nonatomic) UIImageView *activityBgView; // @synthesize activityBgView=_activityBgView;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) BOOL bCanShowDelete; // @synthesize bCanShowDelete=_bCanShowDelete;
@property(retain, nonatomic) NSString *mainImgName; // @synthesize mainImgName=_mainImgName;
@property(nonatomic) __weak id <MusicCircleCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *zanBaseButton; // @synthesize zanBaseButton=_zanBaseButton;
@property(retain, nonatomic) UIButton *zanButton; // @synthesize zanButton=_zanButton;
@property(retain, nonatomic) UIButton *delButton; // @synthesize delButton=_delButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *playPauseBtn; // @synthesize playPauseBtn=_playPauseBtn;
@property(retain, nonatomic) UILabel *thrTitleLabel; // @synthesize thrTitleLabel=_thrTitleLabel;
@property(retain, nonatomic) UILabel *secTitleLabel; // @synthesize secTitleLabel=_secTitleLabel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UILabel *mainTitleLabelExt; // @synthesize mainTitleLabelExt=_mainTitleLabelExt;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIButton *mainImgButton; // @synthesize mainImgButton=_mainImgButton;
@property(retain, nonatomic) UIButton *mainBgButton; // @synthesize mainBgButton=_mainBgButton;
@property(retain, nonatomic) UILabel *showAllLabel; // @synthesize showAllLabel=_showAllLabel;
@property(retain, nonatomic) OHAttributedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *creatorActionLabel; // @synthesize creatorActionLabel=_creatorActionLabel;
@property(retain, nonatomic) OHAttributedLabel *creatorNameLabel; // @synthesize creatorNameLabel=_creatorNameLabel;
@property(retain, nonatomic) QMCreatorView *creatorView; // @synthesize creatorView=_creatorView;
@property(retain, nonatomic) MusicCircleFeed *feed; // @synthesize feed=_feed;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)dealloc;
- (BOOL)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)doRightButtonAction:(id)arg1;
- (void)doLeftButtonAction:(id)arg1;
- (void)showActionView;
- (void)hideActionView:(BOOL)arg1;
- (void)showOrHideActionView:(id)arg1;
- (void)doDelThisFeed:(id)arg1;
- (void)doCommentAction:(id)arg1;
- (void)resetZabEnable:(id)arg1;
- (void)delayEnableZanButton;
- (void)doZanAction:(id)arg1;
- (void)emptyAction:(id)arg1;
- (void)refreshPlayState;
- (void)playStatusDidChange:(id)arg1;
- (void)playListDidChange:(id)arg1;
- (void)doPlayOrPauseAction:(id)arg1;
- (void)showListDetailInfo:(id)arg1;
- (void)showFeedDetaiInfo:(id)arg1;
- (void)creatorViewDidClick:(id)arg1;
- (int)baseHeight;
- (void)updateMainBgColorByImg:(id)arg1;
- (void)updateUI;
- (void)setSanjiaoHidden:(BOOL)arg1;
- (void)setIsCanShowDelete:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (int)qmCellType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


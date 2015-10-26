//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMovieBaseControlView.h"

#import "QLActionMenuDelegate.h"
#import "QLBanabaCommentButtonDelegate.h"
#import "QLMPClarityListViewDelegate.h"
#import "QLMPComplexPanelViewDelegate.h"
#import "QLMomentInputViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class HVMPBottomView, HVMPRightListView, HVMPTopView2, NSMutableArray, NSString, QLMPClarityListView, QLMPComplexPanelView, UIButton, UIImage, UIImageView, UILabel, UIViewController<QLShareDataSource>;

@interface QLMainMovieControlView : QLMovieBaseControlView <QLMomentInputViewDelegate, QLBanabaCommentButtonDelegate, UIGestureRecognizerDelegate, QLActionMenuDelegate, QLMPClarityListViewDelegate, QLMPComplexPanelViewDelegate>
{
    BOOL banabaPlayingForPlayer;
    BOOL isShowingTips;
    BOOL shouldShowShareTips;
    int screenShotCounts;
    BOOL shouldAnimate;
    int selectedPhotoCounts;
    BOOL _didClickDownload;
    NSMutableArray *_screenShots;
    UIImageView *bubbleContainer;
    UILabel *tipShareLbl;
    UIImageView *imageView;
    NSString *_videoTitle;
    BOOL _showBarAfterRightDisappeared;
    BOOL _downloadable;
    BOOL _downloadButtonEnable;
    BOOL _downloadHidden;
    BOOL _favoriteButtonEnable;
    BOOL _favoriteHidden;
    BOOL _shareHidden;
    UIButton *_banabaCommentButton;
    HVMPRightListView *_rightListView;
    QLMPClarityListView *_clarityListView;
    QLMPComplexPanelView *_complexPanelView;
    HVMPTopView2 *_topView;
    HVMPBottomView *_bottomView;
    NSString *_currentVideoFormat;
    UIViewController<QLShareDataSource> *_actionShareSender;
    NSString *_shareTipsText;
    UIImage *_shareTipsImage;
    UIButton *_clipButton;
    double _currentPlayerTime;
}

@property(retain, nonatomic) UIButton *clipButton; // @synthesize clipButton=_clipButton;
@property(retain, nonatomic) UIImage *shareTipsImage; // @synthesize shareTipsImage=_shareTipsImage;
@property(copy, nonatomic) NSString *shareTipsText; // @synthesize shareTipsText=_shareTipsText;
@property UIViewController<QLShareDataSource> *actionShareSender; // @synthesize actionShareSender=_actionShareSender;
@property(nonatomic) BOOL shareHidden; // @synthesize shareHidden=_shareHidden;
@property(nonatomic) BOOL favoriteHidden; // @synthesize favoriteHidden=_favoriteHidden;
@property(nonatomic) BOOL favoriteButtonEnable; // @synthesize favoriteButtonEnable=_favoriteButtonEnable;
@property(nonatomic) BOOL downloadHidden; // @synthesize downloadHidden=_downloadHidden;
@property(nonatomic) BOOL downloadButtonEnable; // @synthesize downloadButtonEnable=_downloadButtonEnable;
@property(nonatomic) BOOL downloadable; // @synthesize downloadable=_downloadable;
@property(nonatomic) BOOL showBarAfterRightDisappeared; // @synthesize showBarAfterRightDisappeared=_showBarAfterRightDisappeared;
@property(nonatomic) double currentPlayerTime; // @synthesize currentPlayerTime=_currentPlayerTime;
@property(copy, nonatomic) NSString *currentVideoFormat; // @synthesize currentVideoFormat=_currentVideoFormat;
@property(readonly, retain, nonatomic) HVMPBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) HVMPTopView2 *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) QLMPComplexPanelView *complexPanelView; // @synthesize complexPanelView=_complexPanelView;
@property(retain, nonatomic) QLMPClarityListView *clarityListView; // @synthesize clarityListView=_clarityListView;
@property(retain, nonatomic) HVMPRightListView *rightListView; // @synthesize rightListView=_rightListView;
@property(retain, nonatomic) UIButton *banabaCommentButton; // @synthesize banabaCommentButton=_banabaCommentButton;
- (void)clickInteractiveVoteShareWith:(id)arg1;
- (void)resumeDownload:(id)arg1;
- (void)didSizeModelRequestFinished:(id)arg1;
- (float)screenWidth;
- (void)momentInputViewDidDismiss:(id)arg1;
- (void)momentInputView:(id)arg1 willShowInView:(id)arg2;
- (void)momentInputViewDidPressSendButton:(id)arg1;
- (void)showBanabaCommentButton:(BOOL)arg1;
- (BOOL)touchUpinsideOnBanabaKeyboard:(struct CGPoint)arg1;
- (void)loginChange:(id)arg1;
- (void)banabaCommentButtonAction:(id)arg1;
- (void)openBanabaKeyboard;
- (void)banabaSwitched;
- (void)pushUnicomDetailViewController:(id)arg1;
- (void)showUnicomTips;
- (void)didComplexPanelEndScroll;
- (void)didComplexPanelBeginScroll;
- (void)didClickTipBubble:(id)arg1;
- (void)didShareClicked:(unsigned int)arg1;
- (void)didDownloadClicked;
- (void)didFavoriteClicked:(BOOL)arg1;
- (void)didBrightnessSliderChanged;
- (void)didVolumeSliderChanged;
- (id)clarityListCurrentVideoFormat;
- (void)didClarityChanged:(id)arg1;
- (void)didClarityListEndScroll;
- (void)didClarityListBeginScroll;
- (id)mediaPlayer;
- (BOOL)isLoggedIn;
- (void)actionMenu:(id)arg1 didSelectAtIndex:(int)arg2;
- (BOOL)fullScreenPlayShareToMomentTime;
- (void)manllyPauseCurrentPlay;
- (void)clipPlayScreen;
- (void)playFlashView;
- (void)didSingleTap:(id)arg1;
- (void)downloadVideo:(id)arg1;
- (id)getCurrentVideoID;
- (void)refreshAttentionState;
- (void)setMoreButtonHidden:(BOOL)arg1;
- (BOOL)isSimpleVideo;
- (void)controlListView:(id)arg1;
- (void)createComplexPanelView;
- (void)createClarityListView;
- (void)createRightListView;
- (BOOL)checkDownloadEnableState;
- (void)dismissPopups;
- (void)playerPlaybackChanged:(int)arg1;
- (void)playerLoadstateChanged:(int)arg1 videoType:(int)arg2 firstPlay:(BOOL)arg3;
- (void)showDLNAButton:(BOOL)arg1;
- (void)enableDLNAButton:(BOOL)arg1;
- (void)adjustControlForDLNA:(BOOL)arg1;
- (void)circleEnd;
- (void)circleMinus:(float)arg1;
- (void)circlePlus:(float)arg1;
- (void)circleBegin:(BOOL)arg1;
- (BOOL)playNextCover;
- (void)willMoveToSuperview:(id)arg1;
- (void)changePlayButtonImageAndStatus:(BOOL)arg1;
- (void)playBtnClicked:(id)arg1;
- (void)controlMoviePlayStatusWithUser:(BOOL)arg1;
- (void)performPlayAction;
- (void)setJumpEndTimeLength:(double)arg1;
- (void)setLivePlaybackSupported:(BOOL)arg1;
- (void)showClarityButton:(BOOL)arg1;
- (void)showListButton:(BOOL)arg1 withTitle:(id)arg2 animated:(BOOL)arg3;
- (void)clearResources;
- (void)clearDLNA;
- (void)setDownloadState:(BOOL)arg1;
- (void)controlBtnTitle:(id)arg1 withMask:(int)arg2;
- (void)controlHiddenState:(BOOL)arg1 withMask:(int)arg2;
- (void)controlEnableState:(BOOL)arg1 withMask:(int)arg2;
- (void)hideRedIcon;
- (void)clearScreenShots;
- (void)clipButtonDown:(id)arg1;
- (void)tipBubbleShowAnimation;
- (void)showTipBubble:(id)arg1 imageTip:(id)arg2;
- (void)showShareTips;
- (void)hideRightControlView;
- (void)updateClipButton;
- (void)hideTipBubble;
- (void)hideAllControlViews;
- (void)showAllControlViews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showThumbViewAt:(double)arg1;
- (BOOL)calcClarityViewWithClaritesArray:(id)arg1;
- (void)controlShowPrompt:(BOOL)arg1 withModifyPlayButton:(BOOL)arg2;
- (void)setVideoTitle:(id)arg1;
- (id)videoTitle;
- (float)topViewHeight;
- (BOOL)bSeeking;
- (void)adjustSubviewsLevel:(BOOL)arg1 withSubView:(id)arg2;
- (void)flushPlayerProgress;
- (void)flushInterfaceWithMainCtl:(id)arg1 withLastCtl:(id)arg2;
- (void)setPlayNextButtonClickEnable;
- (void)setPlayNextButtonHide:(BOOL)arg1;
- (void)seekByPercent:(float)arg1;
- (void)statusBarDidDisappear:(id)arg1;
- (void)statusBarWillDisappear:(id)arg1;
- (void)statusBarWillAppear:(id)arg1;
- (void)layoutSubviews;
- (id)sliderView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)pageDescription;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


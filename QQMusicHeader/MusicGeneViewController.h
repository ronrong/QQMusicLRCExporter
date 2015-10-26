//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "ImageManagerDelegate.h"
#import "QMCreatorViewDelegate.h"

@class ChannelCreator, GeneSongListViewController, NSMutableArray, NSString, ProfileViewController, UIImageView, UIView, UserGeneLoader;

__attribute__((visibility("hidden")))
@interface MusicGeneViewController : SkinViewController <ImageManagerDelegate, QMCreatorViewDelegate>
{
    NSMutableArray *_randomAnglesForGeneBtn;
    NSMutableArray *_randomAnglesForThumbGeneBtn;
    NSMutableArray *_circleIndexForThumbGeneBtn;
    NSMutableArray *_randomOvalRectForGeneBtn;
    struct CGRect _minFrameForCirclesImageView;
    float _minRadius;
    struct CGRect _maxFrameForCirclesImageView;
    BOOL _readyForShow;
    ChannelCreator *_user;
    id _delegate;
    ProfileViewController *_profileVC;
    UserGeneLoader *_userGeneLoader;
    GeneSongListViewController *_geneSongListVC;
    UIImageView *_circlesImageView;
    UIView *_geneRoundButtonContainerView;
    UIView *_foreground;
    NSMutableArray *_smallCirclesCenterAndRadius;
    NSMutableArray *_circlesCenterAndRadius;
    UIView *_bottomArea;
}

+ (struct CGPoint)pointAroundOvalFromCenter:(struct CGPoint)arg1 withWidth:(float)arg2 andHeight:(float)arg3 andAngle:(float)arg4;
+ (struct CGPoint)pointAroundCircumferenceFromCenter:(struct CGPoint)arg1 withRadius:(float)arg2 andAngle:(float)arg3;
@property(retain, nonatomic) UIView *bottomArea; // @synthesize bottomArea=_bottomArea;
@property(retain, nonatomic) NSMutableArray *circlesCenterAndRadius; // @synthesize circlesCenterAndRadius=_circlesCenterAndRadius;
@property(retain, nonatomic) NSMutableArray *smallCirclesCenterAndRadius; // @synthesize smallCirclesCenterAndRadius=_smallCirclesCenterAndRadius;
@property(retain, nonatomic) UIView *foreground; // @synthesize foreground=_foreground;
@property(retain, nonatomic) UIView *geneRoundButtonContainerView; // @synthesize geneRoundButtonContainerView=_geneRoundButtonContainerView;
@property(retain, nonatomic) UIImageView *circlesImageView; // @synthesize circlesImageView=_circlesImageView;
@property(retain, nonatomic) GeneSongListViewController *geneSongListVC; // @synthesize geneSongListVC=_geneSongListVC;
@property(retain, nonatomic) UserGeneLoader *userGeneLoader; // @synthesize userGeneLoader=_userGeneLoader;
@property(nonatomic) __weak ProfileViewController *profileVC; // @synthesize profileVC=_profileVC;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL readyForShow; // @synthesize readyForShow=_readyForShow;
@property(readonly, nonatomic) ChannelCreator *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)showBannerTips:(id)arg1 WithIcon:(int)arg2 Force:(BOOL)arg3;
- (void)removeClickTips;
- (void)setUpClickTips;
- (void)setDoNotShowClickTipsAnyMore;
- (BOOL)shouldShowClickTips;
- (float)radiusForCircleAtIndex:(int)arg1 circleInfoArray:(id)arg2;
- (struct CGPoint)centerForCircleAtIndex:(int)arg1 circleInfoArray:(id)arg2;
- (float)angleForThumbGeneBtnAtIndex:(int)arg1;
- (int)getCircleIndexForThumbGeneBtnAtIndex:(int)arg1;
- (float)widthForThumbGeneBtnAtIndex:(int)arg1;
- (struct CGPoint)centerPointForThumbGeneBtnAtIndex:(int)arg1;
- (struct CGRect)frameForThumbGeneBtnAtIndex:(int)arg1;
- (float)widthForGeneBtnAtIndex:(int)arg1;
- (struct CGPoint)centerPointForGeneBtnAtIndex:(int)arg1;
- (int)getCircleIndexForGeneBtnAtIndex:(int)arg1;
- (id)randomizeArray:(id)arg1;
- (float)angleForGeneBtnAtIndex:(int)arg1;
- (struct CGRect)frameForGeneBtnAtIndex:(int)arg1;
- (struct CGSize)ovalRectForGeneBtnAtIndex:(int)arg1;
- (void)creatorViewDidClick:(id)arg1;
- (id)circlesImageWithSize:(struct CGSize)arg1 centerPosition:(struct CGPoint)arg2 centerRadius:(float)arg3 stepping:(float)arg4 numbers:(int)arg5;
- (void)dismissGeneSongListVC;
- (void)showGeneSongListVC:(id)arg1;
- (void)didTouchUpGene:(id)arg1;
- (void)didTouchDownGene:(id)arg1;
- (void)didClickGene:(id)arg1;
- (void)stopClockwiseAnimating;
- (void)beginClockwiseAnimating;
- (void)setGeneFrames:(float)arg1;
- (void)setupGeneViews;
- (void)setReadyForShow;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateViewFrame:(id)arg1 withMinFrame:(struct CGRect)arg2 andMaxFrame:(struct CGRect)arg3 atPercent:(float)arg4;
- (struct CGRect)userHeaderViewFrame;
- (void)statusBarFrameDidChange:(id)arg1;
- (void)showBottomArea:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_onIntroGeneButtonClicked:(id)arg1;
- (void)_onShareGeneButtonClicked:(id)arg1;
- (id)_captureGeneImage;
- (id)blurBgImage:(id)arg1;
- (void)reFresh;
- (void)back:(id)arg1;
- (BOOL)isSelfGene;
- (void)viewDidLoad;
- (int)vcType;
- (void)createBottomArea;
- (float)maxCircleViewYOffset;
- (void)createCircleView;
- (void)loadView;
- (void)performDisappearAnimation;
- (void)performAppearAnimation;
- (void)animtedWithYOffset:(float)arg1;
- (void)profileScrollViewDidEndScrolling:(id)arg1;
- (void)profileScrollViewDidEndDragging:(id)arg1;
- (void)profileScrollViewDidScroll:(id)arg1;
- (float)profileTableViewYOffset;
- (BOOL)profileTableViewIsDragging;
- (void)didHideGeneView;
- (void)willHideGeneView;
- (void)didShowGeneView;
- (void)willShowGeneView;
- (id)initWithUser:(id)arg1 andDelegate:(id)arg2;
- (void)releaseObservers;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


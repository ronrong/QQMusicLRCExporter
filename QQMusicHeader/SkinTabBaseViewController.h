//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController_Detail.h"

#import "ImageManagerDelegate.h"
#import "QMCreatorViewDelegate.h"
#import "QMTabBarDelegate.h"
#import "TabScrollDelegate.h"
#import "UIScrollViewDelegate.h"

@class BaseTabVC, NSArray, NSString, QMTabBar, UIImageView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface SkinTabBaseViewController : SkinViewController_Detail <ImageManagerDelegate, QMTabBarDelegate, QMCreatorViewDelegate, UIScrollViewDelegate, TabScrollDelegate>
{
    float origHeaderViewHeight;
    BaseTabVC *_visibleTabVC;
    NSArray *_tabComponents;
    NSArray *_tabTitleNums;
    UIView *_headerView;
    UIImageView *_headerImgView;
    UIScrollView *_tabScrollView;
    QMTabBar *_headTabBar;
    unsigned int _tabIndex;
}

@property(nonatomic) unsigned int tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) QMTabBar *headTabBar; // @synthesize headTabBar=_headTabBar;
@property(retain, nonatomic) UIScrollView *tabScrollView; // @synthesize tabScrollView=_tabScrollView;
@property(retain, nonatomic) UIImageView *headerImgView; // @synthesize headerImgView=_headerImgView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSArray *tabTitleNums; // @synthesize tabTitleNums=_tabTitleNums;
@property(retain, nonatomic) NSArray *tabComponents; // @synthesize tabComponents=_tabComponents;
@property(retain, nonatomic) BaseTabVC *visibleTabVC; // @synthesize visibleTabVC=_visibleTabVC;
- (void).cxx_destruct;
- (BOOL)canDeletetableFootView;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageToLocol:(id)arg1;
- (void)onSmallImageClicked:(id)arg1;
- (void)onTouchUpInsideSmallImage:(id)arg1;
- (void)deleteSongsFromDisk:(id)arg1;
- (void)creatorViewDidClick:(id)arg1;
- (void)onColorStyleChanged;
- (void)indicatorVisibleTabVC;
- (void)didLoadTabViewAtIndex:(int)arg1;
- (void)loadTabViewAtIndex:(int)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideNetErrView;
- (void)showNoNetViewWithInfo1:(id)arg1 andInfo2:(id)arg2 iconName:(id)arg3;
- (void)hideAll;
- (void)resetTabInfoView;
- (void)hideTabInfoView;
- (id)buildTabInfoViewWithTitle:(id)arg1 subtitle:(id)arg2 tapSelector:(SEL)arg3;
- (void)showTabInfoViewWithTitle:(id)arg1 subtitle:(id)arg2 tapSelector:(SEL)arg3;
- (void)hideLoadingView;
- (id)buildLoadingView;
- (void)showLoadingView;
- (void)hideTabLoadingView:(id)arg1;
- (void)showTabLoadingView:(id)arg1;
- (id)buildTabLoadingView:(BOOL)arg1;
- (void)reloadWebPage;
- (void)addSongsTableOperHeader;
- (void)loadDetail;
- (void)selectedItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addStatByJumpToIndex:(int)arg1;
- (void)touchDown:(id)arg1 itemAtIndex:(unsigned int)arg2 bForce:(BOOL)arg3;
- (void)touchDown:(id)arg1 itemAtIndex:(unsigned int)arg2;
- (id)selectedImageView:(id)arg1;
- (id)selectetdItemImage:(id)arg1 atIndex:(unsigned int)arg2;
- (id)backgroundImage:(id)arg1;
- (id)accessibilityLabel:(id)arg1 atIndex:(unsigned int)arg2;
- (id)imageFor:(id)arg1 atIndex:(unsigned int)arg2;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (float)getHeaderTabBarY;
- (float)getClearViewHeight;
- (void)tabDidscroll:(id)arg1 toPoint:(struct CGPoint)arg2;
- (BOOL)isBlur;
- (id)getTitle;
- (id)getSmallImageView;
- (id)getSmallView;
- (void)setupHeadTabBar;
- (id)buildTabScrollView;
- (id)buildHeaderView;
- (id)blurHeaderImage:(id)arg1;
- (void)addTapGestureRecognizerToView:(id)arg1;
- (void)viewDidPop;
- (int)vcType;
- (void)viewDidLoad;
- (id)headerRightView;
- (unsigned int)defaultTabIndex;
- (void)resetTabBarTitleNum;
- (void)buildScrollViewAndTabbar;
- (int)getHeaderImageViewStyle;
- (id)defaultHeadImage;
- (id)headerPicURL;
- (unsigned int)getHeadBgViewHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


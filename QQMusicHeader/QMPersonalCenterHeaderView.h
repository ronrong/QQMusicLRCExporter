//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIButton, UIImageView, UIScrollView;

__attribute__((visibility("hidden")))
@interface QMPersonalCenterHeaderView : UIView <UIScrollViewDelegate>
{
    int currentPage;
    BOOL _isShowPiaoIcon;
    BOOL _isShowBuluoIcon;
    BOOL _isTopSinger;
    id <QMPersonalCenterHeaderViewDataSource> _dataSource;
    id <QMPersonalCenterHeaderViewDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_singerSmallImageView;
    UIView *_firstBgView;
    UIView *_secondBgView;
    UIButton *_arrowBtn;
    UIImageView *_showCover;
}

@property(retain, nonatomic) UIImageView *showCover; // @synthesize showCover=_showCover;
@property(retain, nonatomic) UIButton *arrowBtn; // @synthesize arrowBtn=_arrowBtn;
@property(retain, nonatomic) UIView *secondBgView; // @synthesize secondBgView=_secondBgView;
@property(retain, nonatomic) UIView *firstBgView; // @synthesize firstBgView=_firstBgView;
@property(retain, nonatomic) UIView *singerSmallImageView; // @synthesize singerSmallImageView=_singerSmallImageView;
@property(nonatomic) BOOL isTopSinger; // @synthesize isTopSinger=_isTopSinger;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) BOOL isShowBuluoIcon; // @synthesize isShowBuluoIcon=_isShowBuluoIcon;
@property(nonatomic) BOOL isShowPiaoIcon; // @synthesize isShowPiaoIcon=_isShowPiaoIcon;
@property(nonatomic) __weak id <QMPersonalCenterHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QMPersonalCenterHeaderViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setShowCoverImage:(id)arg1;
- (void)setSecondBgViewWithShowInfo:(id)arg1;
- (void)changePageWithAnimation;
- (void)doClickSingerHeaderView:(id)arg1;
- (void)reloadHeaderImage;
- (void)reloadShowingTitle;
- (void)_addSubviews;
- (void)_jumpToBuyTicketWeb;
- (id)_showCoverImage;
- (id)_secondRightButtomView;
- (id)_firstRightButtomView;
- (id)_firstLeftBottomView;
- (id)_thirdSubView;
- (id)_secondSubView;
- (id)_firstSubView;
- (id)_logoFollowingMainTitle;
- (id)_mainTitle;
- (id)_headerImage:(BOOL)arg1;
- (id)_headerImage;
- (id)_renderSingerImage:(id)arg1;
- (void)_buildHeaderView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


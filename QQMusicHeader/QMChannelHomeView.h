//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, QMFocusScrollView, QMPageControl, UIImageView, UIScrollView;

__attribute__((visibility("hidden")))
@interface QMChannelHomeView : UIView <UIScrollViewDelegate>
{
    UIView *_rightSideBgView;
    UIImageView *_rightSideShadowLine;
    UIView *_pageControlContainerView;
    id <QMChannelHomeViewDataSource> _dataSource;
    id <QMChannelHomeViewDelegate> _delegate;
    QMFocusScrollView *_focusScrollView;
    UIScrollView *_scrollView;
    QMPageControl *_pageControl;
}

@property(retain, nonatomic) QMPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) QMFocusScrollView *focusScrollView; // @synthesize focusScrollView=_focusScrollView;
@property(nonatomic) __weak id <QMChannelHomeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QMChannelHomeViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_didTapOnPieceView:(id)arg1;
- (int)_numberOfPages;
- (int)_numberOfViews;
- (struct CGRect)_focusViewFrame;
- (struct CGSize)_pieceViewSize;
- (struct CGRect)_viewFrameAtIndex:(unsigned int)arg1;
- (void)_reloadPageViews;
- (void)_clearViewsFromIndex:(int)arg1 resetOffset:(BOOL)arg2;
- (void)_clearViews;
- (void)_setup;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


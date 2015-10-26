//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChannelBaseTabVC.h"

#import "GDTBannerServiceProtocol.h"
#import "QMFocusScrollViewDelegate.h"

@class GDTBannerManager, NSString, QMFocusScrollView;

__attribute__((visibility("hidden")))
@interface RecommendTabVC : ChannelBaseTabVC <GDTBannerServiceProtocol, QMFocusScrollViewDelegate>
{
    BOOL _pushFromFocusView;
    BOOL _didDragToLoadBanner;
    BOOL _didExposureBanner;
    QMFocusScrollView *_focusScrollView;
    GDTBannerManager *_sharedManager;
}

@property(nonatomic) __weak GDTBannerManager *sharedManager; // @synthesize sharedManager=_sharedManager;
@property(retain, nonatomic) QMFocusScrollView *focusScrollView; // @synthesize focusScrollView=_focusScrollView;
- (void).cxx_destruct;
- (void)doClickAdTitleCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)requestToShowChannel:(id)arg1;
- (void)gdtBannerViewShouldClose:(id)arg1;
- (void)gdtBannerViewShouldRefreshFrame:(id)arg1;
- (void)gdtBannerViewDidLoad:(id)arg1;
- (void)exposureBannerIfBannerIsShown;
- (void)exposureBanner;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)QMFocusScrollView:(id)arg1 didSelectItem:(id)arg2;
- (id)translateToChannelItem:(id)arg1 withCustomTJReport:(id)arg2;
- (void)translateGroupContentsToCellData:(id)arg1 withCustomTJReport:(id)arg2;
- (void)doClickMoreBtn:(id)arg1;
- (void)processAdData:(id)arg1 toHeaderData:(id)arg2;
- (void)translateServerDataToUIAcceptableData:(id)arg1;
- (void)_recommendPageDataDidUpdate:(id)arg1;
- (void)reFresh;
- (id)strVCtype;
- (int)vcType;
- (void)willActiveCurrentTab;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidPop;
- (void)loadBannerData;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

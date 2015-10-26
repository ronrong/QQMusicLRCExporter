//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SongListBaseViewController.h"

@class ChannelItemKey, ListBase, MusicCluster, SmallWebViewController, SongListItem, UIView;

__attribute__((visibility("hidden")))
@interface BaseTabVC : SongListBaseViewController
{
    BOOL _isH5Detail;
    BOOL _isLoadingMore;
    id <TabScrollDelegate> _delegate;
    float _minY;
    UIView *_tabLoadingView;
    UIView *_tabInfoView;
    ListBase *_songList;
    MusicCluster *_thisCluster;
    SmallWebViewController *_H5VC;
    struct CGRect _frame;
}

@property(retain) SmallWebViewController *H5VC; // @synthesize H5VC=_H5VC;
@property(retain, nonatomic) MusicCluster *thisCluster; // @synthesize thisCluster=_thisCluster;
@property(retain, nonatomic) ListBase *songList; // @synthesize songList=_songList;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) UIView *tabInfoView; // @synthesize tabInfoView=_tabInfoView;
@property(retain, nonatomic) UIView *tabLoadingView; // @synthesize tabLoadingView=_tabLoadingView;
@property BOOL isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property BOOL isH5Detail; // @synthesize isH5Detail=_isH5Detail;
@property(nonatomic) float minY; // @synthesize minY=_minY;
@property(nonatomic) __weak id <TabScrollDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onKeyboardHide:(id)arg1;
- (void)unLikeFolder;
- (void)showEmptyView;
- (BOOL)canDeletetableFootView;
- (void)listDataDidUpdate:(id)arg1;
- (void)onSongsEdit:(id)arg1;
- (void)handleBatchAction:(int)arg1;
- (void)addSongsTableOperHeader;
- (void)showAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)webViewStateDidChange:(unsigned int)arg1;
- (void)reloadWebPage;
- (void)showDetailWebViewWithRect:(struct CGRect)arg1;
- (id)getDetailUrl;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (int)vcType;
- (void)processingLoadMoreAction:(id)arg1;
- (void)onList:(id)arg1 InfoChangeByInfo:(id)arg2 ChangeType:(int)arg3 Index:(unsigned int)arg4;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)reFresh;
- (void)setViewFrame:(struct CGRect)arg1;
- (id)_buildCommonClearView;
- (float)infoViewTopOffset;
- (float)emptyViewTopOffset;
- (void)updateHeaderTabNum:(int)arg1 atIndex:(int)arg2;
- (void)showTableView;
- (void)hideAll;
- (void)hideNetErrView;
- (void)showNoNetViewWithInfo1:(id)arg1 andInfo2:(id)arg2 iconName:(id)arg3;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)hideTabInfoView;
- (void)showTabInfoViewWithTitle:(id)arg1 subtitle:(id)arg2 tapSelector:(SEL)arg3;
- (void)hideTabLoadingView;
- (void)showTabLoadingView;
- (void)onNotifyColorStyleChanged:(id)arg1;
- (BOOL)isNeedRefreshWhenLoadView;
- (BOOL)isNeedDefaultHeader;
- (id)buildTableFooterView;
- (id)buildBaseTableFooterView;
- (id)buildTableHeaderView;
- (id)_buildOperateViewWithButtonMode:(int)arg1;
- (int)playButtonModeThisVC;
- (struct CGRect)songsTableFrame;
- (void)loadView;
- (id)_buildSongListHeaderView;
- (BOOL)isHasHeaderView;
- (void)setContentMinY:(float)arg1;
- (void)viewDidLoad;
- (void)willResignCurrentTab;
- (void)willActiveCurrentTab;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (BOOL)useBgImage;

// Remaining properties
@property(retain, nonatomic) ChannelItemKey *channelItemKey;
@property(nonatomic) BOOL loadingMore;
@property(retain, nonatomic) SongListItem *songListItem;

@end


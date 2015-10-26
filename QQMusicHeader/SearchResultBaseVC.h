//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ListBase, MusicCluster, NSString;

__attribute__((visibility("hidden")))
@interface SearchResultBaseVC : SkinViewController <UITableViewDataSource, UITableViewDelegate>
{
    MusicCluster *thisCluster;
    ListBase *songList;
    BOOL loadingMore;
}

@property(retain, nonatomic) ListBase *songList; // @synthesize songList;
@property(readonly, nonatomic) MusicCluster *thisCluster; // @synthesize thisCluster;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (BOOL)hasMoreDataInTableView:(id)arg1;
- (void)showNetErrWithResult:(int)arg1;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)reFresh;
- (int)getSearchType;
- (int)getListTag;
- (void)onNotifyColorStyleChanged:(id)arg1;
- (void)fillCell:(id)arg1 WithSong:(id)arg2;
- (void)_setHilightedLabel:(id)arg1 fontStyle:(int)arg2 attributeText:(id)arg3;
- (id)_getExpDataFromSongInfo:(id)arg1;
- (void)reFreshSuccess;
- (id)emptyViewBgText;
- (id)emptyViewBgImage;
- (id)emptyViewText;
- (id)loadingViewText;
- (void)showNothingView;
- (void)showNoNetView;
- (void)showTableView:(int)arg1;
- (void)showTableView;
- (void)showLoadingView;
- (id)listData;
- (id)list;
- (id)allSongs;
- (void)viewDidPop;
- (void)back:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)isNeedRefreshWhenLoadView;
- (BOOL)isNeedDefaultHeader;
- (void)loadView;
- (id)initWithClusterInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


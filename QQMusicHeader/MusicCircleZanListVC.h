//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController_Comment.h"

#import "ListTagDelegate.h"
#import "MusicCircleCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MusicCircleFeed, MusicCluster, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicCircleZanListVC : SkinViewController_Comment <UITableViewDataSource, UITableViewDelegate, ListTagDelegate, MusicCircleCellDelegate>
{
    BOOL _loadingMore;
    MusicCircleFeed *_currentFeed;
    MusicCluster *_cluster;
    NSArray *_zanList;
}

@property(retain, nonatomic) NSArray *zanList; // @synthesize zanList=_zanList;
@property(retain, nonatomic) MusicCluster *cluster; // @synthesize cluster=_cluster;
@property(retain, nonatomic) MusicCircleFeed *currentFeed; // @synthesize currentFeed=_currentFeed;
- (void).cxx_destruct;
- (void)buildTableFootView;
- (BOOL)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (BOOL)hasMoreDataInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)reloadData;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)reFresh;
- (int)vcType;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


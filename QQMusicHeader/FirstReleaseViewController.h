//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "FirstReleaseCellDelegate.h"
#import "QMTableViewProtocol.h"
#import "UITableViewDataSource.h"

@class ChannelItemKey, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FirstReleaseViewController : SkinViewController <UITableViewDataSource, FirstReleaseCellDelegate, QMTableViewProtocol>
{
    BOOL _loadingMore;
    NSString *_jumpUrl;
    NSArray *_firstReleaseItems;
    ChannelItemKey *_channelItemKey;
}

@property(retain, nonatomic) ChannelItemKey *channelItemKey; // @synthesize channelItemKey=_channelItemKey;
@property(retain, nonatomic) NSArray *firstReleaseItems; // @synthesize firstReleaseItems=_firstReleaseItems;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
- (void).cxx_destruct;
- (BOOL)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (BOOL)hasMoreDataInTableView:(id)arg1;
- (void)firstReleaseCellDidClickItem:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_listDataDidUpdate:(id)arg1;
- (void)_showTableView:(BOOL)arg1;
- (int)vcType;
- (void)reFresh;
- (void)viewDidPop;
- (void)viewWillPop;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

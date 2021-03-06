//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "BEFootActionViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"

@class BEFootActionView, DownloadHistoryInfo, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface DownloadHistoryVC : SkinViewController <UITableViewDataSource, UIAlertViewDelegate, BEFootActionViewDelegate>
{
    int historySum;
    int lastEndSerial;
    BEFootActionView *footView;
    DownloadHistoryInfo *lastEndInfo;
    BOOL loadingMore;
    UIButton *selectAllBtn;
    BOOL isCheckAll;
    id <DownloadHistoryVC> _delegate;
}

@property __weak id <DownloadHistoryVC> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DownloadHistoryInfo *lastEndInfo; // @synthesize lastEndInfo;
@property(retain, nonatomic) BEFootActionView *footView; // @synthesize footView;
@property(nonatomic) int lastEndSerial; // @synthesize lastEndSerial;
- (void).cxx_destruct;
- (BOOL)canResponseLongPress;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (BOOL)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (BOOL)hasMoreDataInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)actionView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)getAllVCType;
- (int)vcType;
- (id)loadingViewText;
- (id)emptyViewText;
- (id)getSongInfoAtIndexPath:(id)arg1;
- (void)addHistoryTo;
- (void)downloadHistory;
- (void)deleteHistoryRecord;
- (void)getMoreHistory;
- (void)modifyBtnText:(int)arg1;
- (void)onTouchSelectAll:(id)arg1;
- (void)addActionButtons;
- (void)buildUserInfo:(id)arg1;
- (void)reFresh;
- (void)dealloc;
- (void)doHandlePushComming:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


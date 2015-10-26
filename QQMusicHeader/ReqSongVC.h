//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "ProtocolHostDelegate.h"
#import "UIControlBubbleDelegate.h"
#import "UITableViewDataSource.h"

@class EGORefreshTableHeaderView, NSString, ReqSongRecordInfo, UIFont, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface ReqSongVC : SkinViewController <UITableViewDataSource, EGORefreshTableHeaderDelegate, ProtocolHostDelegate, UIControlBubbleDelegate>
{
    int key;
    struct CGRect m_arrayRectInCellItem[2][6];
    UIFont *m_fontMessage;
    UIImage *m_imageCellReqSeprate;
    UIImage *m_imageCellReqDialog;
    UIImage *m_imageCellReqDialogHilighed;
    UIImage *m_imageCellReqDialogRight;
    UIImage *m_imageCellReqDialogRightHilighted;
    UIImage *m_imageCellReqPlay;
    UIImage *m_imageCellReqPlayHilighted;
    UIImage *m_imageCellReqPause;
    UIImage *m_imageCellReqPauseHilighted;
    UIImage *m_imageCellReqDisable;
    UIImage *m_imageCellHeadFrame;
    UIImage *m_imageCellReqTimeLine;
    UIView *m_viewNewInfo;
    EGORefreshTableHeaderView *m_refreshHeaderView;
    BOOL m_bReloading;
    ReqSongRecordInfo *m_reqSongRecordInfoLastSelected;
    BOOL m_bStopedByUnkown;
    BOOL m_bShouldShowOfflineTip;
    BOOL m_bAutoScroll;
}

+ (id)shareInstance:(long long)arg1;
@property(retain, nonatomic) ReqSongRecordInfo *m_reqSongRecordInfoLastSelected; // @synthesize m_reqSongRecordInfoLastSelected;
@property(nonatomic) BOOL m_bReloading; // @synthesize m_bReloading;
@property(retain, nonatomic) EGORefreshTableHeaderView *m_refreshHeaderView; // @synthesize m_refreshHeaderView;
@property(retain, nonatomic) UIView *m_viewNewInfo; // @synthesize m_viewNewInfo;
@property(retain, nonatomic) UIImage *m_imageCellReqDialogRightHilighted; // @synthesize m_imageCellReqDialogRightHilighted;
@property(retain, nonatomic) UIImage *m_imageCellReqDialogRight; // @synthesize m_imageCellReqDialogRight;
@property(retain, nonatomic) UIImage *m_imageCellReqTimeLine; // @synthesize m_imageCellReqTimeLine;
@property(retain, nonatomic) UIImage *m_imageCellHeadFrame; // @synthesize m_imageCellHeadFrame;
@property(retain, nonatomic) UIImage *m_imageCellReqDisable; // @synthesize m_imageCellReqDisable;
@property(retain, nonatomic) UIImage *m_imageCellReqPauseHilighted; // @synthesize m_imageCellReqPauseHilighted;
@property(retain, nonatomic) UIImage *m_imageCellReqPause; // @synthesize m_imageCellReqPause;
@property(retain, nonatomic) UIImage *m_imageCellReqPlayHilighted; // @synthesize m_imageCellReqPlayHilighted;
@property(retain, nonatomic) UIImage *m_imageCellReqPlay; // @synthesize m_imageCellReqPlay;
@property(retain, nonatomic) UIImage *m_imageCellReqDialogHilighed; // @synthesize m_imageCellReqDialogHilighed;
@property(retain, nonatomic) UIImage *m_imageCellReqDialog; // @synthesize m_imageCellReqDialog;
@property(retain, nonatomic) UIImage *m_imageCellReqSeprate; // @synthesize m_imageCellReqSeprate;
@property(retain, nonatomic) UIFont *m_fontMessage; // @synthesize m_fontMessage;
@property(nonatomic) int key; // @synthesize key;
- (void).cxx_destruct;
- (BOOL)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (BOOL)hasMoreDataInTableView:(id)arg1;
- (void)onNotifyPlayingStatusChange:(id)arg1;
- (void)setPlayBarPause:(id)arg1;
- (void)setPlayBarPlay:(id)arg1;
- (void)onNotifyRequestSongReceived:(id)arg1;
- (void)showOffLineTipsIfNeeded;
- (void)handleSuccessLogin;
- (void)handleFailedLoginReturn:(struct LoginReturn)arg1 andAlertMessage:(id)arg2;
- (void)onMenuWillHide:(id)arg1;
- (void)onDeleted:(id)arg1;
- (void)onTouchDown:(id)arg1;
- (void)onTouchUpInside:(id)arg1;
- (void)onTouchCancel:(id)arg1;
- (void)onTouchUpOutside:(id)arg1;
- (id)getParentTabelViewCell:(id)arg1;
- (void)showTipView:(id)arg1 bError:(BOOL)arg2;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (BOOL)isIndexTreeGroup:(unsigned int)arg1;
- (unsigned int)rowIndexOfReqSongRecordInfo:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerEnforceRefresh:(id)arg1;
- (id)getPlayButtonByReqSongRecordInfo:(id)arg1;
- (void)loadLast20RecordFromFile;
- (void)saveLast20RecordToFile;
- (id)getRecordFile;
- (id)decodeLast20RecordFromFile:(id)arg1;
- (void)encodeLast20RecordToFile:(id)arg1;
- (void)showNewInfo:(id)arg1;
- (void)showView:(int)arg1;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)doneLoadingTableViewData;
- (void)reloadTableViewDataSource:(BOOL)arg1;
- (id)loadingViewText;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)restorePlayingSongAfterEnforceRefresh;
- (void)onList:(id)arg1 InfoChangeByInfo:(id)arg2 ChangeType:(int)arg3 Index:(unsigned int)arg4;
- (void)onList:(id)arg1 ChangeByType:(int)arg2 Index:(int)arg3 Info:(id)arg4;
- (void)deleteRowsAtIndexPaths:(id)arg1;
- (BOOL)onPlayListChangeIndex:(id)arg1 lastIndex:(int)arg2 index:(int)arg3;
- (void)pushToAudioPlayerView:(id)arg1;
- (void)onTouchUpInsidePlay:(id)arg1;
- (void)setPlayButtonStat:(id)arg1;
- (id)_getParentTableViewCell:(id)arg1;
- (void)onTouchDownPlay:(id)arg1;
- (void)onLongPressPlay:(id)arg1;
- (void)setPlayImageHilighted:(id)arg1 bHilighted:(BOOL)arg2;
- (id)createSubView:(Class)arg1 iTag:(int)arg2 cell:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)recordTableviewCell:(id)arg1 treeNode:(id)arg2;
- (void)setHeadIcon:(id)arg1 data:(id)arg2;
- (id)get100sizeHeadIcon:(id)arg1;
- (void)headIconClick:(id)arg1;
- (id)creteRecordLabel:(id)arg1 tag:(int)arg2 alignment:(int)arg3 color:(unsigned long)arg4 fontSize:(int)arg5;
- (id)timeTableviewCell:(id)arg1 treeNode:(id)arg2;
- (void)addTimeBackLine:(id)arg1 posY:(float)arg2;
- (id)creteNewCell:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)cellHeightWithMsg:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)refreshWithUpdateStyle;
- (void)autoDragScrollView;
- (void)reFresh;
- (id)emptyViewText;
- (int)vcType;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)onColorStyleChanged;
- (void)loadColorableImages;
- (void)loadView;
- (void)resetVCState;
- (id)initWithUin:(unsigned long)arg1;
- (long long)reqUin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

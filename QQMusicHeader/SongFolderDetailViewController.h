//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SongListBaseViewController.h"

#import "BEFootActionViewDelegate.h"
#import "DownLoadEditProtocol.h"
#import "GDTBannerServiceProtocol.h"
#import "QMCreatorViewDelegate.h"
#import "SongListEditDegate.h"

@class BEFootActionView, BELoadingView, FolderInfo, GDTBannerManager, NSArray, NSMutableArray, NSString, QMSwitch, SongInfo, UIImageView, UISwitch, UIView;

__attribute__((visibility("hidden")))
@interface SongFolderDetailViewController : SongListBaseViewController <GDTBannerServiceProtocol, QMCreatorViewDelegate, BEFootActionViewDelegate, SongListEditDegate, DownLoadEditProtocol>
{
    BOOL didRequestGDTBanner;
    BOOL didExposureBanner;
    BOOL isFirstTimeRefresh;
    SongInfo *deleteSong;
    NSMutableArray *folderDeleteSongs;
    BOOL isPiLiangDeleteSongs;
    BELoadingView *modalLoadingView;
    BOOL completelyVisible;
    BOOL _isFromMySongList;
    BOOL _isFromMyProfile;
    BOOL _bNeedResetPositon;
    NSArray *jumpArgumentArray;
    FolderInfo *_mySubscribeDirInfo;
    id <FolderUpdateDelegate> _folderUPDelegate;
    UISwitch *_autoUISwith;
    QMSwitch *_autoQMSwith;
    unsigned long _createrUin;
    BEFootActionView *_footBar;
    NSMutableArray *_editingSongList;
    NSMutableArray *_editingSongDeleted;
    UIView *_cancelEditView;
    UIView *_statusBarView;
    NSString *_strNamedFlag;
    GDTBannerManager *_sharedManager;
}

@property(nonatomic) __weak GDTBannerManager *sharedManager; // @synthesize sharedManager=_sharedManager;
@property(retain, nonatomic) NSString *strNamedFlag; // @synthesize strNamedFlag=_strNamedFlag;
@property(nonatomic) BOOL bNeedResetPositon; // @synthesize bNeedResetPositon=_bNeedResetPositon;
@property(retain, nonatomic) UIView *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(retain, nonatomic) UIView *cancelEditView; // @synthesize cancelEditView=_cancelEditView;
@property(retain, nonatomic) NSMutableArray *editingSongDeleted; // @synthesize editingSongDeleted=_editingSongDeleted;
@property(retain, nonatomic) NSMutableArray *editingSongList; // @synthesize editingSongList=_editingSongList;
@property(retain, nonatomic) BEFootActionView *footBar; // @synthesize footBar=_footBar;
@property(nonatomic) unsigned long createrUin; // @synthesize createrUin=_createrUin;
@property(retain, nonatomic) QMSwitch *autoQMSwith; // @synthesize autoQMSwith=_autoQMSwith;
@property(retain, nonatomic) UISwitch *autoUISwith; // @synthesize autoUISwith=_autoUISwith;
@property(nonatomic) __weak id <FolderUpdateDelegate> folderUPDelegate; // @synthesize folderUPDelegate=_folderUPDelegate;
@property(retain, nonatomic) FolderInfo *mySubscribeDirInfo; // @synthesize mySubscribeDirInfo=_mySubscribeDirInfo;
@property(nonatomic) BOOL isFromMyProfile; // @synthesize isFromMyProfile=_isFromMyProfile;
@property(nonatomic) BOOL isFromMySongList; // @synthesize isFromMySongList=_isFromMySongList;
@property BOOL completelyVisible; // @synthesize completelyVisible;
@property(retain, nonatomic) NSArray *jumpArgumentArray; // @synthesize jumpArgumentArray;
- (void).cxx_destruct;
- (void)gdtBannerViewShouldClose:(id)arg1;
- (void)gdtBannerViewDidLoad:(id)arg1;
- (void)exposureBanner;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCircleSongPoint:(id)arg1;
- (void)showJumpCell:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)offlineSwitchChanged:(id)arg1;
- (void)turnOnAutoSave;
- (BOOL)isAutoSwtichOn;
- (id)getCurrentIndexPathSongInfo:(id)arg1;
- (int)getAutoSaveStatusByIndexPath:(id)arg1;
- (void)_showMessageWhileDone:(id)arg1;
- (void)onList:(id)arg1 ChangeByType:(int)arg2 Index:(int)arg3 Info:(id)arg4;
- (void)deleSongFromCurTableList:(id)arg1;
- (void)hideModalLoadingView;
- (void)deleteDiskFile:(id)arg1;
- (void)deleteSongsDisk:(id)arg1;
- (void)showAlsoDeleteDiskFileBabberTips;
- (void)delObject:(id)arg1;
- (void)delObjects:(id)arg1 withDeleteBlock:(CDUnknownBlockType)arg2;
- (void)deleteTaoGeSongList;
- (void)editFinish:(id)arg1 withResult:(id)arg2;
- (BOOL)isCanDownloadAll;
- (BOOL)isShowActionBarDelButton;
- (BOOL)isCanEditSong;
- (void)onNotifyFolderPictureChanged:(id)arg1;
- (void)onNotifyUploadNewFolderFinish:(id)arg1;
- (void)notifyAutoSaveScheuler;
- (void)onNotifyFolderSongDataSaved:(id)arg1;
- (void)onNotifyAutoSaveSwitchOpened:(id)arg1;
- (void)onNotifyOpenAutoSaveFailed:(id)arg1;
- (void)onNotifyAutoSaveStoped:(id)arg1;
- (void)onNotifyAutoSaveStarted:(id)arg1;
- (void)onNotifySingerListenListChange:(id)arg1;
- (void)loadHeadImage:(id)arg1;
- (void)delayFetchSongListInfo;
- (void)_showAlertViewIfNeeded;
- (id)_getAdjustHeaderviewImage:(id)arg1;
- (float)animateTitleOffset;
- (void)loadImage;
- (int)singerCoverpage;
- (id)buildTableHeaderView;
- (id)buildTableFooterView;
- (void)actionView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)addSubviewsToHeaderView:(id)arg1;
- (void)_updateOfflineCount;
- (void)_batchAddRecentPlaySongsTo;
- (void)_modifyCheckAllBtnAndDeleteBtnTitle;
- (void)_playButtonTapped:(id)arg1;
- (void)onTouchUpInsideDoneEdit:(id)arg1;
- (void)onTouchSelectAll:(id)arg1;
- (unsigned int)getEditingSongsCount;
- (void)onTouchUpInsideEdit:(id)arg1;
- (void)onEditDone:(id)arg1 deletedObjects:(id)arg2 withDeleteBlock:(CDUnknownBlockType)arg3;
- (void)handleCellLongPress:(id)arg1;
- (void)onSongsEdit:(id)arg1;
- (id)createStatusBarView;
- (BOOL)isShowShareAction;
- (void)updataCurUI;
- (void)updateUI;
- (void)showOpenAutoSaveAlert;
- (BOOL)enableRandomCell;
- (BOOL)isShowCommonTitle;
- (BOOL)isShowErrTips;
- (BOOL)isShowNoNetView;
- (BOOL)showDelBtnInActionSheet:(id)arg1;
- (void)loadBannerData;
- (void)updataDataSuccess:(id)arg1;
- (void)addNewNotification;
- (void)reFresh;
- (int)vcType;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)bCanEditBasicInfo;
- (void)didSelectSong:(id)arg1 VC:(id)arg2;
- (void)didheaderCancel:(id)arg1 VC:(id)arg2;
- (void)addSongToThisFolder;
- (void)addSongToThisFolderEvent;
- (id)emptyViewCustomButton;
- (id)emptyViewBgText2;
- (id)emptyViewBgText;
- (int)fromVC;
- (void)loadView;
- (void)back:(id)arg1;
- (void)dealloc;
- (id)initWithMySubscribeDirInfo:(id)arg1 uin:(unsigned long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) UIImageView *imageViewChecked;
@property(readonly) Class superclass;

@end


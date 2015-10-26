//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "BannerVCDelegate.h"
#import "ImageManagerDelegate.h"
#import "MyMusicRootAllFolderCell.h"
#import "MyMusicRootFolderCell.h"
#import "MyMusicRootUserInfoCell.h"
#import "ThreeButtonCell.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class MyMusicRootFolderCell, MyMusicRootNotLoginUserInfoCell, MyMusicRootUserInfoCell, NSArray, NSIndexPath, NSString, NSTimer, TemptToLoginTip, ThreeButtonCell, ThreeButtonItemData;

__attribute__((visibility("hidden")))
@interface MyMusicRootViewController : SkinViewController <UITableViewDataSource, BannerVCDelegate, UITextViewDelegate, UITextFieldDelegate, UIScrollViewDelegate, ImageManagerDelegate, ThreeButtonCell, MyMusicRootFolderCell, MyMusicRootAllFolderCell, MyMusicRootUserInfoCell>
{
    float _bannerHeight;
    BOOL _isBannerToShow;
    NSIndexPath *_userInfoIndexPath;
    NSIndexPath *_localMusicIndexPath;
    NSIndexPath *_iLikeIndexPath;
    NSIndexPath *_guessLikeIndexPath;
    NSIndexPath *_foldersIndexPath;
    NSIndexPath *_allFoldersIndexPath;
    NSArray *_folders;
    TemptToLoginTip *_randomTip;
    NSArray *_threeButtonItemDataLine1;
    NSArray *_threeButtonItemDataLine2;
    ThreeButtonItemData *_allSongsData;
    ThreeButtonItemData *_downloadedSongsData;
    ThreeButtonItemData *_recentPlaySongsData;
    ThreeButtonItemData *_iLikeSongData;
    ThreeButtonItemData *_mvDownloadSongsData;
    ThreeButtonItemData *_recronizedSongsData;
    MyMusicRootFolderCell *_folderCell;
    ThreeButtonCell *_localMusicThreeButtonCell;
    ThreeButtonCell *_iLikeThreeButtonCell;
    MyMusicRootNotLoginUserInfoCell *_notLoginUserInfoCell;
    MyMusicRootUserInfoCell *_userInfoCell;
    NSTimer *_folderDataSavedUpdateTimer;
}

@property(retain) NSTimer *folderDataSavedUpdateTimer; // @synthesize folderDataSavedUpdateTimer=_folderDataSavedUpdateTimer;
@property(retain) MyMusicRootUserInfoCell *userInfoCell; // @synthesize userInfoCell=_userInfoCell;
@property(retain) MyMusicRootNotLoginUserInfoCell *notLoginUserInfoCell; // @synthesize notLoginUserInfoCell=_notLoginUserInfoCell;
@property(retain) ThreeButtonCell *iLikeThreeButtonCell; // @synthesize iLikeThreeButtonCell=_iLikeThreeButtonCell;
@property(retain) ThreeButtonCell *localMusicThreeButtonCell; // @synthesize localMusicThreeButtonCell=_localMusicThreeButtonCell;
@property(retain) MyMusicRootFolderCell *folderCell; // @synthesize folderCell=_folderCell;
@property(retain) ThreeButtonItemData *recronizedSongsData; // @synthesize recronizedSongsData=_recronizedSongsData;
@property(retain) ThreeButtonItemData *mvDownloadSongsData; // @synthesize mvDownloadSongsData=_mvDownloadSongsData;
@property(retain) ThreeButtonItemData *iLikeSongData; // @synthesize iLikeSongData=_iLikeSongData;
@property(retain) ThreeButtonItemData *recentPlaySongsData; // @synthesize recentPlaySongsData=_recentPlaySongsData;
@property(retain) ThreeButtonItemData *downloadedSongsData; // @synthesize downloadedSongsData=_downloadedSongsData;
@property(retain) ThreeButtonItemData *allSongsData; // @synthesize allSongsData=_allSongsData;
@property(retain) NSArray *threeButtonItemDataLine2; // @synthesize threeButtonItemDataLine2=_threeButtonItemDataLine2;
@property(retain) NSArray *threeButtonItemDataLine1; // @synthesize threeButtonItemDataLine1=_threeButtonItemDataLine1;
@property(retain) TemptToLoginTip *randomTip; // @synthesize randomTip=_randomTip;
@property(retain) NSArray *folders; // @synthesize folders=_folders;
@property(retain) NSIndexPath *allFoldersIndexPath; // @synthesize allFoldersIndexPath=_allFoldersIndexPath;
@property(retain) NSIndexPath *foldersIndexPath; // @synthesize foldersIndexPath=_foldersIndexPath;
@property(retain) NSIndexPath *guessLikeIndexPath; // @synthesize guessLikeIndexPath=_guessLikeIndexPath;
@property(retain) NSIndexPath *iLikeIndexPath; // @synthesize iLikeIndexPath=_iLikeIndexPath;
@property(retain) NSIndexPath *localMusicIndexPath; // @synthesize localMusicIndexPath=_localMusicIndexPath;
@property(retain) NSIndexPath *userInfoIndexPath; // @synthesize userInfoIndexPath=_userInfoIndexPath;
- (void).cxx_destruct;
- (void)onTouchUpInsideBuy;
- (void)onTouchUpInsideMoreFolders;
- (void)onTouchUpInsideCreateFolder;
- (void)onTouchUpInsideFolder:(id)arg1;
- (int)loveGroupIndexByAddToLoveType:(int)arg1;
- (void)onTouchUpInsideThreeButtonCell:(id)arg1;
- (void)bannerViewShowingBannerIsChanged:(id)arg1;
- (void)bannerViewImageDidLoaded:(id)arg1;
- (void)bannerViewContentDataIsUpdated:(id)arg1;
- (void)bannerViewCloseBtnTapped:(id)arg1;
- (void)checkAndShowBannerView;
- (void)hideBannerView:(BOOL)arg1;
- (void)showBannerView:(id)arg1;
- (void)refreshSonglistPic:(id)arg1;
- (void)onNotifySystemFolderRedpointReasonGone:(id)arg1;
- (void)onNotifyUserFolderRedpointReasonGone:(id)arg1;
- (void)onNotifyFolderPictureChanged:(id)arg1;
- (BOOL)isTableView:(id)arg1 containIndexPath:(id)arg2;
- (void)onNotifyUpdateNumber:(id)arg1;
- (int)tagByPosition:(int)arg1;
- (void)onNotifyLoadIpodSongsFinish:(id)arg1;
- (void)onNotifyLoginFailed:(id)arg1;
- (void)onNotifyLogout:(id)arg1;
- (void)uploadLocalListToCloud;
- (void)onNotifyCheckFlowPackFinish:(id)arg1;
- (void)onNotifyUserHeaderImageDownloaded:(id)arg1;
- (void)onNotifyVipPurchaseSuccess:(id)arg1;
- (void)onNotifyGetUserInfoSuccess:(id)arg1;
- (void)onNotifyFolderSongDataSaved:(id)arg1;
- (void)onNotifyFolderDataSaved:(id)arg1;
- (void)onNotifyUpdateCloudFolderLocalSonngsCount:(id)arg1;
- (id)threeButtonItemDataByTag:(int)arg1;
- (void)updateRedPoint:(int)arg1;
- (void)updateSubTitle:(int)arg1;
- (id)buttonByTag:(int)arg1;
- (id)buttonByIndexPath:(id)arg1 index:(int)arg2;
- (id)subtitleByTag:(int)arg1;
- (id)subtitleOfLike:(id)arg1;
- (BOOL)isRedPointHiddenByTag:(int)arg1;
- (void)reloadIndexPaths:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (BOOL)existIndexPath:(id)arg1;
- (void)newFolderCallBack:(id)arg1;
- (void)reloadDownloadCell:(BOOL)arg1;
- (void)jumpToMoreFoldersWithCheckCanAutoLogin;
- (void)jumpToMoreFoldersWithOutCheckCanAutoLogin;
- (void)jumpToCreateNewFolder;
- (int)vcType;
- (id)cellForAllFolders:(id)arg1;
- (id)cellForFolders:(id)arg1;
- (int)songCountByListTag:(int)arg1;
- (id)cellforLocalMusic:(id)arg1;
- (id)cellForILike:(id)arg1;
- (id)guessLikeSubTitle;
- (id)cellForGuessLike:(id)arg1;
- (id)cellForUserInfo:(id)arg1;
- (id)cellForNotLoginUserInfo:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)jumpToIndexView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateUserView;
- (void)onNotifyUpdateMVDownloadCell:(id)arg1;
- (void)onNotifyRefreshMVitem:(id)arg1;
- (void)onNotifyCollectToILikeMessageChanged:(id)arg1;
- (void)onNotifyNewTipUpdate:(id)arg1;
- (void)updateOrShowGreenDiamond:(id)arg1;
- (id)formatCountNumber:(int)arg1;
- (float)getSeperateLineWidth;
- (id)getBgName;
- (BOOL)isNeedAddBottomLine;
- (void)viewDidPop;
- (void)reloadFolderData;
- (void)reloadSections;
- (void)loadThreeButtonDatas;
- (void)popGestureRecognize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)addNotifications;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)useBgImage;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "ImageManagerDelegate.h"
#import "InputFolderNameDelegate.h"
#import "ListTagDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CollectInfo, InputFolderName, NSArray, NSString, UITableViewCell, UIView;

__attribute__((visibility("hidden")))
@interface FavoriteFoldersVC : SkinViewController <UITableViewDataSource, UITableViewDelegate, InputFolderNameDelegate, ListTagDelegate, ImageManagerDelegate>
{
    CollectInfo *_collectInfo;
    InputFolderName *_inputFolderName;
    NSArray *_arrayData;
    UIView *_viewLoading;
    struct CGPoint _endPointOfJumpAnimation;
    BOOL _runningJumpAnimation;
    BOOL _isSongInfoViewBgExist;
    BOOL _needRefresh;
    UITableViewCell *_selectedFolderCell;
    SkinViewController *vcFrom;
    UIView *_songInfoView;
    UIView *_albumView;
    int _lastStatusBarStyle;
}

@property(nonatomic) int lastStatusBarStyle; // @synthesize lastStatusBarStyle=_lastStatusBarStyle;
@property(retain, nonatomic) UIView *albumView; // @synthesize albumView=_albumView;
@property(retain, nonatomic) UIView *songInfoView; // @synthesize songInfoView=_songInfoView;
@property(retain, nonatomic) SkinViewController *vcFrom; // @synthesize vcFrom;
@property(retain, nonatomic) UITableViewCell *selectedFolderCell; // @synthesize selectedFolderCell=_selectedFolderCell;
@property(retain, nonatomic) UIView *viewLoading; // @synthesize viewLoading=_viewLoading;
@property(retain, nonatomic) NSArray *arrayData; // @synthesize arrayData=_arrayData;
@property(retain, nonatomic) InputFolderName *inputFolderName; // @synthesize inputFolderName=_inputFolderName;
@property(retain, nonatomic) CollectInfo *collectInfo; // @synthesize collectInfo=_collectInfo;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)getCellAlpha:(id)arg1 folderInfo:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onNotifyAddSongsToCollectFinish:(id)arg1;
- (void)onNotifyFolderSongDataSaved:(id)arg1;
- (void)inputDone:(id)arg1 folderName:(id)arg2;
- (void)inputCanceled:(id)arg1;
- (void)onNotifyAddSongsToNewCollect:(id)arg1;
- (void)headerFinish:(id)arg1;
- (float)getSeperateLineWidth;
- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)jumpAnimationWithEndPoint:(struct CGPoint)arg1 endSize:(struct CGSize)arg2;
- (void)createSongInfoView;
- (void)prepareData;
- (void)headerCancel:(id)arg1;
- (void)doHandlePushComming:(id)arg1;
- (void)newSongTable;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)loadView;
- (id)initWithCollectInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


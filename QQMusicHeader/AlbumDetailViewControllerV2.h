//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinTabBaseViewController.h"

@class AlbumSongsTabVC, FolderSongsDetailTabVC, NSString, QMCreatorView, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface AlbumDetailViewControllerV2 : SkinTabBaseViewController
{
    UIImageView *smallImageView;
    UIView *hederInfoContainerView;
    AlbumSongsTabVC *albumTabVC;
    UIButton *loveBtn;
    UILabel *listenerNumLabel;
    QMCreatorView *creatorView;
    FolderSongsDetailTabVC *detailTabVC;
    int fromVC;
    NSString *_jumpUrl;
}

@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) int fromVC; // @synthesize fromVC;
- (void).cxx_destruct;
- (void)reFreshWithNetworkDetection;
- (id)strVCtype;
- (void)creatorViewDidClick:(id)arg1;
- (void)onAlbumRightButtonClicked:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)updateLoveBtnState;
- (void)onSongListItemLoaded:(id)arg1;
- (void)doLoveAlbum:(id)arg1;
- (void)cancleLoveFolder;
- (BOOL)isBlur;
- (id)getTitle;
- (id)getSmallImageView;
- (id)getSmallView;
- (id)headerText;
- (id)headerPicURL;
- (unsigned int)getHeadBgViewHeight;
- (id)init;
- (id)getAllVCType;
- (void)didLoadTabViewAtIndex:(int)arg1;
- (void)setCreaterSubViewFrame;
- (id)buildHeaderView;
- (id)headerRightView;
- (void)buildSubTabVC;
- (id)initWithFromVC:(int)arg1 withJumpUrl:(id)arg2 withbPlayingUIPush:(BOOL)arg3;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;

@end


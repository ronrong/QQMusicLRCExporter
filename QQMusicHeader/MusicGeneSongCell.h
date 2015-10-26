//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMusicCell.h"

#import "ImageManagerDelegate.h"
#import "QMCreatorViewDelegate.h"

@class ChannelCreator, MusicGene, NSString, QMCreatorView, QMFadeImageView, SharePlayBtn, SongInfo, UIButton, UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface MusicGeneSongCell : QQMusicCell <QMCreatorViewDelegate, ImageManagerDelegate>
{
    BOOL _isPlaying;
    MusicGene *_gene;
    ChannelCreator *_user;
    SongInfo *_song;
    id <MusicGeneSongCellDelegate> _delegate;
    int _index;
    SharePlayBtn *_playBtn;
    UIButton *_heartBtn;
    UIImageView *_segmentedLine;
    QMCreatorView *_creatorView;
    UIView *_songContainerView;
    QMFadeImageView *_songImageView;
    UILabel *_songNameLabel;
    UILabel *_singerNameLabel;
}

@property(retain, nonatomic) UILabel *singerNameLabel; // @synthesize singerNameLabel=_singerNameLabel;
@property(retain, nonatomic) UILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) QMFadeImageView *songImageView; // @synthesize songImageView=_songImageView;
@property(retain, nonatomic) UIView *songContainerView; // @synthesize songContainerView=_songContainerView;
@property(retain, nonatomic) QMCreatorView *creatorView; // @synthesize creatorView=_creatorView;
@property(retain, nonatomic) UIImageView *segmentedLine; // @synthesize segmentedLine=_segmentedLine;
@property(retain, nonatomic) UIButton *heartBtn; // @synthesize heartBtn=_heartBtn;
@property(retain, nonatomic) SharePlayBtn *playBtn; // @synthesize playBtn=_playBtn;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) __weak id <MusicGeneSongCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) SongInfo *song; // @synthesize song=_song;
@property(readonly, nonatomic) ChannelCreator *user; // @synthesize user=_user;
@property(readonly, nonatomic) MusicGene *gene; // @synthesize gene=_gene;
- (void).cxx_destruct;
- (BOOL)showArrow;
- (void)creatorViewDidClick:(id)arg1;
- (void)didClickLikeBtn;
- (void)didClickPlayOrPauseBtn;
- (void)onNotifyDeletedSongFrom201:(id)arg1;
- (void)onNotifySongsChangedLoveState:(id)arg1;
- (void)updateIsMyFavorite:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)updateWithGene:(id)arg1 song:(id)arg2 andUser:(id)arg3;
- (id)initWithDelegate:(id)arg1;
- (id)reuseIdentifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


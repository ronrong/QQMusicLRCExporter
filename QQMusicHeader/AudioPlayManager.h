//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioSessionDelegate.h"
#import "ImageManagerDelegate.h"
#import "LyricManagerDelegate.h"
#import "ProtocolHostDelegate.h"
#import "SongInfoFreshDelegate.h"
#import "SongQueryCallBackDelegate.h"
#import "UIAlertViewDelegate.h"

@class AudioPlayerBase, IPodAVPlayer, ListBase, LyricManager, NSMutableArray, NSString, NSTimer, PlayList, QMAudioPlayerVC, QPlayPlayer, SingleHourglass, SongInfo, SpeedRecorder;

__attribute__((visibility("hidden")))
@interface AudioPlayManager : NSObject <ImageManagerDelegate, LyricManagerDelegate, AVAudioSessionDelegate, ProtocolHostDelegate, UIAlertViewDelegate, SongInfoFreshDelegate, SongQueryCallBackDelegate>
{
    QMAudioPlayerVC *playerUIViewController;
    SongInfo *currentSong;
    SongInfo *wantPlaySong;
    NSTimer *progressUpdateTimer;
    NSObject *timerLock;
    LyricManager *lyricManager;
    AudioPlayerBase *streamPlayer;
    IPodAVPlayer *iPodPlayer4;
    AudioPlayerBase *player;
    BOOL bDLNAPlay;
    QPlayPlayer *QPlayer;
    BOOL bPlayLocalFile;
    PlayList *playlist;
    int playtype;
    BOOL bPauseCauseInterruption;
    BOOL bErrCaseByNet;
    BOOL bHeadsetChanedDuringInterruption;
    BOOL PluginInterruptionHappened;
    BOOL bError;
    BOOL _bManualCause;
    id keyWantUpdatedToPlayList;
    ListBase *listBaseWantUpdateToPlayList;
    BOOL bStop;
    SongInfo *checkedCacheSong;
    BOOL _hasClickedPlayForThisNetChange;
    BOOL _isAutoJumpToSpecifyIndex;
    NSString *strStatPlayTypeLine;
    BOOL bWaitSongInfo;
    BOOL _HQState;
    BOOL _SQState;
    BOOL interrupted;
    BOOL launchInPlayingView;
    BOOL _isManualTrigPlay;
    BOOL _isCanInitPlayingUI;
    BOOL _playingNextSongsQueue;
    BOOL _isPlayPreSong;
    BOOL _isPlayingViewShow;
    BOOL _firstLoadPalyingView;
    BOOL _isFirstLoadPlayList;
    BOOL _shouldCheckPersistConnection;
    BOOL _shouldAddedToRecentPlayList;
    SingleHourglass *stuckedHourglass;
    SongInfo *stuckedSong;
    SongInfo *waitingFingerPrintSong;
    SpeedRecorder *_speedRecorder;
    NSMutableArray *_nextSongsQueue;
    float _lastVolume;
    int _eSpecialListToShowPlayingView;
    NSTimer *_playRadioTimer;
    double stuckedPosition;
    double _volumeSliderChangeTime;
}

+ (BOOL)isPlayingSong:(id)arg1;
+ (id)sharedAudioPlayManager;
@property(retain, nonatomic) NSTimer *playRadioTimer; // @synthesize playRadioTimer=_playRadioTimer;
@property(nonatomic) BOOL shouldAddedToRecentPlayList; // @synthesize shouldAddedToRecentPlayList=_shouldAddedToRecentPlayList;
@property(nonatomic) BOOL shouldCheckPersistConnection; // @synthesize shouldCheckPersistConnection=_shouldCheckPersistConnection;
@property(nonatomic) int eSpecialListToShowPlayingView; // @synthesize eSpecialListToShowPlayingView=_eSpecialListToShowPlayingView;
@property(nonatomic) BOOL isFirstLoadPlayList; // @synthesize isFirstLoadPlayList=_isFirstLoadPlayList;
@property(nonatomic) BOOL firstLoadPalyingView; // @synthesize firstLoadPalyingView=_firstLoadPalyingView;
@property(nonatomic) BOOL isPlayingViewShow; // @synthesize isPlayingViewShow=_isPlayingViewShow;
@property(nonatomic) BOOL isPlayPreSong; // @synthesize isPlayPreSong=_isPlayPreSong;
@property(nonatomic) float lastVolume; // @synthesize lastVolume=_lastVolume;
@property(nonatomic) double volumeSliderChangeTime; // @synthesize volumeSliderChangeTime=_volumeSliderChangeTime;
@property(nonatomic) BOOL playingNextSongsQueue; // @synthesize playingNextSongsQueue=_playingNextSongsQueue;
@property(retain, nonatomic) NSMutableArray *nextSongsQueue; // @synthesize nextSongsQueue=_nextSongsQueue;
@property(readonly, nonatomic) SpeedRecorder *speedRecorder; // @synthesize speedRecorder=_speedRecorder;
@property(nonatomic) BOOL isCanInitPlayingUI; // @synthesize isCanInitPlayingUI=_isCanInitPlayingUI;
@property(nonatomic) BOOL isManualTrigPlay; // @synthesize isManualTrigPlay=_isManualTrigPlay;
@property(nonatomic) BOOL launchInPlayingView; // @synthesize launchInPlayingView;
@property(retain) ListBase *listBaseWantUpdateToPlayList; // @synthesize listBaseWantUpdateToPlayList;
@property(retain) id keyWantUpdatedToPlayList; // @synthesize keyWantUpdatedToPlayList;
@property(nonatomic) BOOL PluginInterruptionHappened; // @synthesize PluginInterruptionHappened;
@property(nonatomic) BOOL bPauseCauseInterruption; // @synthesize bPauseCauseInterruption;
@property(nonatomic) BOOL interrupted; // @synthesize interrupted;
@property(retain, nonatomic) SongInfo *wantPlaySong; // @synthesize wantPlaySong;
@property(retain, nonatomic) NSString *strStatPlayTypeLine; // @synthesize strStatPlayTypeLine;
@property(retain, nonatomic) SongInfo *checkedCacheSong; // @synthesize checkedCacheSong;
@property(nonatomic) BOOL bManualCause; // @synthesize bManualCause=_bManualCause;
@property(copy, nonatomic) SongInfo *waitingFingerPrintSong; // @synthesize waitingFingerPrintSong;
@property(copy, nonatomic) SongInfo *stuckedSong; // @synthesize stuckedSong;
@property(nonatomic) double stuckedPosition; // @synthesize stuckedPosition;
@property(retain, nonatomic) SingleHourglass *stuckedHourglass; // @synthesize stuckedHourglass;
@property(nonatomic) BOOL bDLNAPlay; // @synthesize bDLNAPlay;
@property(readonly, nonatomic) PlayList *playlist; // @synthesize playlist;
@property(retain, nonatomic) AudioPlayerBase *player; // @synthesize player;
@property(retain, nonatomic) LyricManager *lyricManager; // @synthesize lyricManager;
@property(retain, nonatomic) QMAudioPlayerVC *playerUIViewController; // @synthesize playerUIViewController;
@property(retain, nonatomic) SongInfo *currentSong; // @synthesize currentSong;
- (void).cxx_destruct;
- (BOOL)shouldShowPlahingViewWhilePlayNewList;
- (BOOL)isPlayingILikeRadio;
- (int)firstNotPlayedInILike:(id)arg1;
- (void)handleRadioProtocolBack:(id)arg1 workResult:(int)arg2 block:(CDUnknownBlockType)arg3 showUI:(BOOL)arg4 from:(id)arg5;
- (void)playRadio:(int)arg1 vcFrom:(id)arg2 showUI:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (void)playRadioTimerCome:(id)arg1;
- (void)startPlayRadioTimer:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (void)queryFakeSongInfo:(id)arg1;
- (BOOL)isPlayingRadio;
- (id)stealNextSongsQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)restore2PreviousStatus:(id)arg1 withFilePath:(id)arg2 isAutoPlay:(BOOL)arg3;
- (BOOL)safeRestore2PreviousStatus:(id)arg1 withFilePath:(id)arg2 isAutoPlay:(BOOL)arg3;
- (void)savePreviousStatusWithFilePath:(id)arg1;
- (void)informAudioPlayerUIReceivedSongFromFriends;
- (void)changeRadioPlayList;
- (void)audioPlayerReturn;
- (void)showAudioPlayerUI:(BOOL)arg1 isNeedToResetNavbar:(BOOL)arg2;
- (void)showAudioPlayerUI:(BOOL)arg1;
- (void)nowPlayingButtonPressed:(id)arg1;
- (void)initAudioPlayerUI;
- (void)initAudioPlayerUIWhenInit;
- (id)popNextSongInQueue;
- (void)playSongInNextSongQueue:(int)arg1;
- (void)addNextSongsToQueue:(id)arg1;
- (void)setListPlayMode:(int)arg1;
- (BOOL)canPlay320Mp3InQPlayMode;
- (void)startUpdateProgressTimer;
- (void)stopUpdateProgressTimer;
- (BOOL)_canPlayNextWithDataSourceError:(int)arg1;
- (id)getMediaTrackInfo;
- (id)getPlayingLocalFilePath;
- (void)refreshAlbumOnChangeToPlaying;
- (BOOL)checkNoWifiAlertWhenUrlRetry;
- (void)doSomethingWhenNofityNoDataBeforeDataRetry;
- (void)onNotifyNoDataBeforeDataRetry:(id)arg1;
- (void)onNotifyUrlAudioDataNeedRetry:(id)arg1;
- (BOOL)hasQPlaySupportedSongsinPlaylist;
- (void)tryToCheckWorkAndPlay;
- (void)reachabilityChanged:(id)arg1;
- (void)onNotifyDurationGeted:(id)arg1;
- (void)onNofityLogout:(id)arg1;
- (void)updatePlayingList:(id)arg1;
- (BOOL)researchLyricForSong:(id)arg1;
- (void)getLyricByFingerPrint:(id)arg1 manualCause:(BOOL)arg2;
- (int)getPlayingIndex;
- (id)getLiteralStrForPlayMode:(int)arg1;
- (id)getNextLiteralPlayMode;
- (id)getLiteralPlayMode;
- (int)getPlayMode;
- (void)setPlayMode:(int)arg1;
- (void)HeadsetUnplugged;
- (void)HeadsetPlugged;
- (void)endInterruption;
- (void)endInterruptionWithFlags:(unsigned int)arg1;
- (void)beginInterruption;
- (void)interruption:(id)arg1;
- (void)initQQMusicAudioSession;
- (BOOL)isPlayingMyMusicList;
- (void)prepareAllDataInLoading:(BOOL)arg1;
- (void)checkLocalSongMid;
- (void)playPre:(BOOL)arg1;
- (void)playNext:(BOOL)arg1;
- (BOOL)_playNextSongQueue;
- (void)replaceQPlayQueueSinceLastSong:(id)arg1;
- (void)updateQPlaySong:(id)arg1;
- (void)createPlayerForQPlay;
- (void)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3 clearErrorCount:(BOOL)arg4;
- (void)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3 autoPlay:(BOOL)arg4;
- (void)playRecognizeSong:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3;
- (void)playMusicCircleFeedList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3;
- (void)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3;
- (void)playList:(id)arg1 Index:(int)arg2 listPlayMode:(int)arg3 autoPlay:(BOOL)arg4 clearErrorCount:(BOOL)arg5;
- (void)firstLoadSongList;
- (void)_activeFirstPieceCacheManager:(id)arg1;
- (void)lyricManagerCallBack:(id)arg1 state:(int)arg2;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)updateProgress:(id)arg1;
- (void)_cacheNextSong:(double)arg1 progress:(double)arg2;
- (void)_addToRecentPlayList:(BOOL)arg1;
- (void)addToRecentPlayList;
- (void)destroyAudioPlayer;
- (void)stopPlay;
- (BOOL)isRealBuffering;
- (BOOL)isRealPaused;
- (BOOL)isRealPlaying;
- (BOOL)isPlaying;
- (void)setEffect:(int)arg1 withParam:(int)arg2;
- (void)setCurrentEffect;
- (void)fadeVolumeWithDuration:(double)arg1;
- (void)resmuAddDAU;
- (void)pauseOrContinuePlayImmediately:(BOOL)arg1;
- (void)seekToNewPlayTime:(float)arg1;
- (void)updateErrCaseFlg;
- (void)myAudioPlayerStateChanged:(id)arg1;
- (void)updateSongInfo:(id)arg1 autoPlay:(BOOL)arg2;
- (void)checkChacheAndOpenAndPlay:(BOOL)arg1;
- (void)autoJumpToSpecifyIndex:(id)arg1;
- (void)sethasClickedPlayForThisNetChange:(BOOL)arg1;
- (void)play;
- (void)checkUnUsedSong:(id)arg1 CacheSong:(id)arg2;
- (void)delayPostError;
- (void)open:(id)arg1;
- (void)openAndPlay:(id)arg1;
- (void)changeSQSong:(id)arg1;
- (void)changeHQSong:(id)arg1;
- (void)songQueryCallBackWithSongArray:(id)arg1;
- (void)bFreshSongInfoCommplete:(id)arg1;
- (void)playSingleSong:(id)arg1;
- (BOOL)isQPlayMode;
- (void)setQPlayMode:(BOOL)arg1 autoPlay:(BOOL)arg2;
- (void)playQueue:(id)arg1;
- (BOOL)getQPlayMode;
- (void)setQPlayMode:(BOOL)arg1;
- (float)getVolume;
- (void)setSpeakerVolume:(float)arg1 filter:(BOOL)arg2;
- (void)setVolume:(float)arg1 filter:(BOOL)arg2;
- (void)prePlayLyricFromLyricManager;
- (void)prePlayingViewPlayInfo:(BOOL)arg1;
- (void)prePlayInfo:(BOOL)arg1;
- (void)refreshMinibarData;
- (id)_getAlbumImageOnPrePlayInfo;
- (void)onNotifyForbidden:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

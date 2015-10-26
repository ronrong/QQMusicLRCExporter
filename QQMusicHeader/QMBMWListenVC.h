//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IdentifyTrackHMIBaseViewController.h"

#import "ImageManagerDelegate.h"
#import "SongInfoFreshDelegate.h"

@class NSString, QMRecognizerRecordView, SongInfo;

__attribute__((visibility("hidden")))
@interface QMBMWListenVC : IdentifyTrackHMIBaseViewController <ImageManagerDelegate, SongInfoFreshDelegate>
{
    QMRecognizerRecordView *_recognizerView;
    SongInfo *_song;
    SongInfo *lastAddToLoveSong;
    BOOL bPauseByMe;
}

@property(retain, nonatomic) SongInfo *lastAddToLoveSong; // @synthesize lastAddToLoveSong;
- (void).cxx_destruct;
- (void)onList:(id)arg1 ChangeByType:(int)arg2 Index:(int)arg3 Info:(id)arg4;
- (void)onList:(id)arg1 InfoChangeByInfo:(id)arg2 ChangeType:(int)arg3 Index:(int)arg4;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)downSel:(id)arg1;
- (void)down:(id)arg1;
- (void)setRATextTipswithText:(id)arg1;
- (void)setTextTipswithTextId:(int)arg1;
- (void)showAddSongErrTips:(id)arg1;
- (id)_formatAddSongsToFolderMsgWithErrorCollectType:(int)arg1 collectInfo:(id)arg2 folderId:(int)arg3;
- (void)onNotifyCollectEdit:(id)arg1;
- (void)love:(id)arg1;
- (void)loveSel:(id)arg1;
- (void)clearTips;
- (void)onNotifySongsChangedLoveState:(id)arg1;
- (void)registerActionsAndEvents;
- (void)featureDidStop;
- (void)disPlayInf:(int)arg1;
- (void)displayLoading:(BOOL)arg1;
- (void)startListen:(id)arg1;
- (void)showNotMatchServiceError;
- (void)showNotMatchNetwork;
- (void)showNotMatchEmpty;
- (void)failRecogniz:(id)arg1;
- (void)updateAlbumPic:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (id)getSubString:(id)arg1 lengthNoMoreThan:(int)arg2;
- (void)refreshSongData;
- (void)bFreshSongInfoCommplete:(id)arg1;
- (void)successRecogniz:(id)arg1;
- (void)enabledAllBtn:(BOOL)arg1 ExceptRetry:(BOOL)arg2;
- (void)clearPlayInfo;
- (void)hmiStateVisibleChange:(BOOL)arg1;
- (void)featureDidStart;
- (void)dealloc;
- (id)initWithFeatureController:(id)arg1 hmiStateComponentId:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

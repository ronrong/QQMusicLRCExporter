//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMBMWHMIBaseVC.h"

@class ChannelItem;

__attribute__((visibility("hidden")))
@interface QMBMWPlayListVC : QMBMWHMIBaseVC
{
    BOOL bFreshing;
    ChannelItem *item;
    int _errTxtID;
}

@property(nonatomic) int errTxtID; // @synthesize errTxtID=_errTxtID;
@property BOOL bFreshing; // @synthesize bFreshing;
@property(retain, nonatomic) ChannelItem *item; // @synthesize item;
- (void).cxx_destruct;
- (void)registerActionsAndEvents;
- (void)hmiStateFocusChange:(BOOL)arg1;
- (void)refreshSong:(id)arg1;
- (void)playSongSel:(id)arg1;
- (void)playSong:(id)arg1;
- (void)featureDidStop;
- (void)updateSongList;
- (void)onList:(id)arg1 InfoChangeByInfo:(id)arg2 ChangeType:(int)arg3 Index:(unsigned int)arg4;
- (void)onList:(id)arg1 ChangeByType:(int)arg2 Index:(int)arg3 Info:(id)arg4;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)onNotifyPlayingSongChange:(id)arg1;
- (void)showTips:(int)arg1;
- (void)_listDataDidUpdate:(id)arg1;
- (void)hmiStateVisibleChange:(BOOL)arg1;
- (void)featureDidStart;
- (void)dealloc;
- (id)initWithFeatureController:(id)arg1 hmiStateComponentId:(int)arg2;

@end


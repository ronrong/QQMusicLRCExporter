//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDHMIViewController.h"

#import "ListTagDelegate.h"

@class ListTag, NSString;

__attribute__((visibility("hidden")))
@interface QMBMWHMIBaseVC : SDHMIViewController <ListTagDelegate>
{
    BOOL _hasFocus;
    BOOL _isVisible;
    int _hmiStateComponentId;
    ListTag *listTag;
}

@property(retain, nonatomic) ListTag *listTag; // @synthesize listTag;
@property BOOL isVisible; // @synthesize isVisible=_isVisible;
@property BOOL hasFocus; // @synthesize hasFocus=_hasFocus;
@property(readonly) int hmiStateComponentId; // @synthesize hmiStateComponentId=_hmiStateComponentId;
- (void).cxx_destruct;
- (void)showWarningMsg:(id)arg1 withMyHmiEventId:(int)arg2;
- (void)showWarningInfo:(int)arg1 withMyHmiEventId:(int)arg2;
- (void)playList:(id)arg1 ItemClicked:(int)arg2 listPlayMode:(int)arg3;
- (void)playList:(id)arg1 ItemClicked:(int)arg2;
- (BOOL)canPlay:(id)arg1 itemIndex:(int)arg2;
- (void)onHMIStateVisibleChange:(id)arg1;
- (void)onHMIStateFocusChange:(id)arg1;
- (void)hmiStateVisibleChange:(BOOL)arg1;
- (void)hmiStateFocusChange:(BOOL)arg1;
- (void)featureDidStop;
- (void)featureDidStart;
- (void)onNotifyPlayingSongChange:(id)arg1;
- (void)featureDidConnectToVehicle:(id)arg1;
- (int)getMyHmiEventID;
- (id)listData;
- (id)list;
- (id)allSongs;
- (void)onList:(id)arg1 ChangeByType:(int)arg2 Index:(int)arg3 Info:(id)arg4;
- (void)onList:(id)arg1 InfoChangeByInfo:(id)arg2 ChangeType:(int)arg3 Index:(int)arg4;
- (void)onList:(id)arg1 WithResult:(int)arg2 AndAct:(id)arg3;
- (void)delListTag;
- (void)addListTag:(int)arg1;
- (id)initWithFeatureController:(id)arg1 hmiStateComponentId:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMBMWHMIBaseVC.h"

@class SongInfo;

__attribute__((visibility("hidden")))
@interface QMBMWDownVC : QMBMWHMIBaseVC
{
    SongInfo *song;
}

@property(retain, nonatomic) SongInfo *song; // @synthesize song;
- (void).cxx_destruct;
- (void)registerActionsAndEvents;
- (void)downTopSel:(id)arg1;
- (void)downTop:(id)arg1;
- (void)downHighSel:(id)arg1;
- (void)clearInfo;
- (void)onDownloadTop:(id)arg1;
- (void)downHigh:(id)arg1;
- (void)featureDidStart;
- (void)hmiStateVisibleChange:(BOOL)arg1;

@end


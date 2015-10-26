//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "QMChannelInteractiveProtocol.h"
#import "QMFocusScrollViewDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, QMFocusScrollView;

__attribute__((visibility("hidden")))
@interface ChannelRootViewController_V3 : SkinViewController <QMFocusScrollViewDelegate, QMChannelInteractiveProtocol>
{
    BOOL _UIReadyState;
    NSDictionary *_channelHomeData;
    QMFocusScrollView *_focusScrollView;
    NSMutableDictionary *_tableDataCache;
}

@property(retain, nonatomic) NSMutableDictionary *tableDataCache; // @synthesize tableDataCache=_tableDataCache;
@property(retain, nonatomic) QMFocusScrollView *focusScrollView; // @synthesize focusScrollView=_focusScrollView;
@property(retain, nonatomic) NSDictionary *channelHomeData; // @synthesize channelHomeData=_channelHomeData;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)requestToShowMore:(id)arg1;
- (void)requestToPlayChannel:(id)arg1;
- (void)requestToShowChannel:(id)arg1;
- (void)QMFocusScrollView:(id)arg1 didSelectItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)_dataAtIndexPath:(id)arg1;
- (void)_newHomeDataDidUpdate:(id)arg1;
- (void)_serverChanged;
- (int)vcType;
- (void)reFresh;
- (void)popGestureRecognize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)isNeedAddBottomLine;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


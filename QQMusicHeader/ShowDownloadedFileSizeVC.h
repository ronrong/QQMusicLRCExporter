//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

__attribute__((visibility("hidden")))
@interface ShowDownloadedFileSizeVC : SkinViewController
{
    id _callbackDelegate;
    SEL _callbackSelector;
}

@property(nonatomic) SEL callbackSelector; // @synthesize callbackSelector=_callbackSelector;
@property(nonatomic) __weak id callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_onAlertSwitchClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)getBgName;
- (void)viewDidLoad;
- (void)loadView;

@end


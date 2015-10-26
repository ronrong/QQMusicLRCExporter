//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "OHAttributedLabelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface ListenDetailVC : SkinViewController <UITableViewDataSource, UITableViewDelegate, OHAttributedLabelDelegate>
{
    UITableView *detailsTable;
    NSArray *data;
    NSArray *_wifiData;
    id callback;
    SEL changeIndex;
    BOOL finishMode;
}

@property(nonatomic) BOOL finishMode; // @synthesize finishMode;
@property(nonatomic) SEL changeIndex; // @synthesize changeIndex;
@property(nonatomic) __weak id callback; // @synthesize callback;
- (void).cxx_destruct;
- (BOOL)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (void)loginFail;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)loginSucess:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)getBgName;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


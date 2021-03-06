//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController.h"

#import "CategoryGroupCellDelegate.h"

@class MusicListCategory, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicListCategoriesViewController : SkinViewController <CategoryGroupCellDelegate>
{
    int _touchCount;
    id <MusicListCategoriesVCDelegate> _delegate;
    MusicListCategory *_selectedCategory;
    NSMutableArray *_selectedCategorys;
    int _mode;
    NSArray *_categoryGroups;
}

@property(retain, nonatomic) NSArray *categoryGroups; // @synthesize categoryGroups=_categoryGroups;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSMutableArray *selectedCategorys; // @synthesize selectedCategorys=_selectedCategorys;
@property(retain, nonatomic) MusicListCategory *selectedCategory; // @synthesize selectedCategory=_selectedCategory;
@property(nonatomic) __weak id <MusicListCategoriesVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_onTouchUpInsideHeaderTitle:(id)arg1;
- (void)_classicReturn;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)selectedCategorysInListVC;
- (void)delThisTag:(id)arg1;
- (id)tagBtnWithFrame:(struct CGRect)arg1;
- (void)freshHeaderTagBtn;
- (void)didClickCategory:(id)arg1;
- (void)_categoriesDataDidUpdate:(id)arg1;
- (void)back:(id)arg1;
- (void)headerFinish:(id)arg1;
- (void)reFresh;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


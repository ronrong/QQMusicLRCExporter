//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChannelBaseTabVC.h"

__attribute__((visibility("hidden")))
@interface CategoryTabVC : ChannelBaseTabVC
{
}

- (id)translateToCategoryItem:(id)arg1;
- (void)translateGroupItemsToCellData:(id)arg1 withGroupType:(int)arg2;
- (void)translateServerDataToUIAcceptableData:(id)arg1;
- (void)_categoryPageDataDidUpdate:(id)arg1;
- (void)willActiveCurrentTab;
- (int)vcType;
- (void)reFresh;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CategoricalSongFolderListItem;

__attribute__((visibility("hidden")))
@interface ChannelV4CategoryNormalTypeView : UIButton
{
    CategoricalSongFolderListItem *_categoryItem;
    UIButton *_cateBtn;
}

@property(retain, nonatomic) UIButton *cateBtn; // @synthesize cateBtn=_cateBtn;
@property(retain, nonatomic) CategoricalSongFolderListItem *categoryItem; // @synthesize categoryItem=_categoryItem;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)enterCategoryDetailVC;
- (id)getBtnBgColor;
- (void)reloadData;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andCategoryItem:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ChannelV4Category, NSArray, NSMutableArray, UIImageView;

__attribute__((visibility("hidden")))
@interface CustomCategoriesView : UIView
{
    BOOL _canMutiSelect;
    ChannelV4Category *_selectedCategory;
    NSMutableArray *_selectedCategories;
    NSArray *_categories;
    float _rowHeight;
    id <CustomCategoriesViewDelegate> _delegate;
    unsigned int _totalNum;
    unsigned int _colums;
    unsigned int _rows;
    UIImageView *_selectedImageView;
}

@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) unsigned int rows; // @synthesize rows=_rows;
@property(nonatomic) unsigned int colums; // @synthesize colums=_colums;
@property(nonatomic) unsigned int totalNum; // @synthesize totalNum=_totalNum;
@property(nonatomic) BOOL canMutiSelect; // @synthesize canMutiSelect=_canMutiSelect;
@property(nonatomic) __weak id <CustomCategoriesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSMutableArray *selectedCategories; // @synthesize selectedCategories=_selectedCategories;
@property(retain, nonatomic) ChannelV4Category *selectedCategory; // @synthesize selectedCategory=_selectedCategory;
- (void).cxx_destruct;
- (void)refreshSelected;
- (unsigned int)getIndexFromRow:(unsigned int)arg1 andColum:(unsigned int)arg2;
- (id)seperateLine:(struct CGRect)arg1;
- (void)onCategoryBtnClicked:(id)arg1;
- (void)setSelectedIMageFrameWithBtnFrame:(struct CGRect)arg1;
- (void)prepareView;
- (id)initWithFrame:(struct CGRect)arg1 andCategoriesTotalNum:(unsigned int)arg2 andColums:(unsigned int)arg3;
- (void)dealloc;

@end

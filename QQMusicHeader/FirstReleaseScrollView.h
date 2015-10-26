//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FirstReleaseScrollView : UIScrollView <UIScrollViewDelegate>
{
    id <FirstReleaseScrollViewDataSource> frDataSource;
    id <FirstReleaseScrollViewDelegate> frDelegate;
    NSMutableArray *_reusedItemViews;
    NSMutableDictionary *_itemPositions;
    NSMutableDictionary *_dataLoadingStatus;
    NSMutableDictionary *_imageLoadingStatus;
    NSArray *_currentVisibleItemIndexs;
}

@property(retain, nonatomic) NSArray *currentVisibleItemIndexs; // @synthesize currentVisibleItemIndexs=_currentVisibleItemIndexs;
@property(retain) NSMutableDictionary *imageLoadingStatus; // @synthesize imageLoadingStatus=_imageLoadingStatus;
@property(retain, nonatomic) NSMutableDictionary *dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(retain, nonatomic) NSMutableDictionary *itemPositions; // @synthesize itemPositions=_itemPositions;
@property(retain, nonatomic) NSMutableArray *reusedItemViews; // @synthesize reusedItemViews=_reusedItemViews;
@property(nonatomic) __weak id <FirstReleaseScrollViewDelegate> frDelegate; // @synthesize frDelegate;
@property(nonatomic) __weak id <FirstReleaseScrollViewDataSource> frDataSource; // @synthesize frDataSource;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_loadVisibleItems;
- (id)_visibleItemIndexs;
- (BOOL)_imageIsLoadedAtIndex:(int)arg1;
- (void)_markImageIsLoadedAtIndex:(int)arg1;
- (BOOL)_dataIsLoadedAtIndex:(int)arg1;
- (void)_markDataIsLoadedAtIndex:(int)arg1;
- (id)_defaultImageForIndex:(int)arg1;
- (void)_imageButtonTapped:(id)arg1;
- (void)_updateContentSize;
- (void)_composeItemViewWithDataAtIndex:(int)arg1;
- (id)_dequeueReusableItemViewAtIndex:(int)arg1;
- (id)_generateItemViewAtIndex:(int)arg1 withFrame:(struct CGRect)arg2;
- (struct CGRect)_frameForItemAtIndex:(int)arg1;
- (void)resetItemImageAtIndex:(int)arg1 withNewImage:(id)arg2;
- (void)reloadItemImageAtIndex:(int)arg1;
- (void)reloadItemAtIndex:(int)arg1;
- (void)reloadData;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComRootCell.h"

#import "FirstReleaseScrollViewDataSource.h"
#import "FirstReleaseScrollViewDelegate.h"
#import "ImageManagerDelegate.h"

@class AsynDBCall, FirstReleaseListInfo, FirstReleaseScrollView, NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface FirstReleaseCell : ComRootCell <FirstReleaseScrollViewDataSource, FirstReleaseScrollViewDelegate, ImageManagerDelegate>
{
    id <FirstReleaseCellDelegate> delegate;
    NSString *specifiedIndentifier;
    UIImageView *indicatorView;
    UILabel *titleLabel;
    UILabel *weekLabel;
    UILabel *weekStaticLabel;
    UILabel *yearLabel;
    FirstReleaseScrollView *firstReleaseScrollView;
    UIImageView *separateLine;
    FirstReleaseListInfo *_listInfo;
    AsynDBCall *_imageAysnCall;
}

@property(retain, nonatomic) AsynDBCall *imageAysnCall; // @synthesize imageAysnCall=_imageAysnCall;
@property(retain, nonatomic) FirstReleaseListInfo *listInfo; // @synthesize listInfo=_listInfo;
@property(retain, nonatomic) UIImageView *separateLine; // @synthesize separateLine;
@property(retain, nonatomic) FirstReleaseScrollView *firstReleaseScrollView; // @synthesize firstReleaseScrollView;
@property(retain, nonatomic) UILabel *yearLabel; // @synthesize yearLabel;
@property(retain, nonatomic) UILabel *weekStaticLabel; // @synthesize weekStaticLabel;
@property(retain, nonatomic) UILabel *weekLabel; // @synthesize weekLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIImageView *indicatorView; // @synthesize indicatorView;
@property(retain, nonatomic) NSString *specifiedIndentifier; // @synthesize specifiedIndentifier;
@property(nonatomic) __weak id <FirstReleaseCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)firstReleaseScrollView:(id)arg1 didTapOnItemAtIndex:(int)arg2;
- (id)itemTypeInFRScrollView:(id)arg1;
- (id)firstReleaseScrollView:(id)arg1 subtitleForItemAtIndex:(int)arg2;
- (id)firstReleaseScrollView:(id)arg1 titleForItemAtIndex:(int)arg2;
- (id)firstReleaseScrollView:(id)arg1 imageForItemAtIndex:(int)arg2;
- (int)numberOfItemsInFRScrollView:(id)arg1;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (id)reuseIdentifier;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


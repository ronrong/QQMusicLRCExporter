//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComRootCell.h"

#import "ImageManagerDelegate.h"

@class BEActivityView, NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface ComRootMyMusicCell : ComRootCell <ImageManagerDelegate>
{
    UILabel *centerMainTitleLabel;
    UILabel *rightLabel;
    UILabel *_boldFontLabel;
    UIImageView *imageViewHeart;
    BEActivityView *activetyView;
    UIImageView *_imageViewAlbum;
    NSString *_imageFileName;
    UIImageView *_piaoIcon;
    UIImageView *_buluoIcon;
}

@property(retain, nonatomic) UIImageView *buluoIcon; // @synthesize buluoIcon=_buluoIcon;
@property(retain, nonatomic) UIImageView *piaoIcon; // @synthesize piaoIcon=_piaoIcon;
@property(retain, nonatomic) NSString *imageFileName; // @synthesize imageFileName=_imageFileName;
@property(retain, nonatomic) UIImageView *imageViewAlbum; // @synthesize imageViewAlbum=_imageViewAlbum;
@property(retain, nonatomic) UILabel *boldFontLabel; // @synthesize boldFontLabel=_boldFontLabel;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel;
@property(retain, nonatomic) UILabel *centerMainTitleLabel; // @synthesize centerMainTitleLabel;
@property(retain, nonatomic) BEActivityView *activetyView; // @synthesize activetyView;
@property(retain, nonatomic) UIImageView *imageViewHeart; // @synthesize imageViewHeart;
- (void).cxx_destruct;
- (id)createRedMask;
- (void)layoutIcoImageSecTitle;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)setIsShowBuluoIcon:(BOOL)arg1;
- (void)setIsShowPiaoIcon:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

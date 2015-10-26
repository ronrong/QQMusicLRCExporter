//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class FolderInfo, NSString, QMLabel, UIImageView, UIView, URLImageView;

__attribute__((visibility("hidden")))
@interface MyMusicRootLocalMusicFolderButton : UIControl
{
    URLImageView *_imageView;
    QMLabel *_folderName;
    UIView *_numberContainer;
    UIImageView *_downloadStatus;
    QMLabel *_numberLabel;
    FolderInfo *_folderInfo;
    UIView *_placeholderView;
    UIImageView *_placeholderImageView;
    NSString *_customAccString;
}

+ (id)placeholderAddNewFolder;
@property(retain, nonatomic) NSString *customAccString; // @synthesize customAccString=_customAccString;
@property(retain) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain) FolderInfo *folderInfo; // @synthesize folderInfo=_folderInfo;
@property(retain) QMLabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain) UIImageView *downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(retain) UIView *numberContainer; // @synthesize numberContainer=_numberContainer;
@property(retain) QMLabel *folderName; // @synthesize folderName=_folderName;
@property(retain) URLImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)freshSkinSetting;
- (id)downloadStatusImage:(id)arg1;
- (id)currentFolder;
- (id)formatNumber:(id)arg1;
- (void)updateSubTitle:(id)arg1;
- (void)updateFolder:(id)arg1;
- (void)addConstraintsToSubViews;
- (void)layoutSubviews;
- (id)init;

@end


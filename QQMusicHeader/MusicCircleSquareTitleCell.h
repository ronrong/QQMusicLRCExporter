//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMusicCell.h"

@class MusicCircleSquareTitleData, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface MusicCircleSquareTitleCell : QQMusicCell
{
    MusicCircleSquareTitleData *_cellData;
    UIView *_colorView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) MusicCircleSquareTitleData *cellData; // @synthesize cellData=_cellData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateUI;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end


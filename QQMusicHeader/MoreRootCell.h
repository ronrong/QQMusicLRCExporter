//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMusicCell.h"

@class UIImageView, UILabel, UISwitch;

__attribute__((visibility("hidden")))
@interface MoreRootCell : QQMusicCell
{
    UILabel *_mainTitle;
    UILabel *_secondTitle;
    UILabel *_centerTitle;
    UIImageView *_selectedView;
    UIImageView *_arrowImageView;
    UIImageView *_greenView;
    UILabel *_rightLabel;
    UISwitch *_rightSwitch;
    UIImageView *_redPoint;
    UIImageView *_indicateImageView;
    UIImageView *_themeColorImageView;
}

@property(retain, nonatomic) UIImageView *themeColorImageView; // @synthesize themeColorImageView=_themeColorImageView;
@property(retain, nonatomic) UIImageView *indicateImageView; // @synthesize indicateImageView=_indicateImageView;
@property(retain, nonatomic) UIImageView *redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) UISwitch *rightSwitch; // @synthesize rightSwitch=_rightSwitch;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UIImageView *greenView; // @synthesize greenView=_greenView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UILabel *centerTitle; // @synthesize centerTitle=_centerTitle;
@property(retain, nonatomic) UILabel *secondTitle; // @synthesize secondTitle=_secondTitle;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
- (void).cxx_destruct;
- (void)onNotifySkinSettingChange:(id)arg1;
- (int)qmCellType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

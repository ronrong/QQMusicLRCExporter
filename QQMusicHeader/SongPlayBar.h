//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SongPlayBar : UIView
{
    UILabel *_label;
    UIImageView *_backgroundImg;
    UIImageView *_playImg;
}

@property(retain, nonatomic) UIImageView *playImg; // @synthesize playImg=_playImg;
@property(retain, nonatomic) UIImageView *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)updateStyle;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)adjustControlsPos;
- (void)addAllControls;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface ColorStyleSlider : UIView
{
    int _value;
    UIImage *bgImage;
    UIImage *thumbImage;
    id <ColorStyleSliderDelegate> delagate;
    int maxValue;
    int minValue;
}

@property(nonatomic) int minValue; // @synthesize minValue;
@property(nonatomic) int maxValue; // @synthesize maxValue;
@property(nonatomic) __weak id <ColorStyleSliderDelegate> delagate; // @synthesize delagate;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage;
- (void).cxx_destruct;
@property(nonatomic) int value; // @synthesize value=_value;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)handleTouchEvent:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBgImage:(id)arg1 andThumbImage:(id)arg2;
- (void)setRange:(int)arg1 maxValue:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andDelegate:(id)arg2;

@end


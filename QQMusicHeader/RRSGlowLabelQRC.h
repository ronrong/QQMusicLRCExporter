//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RRSGlowLabelAdvanced.h"

@class RRSGlowLabelMask;

__attribute__((visibility("hidden")))
@interface RRSGlowLabelQRC : RRSGlowLabelAdvanced
{
    int wordNo;
    float wordPercent;
    RRSGlowLabelMask *mask;
    BOOL _isColorChange;
}

@property(nonatomic) BOOL isColorChange; // @synthesize isColorChange=_isColorChange;
- (void).cxx_destruct;
- (void)cleanHightLight;
- (id)calcMaskArray_V2:(int)arg1 percent:(float)arg2;
- (id)calcMaskInCurrentLine:(int)arg1 percent:(float)arg2 lineIndex:(int)arg3;
- (id)rectsInWord:(id)arg1 maskWidth:(float)arg2;
- (float)totalWidthInWord:(id)arg1;
- (void)updateLabelWithColorWordNum:(int)arg1 percent:(float)arg2;
- (void)setMaskFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setText:(id)arg1;
- (void)setWordList:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

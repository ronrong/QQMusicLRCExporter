//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ImageManagerDelegate.h"

@class MusicGene, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface GeneRoundButton : UIView <ImageManagerDelegate>
{
    BOOL _showGeneSign;
    BOOL _animating;
    MusicGene *_gene;
    int _style;
    int _index;
    float _animatingRadiusForMiniStatus;
    float _currentAngleForMiniStatus;
    float _animatingRadiusForBigStatus;
    float _currentAngleForBigStatus;
    SEL _touchDownCallbackAction;
    SEL _touchUpCallbackAction;
    UIImageView *_bgBorderView;
    UIImageView *_defaultImageView;
    UIImageView *_imageView;
    UIView *_containerView;
    id _callbackTarget;
    SEL _callbackAction;
    float _angle;
    UIImageView *_picMaskView;
    UIImageView *_textImageView;
    struct CGPoint _animatingCenterForMiniStatus;
    struct CGPoint _animatingCenterForBigStatus;
    struct CGSize _animatingOvalRectForBigStatus;
    struct CGRect _targetFrame;
    struct CGRect _thumbFrame;
}

@property(retain, nonatomic) UIImageView *textImageView; // @synthesize textImageView=_textImageView;
@property(retain, nonatomic) UIImageView *picMaskView; // @synthesize picMaskView=_picMaskView;
@property(nonatomic) float angle; // @synthesize angle=_angle;
@property(nonatomic) SEL callbackAction; // @synthesize callbackAction=_callbackAction;
@property(nonatomic) __weak id callbackTarget; // @synthesize callbackTarget=_callbackTarget;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UIImageView *bgBorderView; // @synthesize bgBorderView=_bgBorderView;
@property(nonatomic) SEL touchUpCallbackAction; // @synthesize touchUpCallbackAction=_touchUpCallbackAction;
@property(nonatomic) SEL touchDownCallbackAction; // @synthesize touchDownCallbackAction=_touchDownCallbackAction;
@property(nonatomic) float currentAngleForBigStatus; // @synthesize currentAngleForBigStatus=_currentAngleForBigStatus;
@property(nonatomic) struct CGSize animatingOvalRectForBigStatus; // @synthesize animatingOvalRectForBigStatus=_animatingOvalRectForBigStatus;
@property(nonatomic) float animatingRadiusForBigStatus; // @synthesize animatingRadiusForBigStatus=_animatingRadiusForBigStatus;
@property(nonatomic) struct CGPoint animatingCenterForBigStatus; // @synthesize animatingCenterForBigStatus=_animatingCenterForBigStatus;
@property(nonatomic) float currentAngleForMiniStatus; // @synthesize currentAngleForMiniStatus=_currentAngleForMiniStatus;
@property(nonatomic) float animatingRadiusForMiniStatus; // @synthesize animatingRadiusForMiniStatus=_animatingRadiusForMiniStatus;
@property(nonatomic) struct CGPoint animatingCenterForMiniStatus; // @synthesize animatingCenterForMiniStatus=_animatingCenterForMiniStatus;
@property(nonatomic) struct CGRect thumbFrame; // @synthesize thumbFrame=_thumbFrame;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) int index; // @synthesize index=_index;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
@property(readonly, nonatomic) MusicGene *gene; // @synthesize gene=_gene;
- (void).cxx_destruct;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)setTextDisplayStyle:(int)arg1 animatedDuration:(float)arg2;
- (struct CGPoint)nextClockwisePositionForBigStatus;
- (void)animateBigCircleClockwise;
- (struct CGPoint)nextClockwisePositionForMiniStatus;
- (void)animateMiniCircleClockwise;
- (void)stopAnimating;
- (void)beginBigStatusAnimating;
- (void)beginMiniStatusAnimating;
- (struct CGRect)setFrameForPercent:(float)arg1;
- (void)loadImage;
- (void)didTouchUp:(id)arg1;
- (void)didTouchDown:(id)arg1;
- (void)hideTextView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCallbackTarget:(id)arg1 action:(SEL)arg2;
- (id)roundImageWithColor:(id)arg1 alpha:(float)arg2 inSize:(struct CGSize)arg3;
- (id)roundImage:(id)arg1;
- (BOOL)isHanzi:(id)arg1;
- (id)textImageWithSize;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 andGene:(id)arg3 borderColor:(id)arg4 borderAlpha:(float)arg5 picMask:(BOOL)arg6 showGeneSign:(BOOL)arg7;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 andGene:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


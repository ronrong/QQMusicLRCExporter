//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface BEActivityView : UIView
{
    UIImageView *imageView;
    float time;
}

@property(nonatomic) float time; // @synthesize time;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
- (void).cxx_destruct;
- (void)onNotifyColorStyleChanged:(id)arg1;
- (void)setNewImageView:(id)arg1;
- (void)dealloc;
- (void)setHidden:(BOOL)arg1;
- (void)stopAnimate;
- (void)startAnimate;
- (void)doInitTask;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end


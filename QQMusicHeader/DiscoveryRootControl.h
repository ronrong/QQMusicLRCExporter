//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class DiscoverComponent, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface DiscoveryRootControl : UIControl
{
    DiscoverComponent *_component;
    UIImageView *_imageView;
    UILabel *_label;
}

@property(retain) UILabel *label; // @synthesize label=_label;
@property(retain) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain) DiscoverComponent *component; // @synthesize component=_component;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver;
- (void)addObserver;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithImage:(id)arg1 title:(id)arg2;

@end

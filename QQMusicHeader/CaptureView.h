//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface CaptureView : UIView
{
    UIImage *_imageCapture;
}

@property(retain, nonatomic) UIImage *imageCapture; // @synthesize imageCapture=_imageCapture;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)settingImageFromView:(id)arg1;
- (id)initWithView:(id)arg1;

@end

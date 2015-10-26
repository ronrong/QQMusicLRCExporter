//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLSliderView.h"

#import "AVAudioSessionDelegate.h"

@class NSString;

@interface QLVolumeSliderView : QLSliderView <AVAudioSessionDelegate>
{
    id <QLVolumeSliderViewDelegate> _delegate;
}

@property(nonatomic) id <QLVolumeSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAppDidBecomeActive:(id)arg1;
- (float)getHardVolume;
- (void)removeMutedListener;
- (BOOL)addMutedListener;
- (void)removeHardVolumeListener;
- (BOOL)addHardKeyVolumeListener;
- (void)didSliderChanged;
- (void)resetVolumeSlider;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

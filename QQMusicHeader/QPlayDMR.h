//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QPlayDevice.h"

__attribute__((visibility("hidden")))
@interface QPlayDMR : QPlayDevice
{
    BOOL _muted;
    BOOL _canChangeVolume;
    float _volume;
}

@property(readonly, nonatomic) BOOL canChangeVolume; // @synthesize canChangeVolume=_canChangeVolume;
@property(readonly, nonatomic) BOOL muted; // @synthesize muted=_muted;
@property(nonatomic) float volume; // @synthesize volume=_volume;

@end


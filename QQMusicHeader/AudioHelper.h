//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AudioHelper : NSObject
{
}

+ (void)switchToSpeakerMode;
+ (BOOL)isRecordEnable;
+ (BOOL)usbConnected;
+ (BOOL)isConnectToHeadphone;
+ (BOOL)isDeviceRecording;
+ (void)swithToPlayBack:(BOOL)arg1;
+ (void)swithToPlayAndRecord;
+ (BOOL)isOtherAudiolsPlaying;
+ (BOOL)isHaveRecordDevice;
+ (BOOL)isAudioFile:(id)arg1;

@end

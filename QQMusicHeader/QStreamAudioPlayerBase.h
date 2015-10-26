//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AudioPlayerBase.h"

#import "AudioStreamBaseDelegate.h"
#import "AudioTransBaseDelegate.h"

@class AudioStreamBase, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface QStreamAudioPlayerBase : AudioPlayerBase <AudioStreamBaseDelegate, AudioTransBaseDelegate>
{
    AudioStreamBase *_audioStream;
    NSMutableArray *_audioTrans;
}

@property(readonly) AudioStreamBase *audioStream; // @synthesize audioStream=_audioStream;
- (void).cxx_destruct;
- (void)handleAudioTrans:(id)arg1 PacketDesctiption:(id)arg2 PacketData:(id)arg3;
- (void)handleAudioTrans:(id)arg1 Description:(id)arg2;
- (void)handleAudioStreamPacketDesctiption:(id)arg1 PacketData:(id)arg2;
- (void)handleAudioStreamDesc:(id)arg1 withInputDesc:(id)arg2;
- (double)totalTimeOfAudioFile;
- (unsigned int)lengthOfAudioFile;
- (void)clearAudioTrans;
- (void)delAudioTrans:(id)arg1;
- (void)addAudioTrans:(id)arg1;
- (void)delAudioStream;
- (void)addAudioStream:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QAudioStreamPacketDescription : NSObject
{
    struct AudioStreamPacketDescription data;
    unsigned long _mVariableFramesInPacket;
    unsigned long _mDataByteSize;
    int _num;
    long long _mStartOffset;
}

@property(readonly) int num; // @synthesize num=_num;
@property(readonly) unsigned long mDataByteSize; // @synthesize mDataByteSize=_mDataByteSize;
@property(readonly) unsigned long mVariableFramesInPacket; // @synthesize mVariableFramesInPacket=_mVariableFramesInPacket;
@property(readonly) long long mStartOffset; // @synthesize mStartOffset=_mStartOffset;
- (struct AudioStreamPacketDescription *)data;
- (id)initWithData:(struct AudioStreamPacketDescription *)arg1;

@end


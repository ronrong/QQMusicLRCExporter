//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QQWordsQRC : NSObject
{
    NSString *_text;
    long _time;
    long _duration;
}

@property(nonatomic) long duration; // @synthesize duration=_duration;
@property(nonatomic) long time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isTimeValided;
- (int)compareTime:(id)arg1;
- (id)initWithTextAndTime:(id)arg1 time:(long)arg2 duration:(long)arg3;

@end


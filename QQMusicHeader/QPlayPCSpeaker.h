//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QPlayStandardSpeaker.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QPlayPCSpeaker : QPlayStandardSpeaker
{
    NSString *platformOS;
    NSString *miniVersion;
    NSString *appVersion;
}

@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion;
@property(retain, nonatomic) NSString *miniVersion; // @synthesize miniVersion;
@property(retain, nonatomic) NSString *platformOS; // @synthesize platformOS;
- (void).cxx_destruct;
- (void)notifyControlPointInfo;
- (void)subscribe;

@end


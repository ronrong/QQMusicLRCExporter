//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MMA_Switch : NSObject
{
    unsigned char _isTrackLocation;
    int _offlineCacheExpiration;
    NSMutableDictionary *_encrypt;
}

@property(retain, nonatomic) NSMutableDictionary *encrypt; // @synthesize encrypt=_encrypt;
@property(nonatomic) int offlineCacheExpiration; // @synthesize offlineCacheExpiration=_offlineCacheExpiration;
@property(nonatomic) unsigned char isTrackLocation; // @synthesize isTrackLocation=_isTrackLocation;
- (void).cxx_destruct;

@end


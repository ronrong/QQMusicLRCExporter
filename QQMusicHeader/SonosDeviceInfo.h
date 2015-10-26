//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SonosDeviceInfo : NSObject
{
    int _bootSequenceNumber;
    NSString *_deviceID;
    NSString *_householdID;
}

@property(readonly, nonatomic) NSString *householdID; // @synthesize householdID=_householdID;
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) int bootSequenceNumber; // @synthesize bootSequenceNumber=_bootSequenceNumber;
- (void).cxx_destruct;
- (BOOL)isEqualContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 householdID:(id)arg2 bootSeq:(int)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FlowCountItem : NSObject
{
    NSString *name;
    NSString *sourceValue;
    long long allFlowCount;
    long long WIFIFlowCount;
    long long otherFlowCount;
}

@property long long otherFlowCount; // @synthesize otherFlowCount;
@property long long WIFIFlowCount; // @synthesize WIFIFlowCount;
@property long long allFlowCount; // @synthesize allFlowCount;
@property(retain, nonatomic) NSString *sourceValue; // @synthesize sourceValue;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)copyFlowCount;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RqdLocalObject.h"

@class NSDictionary, NSString;

@interface RqdMobileInfo : RqdLocalObject
{
    NSString *symbol;
    NSString *other;
    NSString *brand;
    NSString *model;
    NSString *guid;
    NSString *cpuType;
    NSString *cpuName;
    NSString *osVer;
    long long memSize;
    long long diskSzie;
    NSDictionary *valueMap;
}

@property(retain, nonatomic) NSDictionary *valueMap; // @synthesize valueMap;
@property(retain, nonatomic) NSString *cpuName; // @synthesize cpuName;
@property(retain, nonatomic) NSString *brand; // @synthesize brand;
@property(retain, nonatomic) NSString *guid; // @synthesize guid;
@property(retain, nonatomic) NSString *osVer; // @synthesize osVer;
@property(nonatomic) long long memSize; // @synthesize memSize;
@property(nonatomic) long long diskSzie; // @synthesize diskSzie;
@property(retain, nonatomic) NSString *model; // @synthesize model;
@property(retain, nonatomic) NSString *cpuType; // @synthesize cpuType;
@property(retain, nonatomic) NSString *other; // @synthesize other;
@property(retain, nonatomic) NSString *symbol; // @synthesize symbol;
- (void)dealloc;
- (void)createWUPModel:(struct MobileDetail *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface IDVehicleInfo : NSObject
{
    BOOL _A4AXLSupported;
    BOOL _speedLockSupported;
    BOOL _naviSupported;
    BOOL _PIASupported;
    BOOL _TTSSupported;
    BOOL _STTSupported;
    unsigned int _brand;
    unsigned int _hmiVersion;
    unsigned int _hmiType;
    unsigned int _country;
    NSString *_vehicleType;
    NSDictionary *_systemInfoDict;
}

+ (BOOL)boolWithString:(id)arg1;
+ (unsigned int)vehicleHmiTypeWithString:(id)arg1;
+ (unsigned int)vehicleCountryWithString:(id)arg1;
+ (unsigned int)vehicleHmiVersionWithString:(id)arg1;
+ (unsigned int)vehicleBrandWithString:(id)arg1;
@property(readonly) NSDictionary *systemInfoDict; // @synthesize systemInfoDict=_systemInfoDict;
@property(getter=isSTTSupported) BOOL STTSupported; // @synthesize STTSupported=_STTSupported;
@property(getter=isTTSSupported) BOOL TTSSupported; // @synthesize TTSSupported=_TTSSupported;
@property(getter=isPIASupported) BOOL PIASupported; // @synthesize PIASupported=_PIASupported;
@property(getter=isNaviSupported) BOOL naviSupported; // @synthesize naviSupported=_naviSupported;
@property(getter=isSpeedLockSupported) BOOL speedLockSupported; // @synthesize speedLockSupported=_speedLockSupported;
@property(getter=isA4AXLSupported) BOOL A4AXLSupported; // @synthesize A4AXLSupported=_A4AXLSupported;
@property(retain) NSString *vehicleType; // @synthesize vehicleType=_vehicleType;
@property unsigned int country; // @synthesize country=_country;
@property unsigned int hmiType; // @synthesize hmiType=_hmiType;
@property unsigned int hmiVersion; // @synthesize hmiVersion=_hmiVersion;
@property unsigned int brand; // @synthesize brand=_brand;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end


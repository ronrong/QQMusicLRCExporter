//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVKUtils : NSObject
{
    NSString *_deviceToken;
}

+ (int)mediaFormatTypeWithString:(id)arg1;
+ (id)mediaFormatStringWithType:(int)arg1;
+ (BOOL)isVip;
+ (id)obtainCookie;
+ (id)obtainGTK;
+ (id)obtainSKey;
+ (id)obtainQQ;
+ (id)parameterWithURL:(id)arg1 forKey:(id)arg2;
+ (int)typeFromResolution:(id)arg1;
+ (id)resolutionFromType:(int)arg1;
+ (id)videonamefromtype:(int)arg1;
+ (id)safeEncodeURLString:(id)arg1;
+ (int)getDateToDateDays:(id)arg1 withSaveDate:(id)arg2;
+ (id)SStringFromdate:(id)arg1;
+ (id)dateFromString:(id)arg1;
+ (id)userDefaultUUIDKey;
+ (id)getKeyChainServiceName;
+ (id)getKeyChainUserName;
+ (BOOL)isPushEnabled;
+ (BOOL)isRetinaDisplay;
+ (id)getSystemVersion;
+ (id)macAddress;
+ (int)getPlatformByReportType:(int)arg1;
+ (id)fullBundleDisplayName;
+ (id)getSDKVersion;
+ (id)bundleID;
+ (id)getAppBuildNumber;
+ (id)getAppBuildVersion;
+ (id)getAppVersion;
+ (id)bundleSeedID;
+ (id)getGUID;
+ (id)getAppBuildVersionFull;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
- (void)dealloc;

@end


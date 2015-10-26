//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTAWXOEnv, MTAWXOUser;

@interface MTAWXOHelper : NSObject
{
    MTAWXOEnv *env;
    MTAWXOUser *user;
    BOOL _MTAWXOEnableFlag;
}

+ (id)getInstance;
+ (BOOL)isWiFiAvailable;
+ (id)getMacAddress;
+ (int)GUnzip:(id)arg1 Out:(id *)arg2;
+ (int)GZip:(id)arg1 Out:(id *)arg2;
+ (void)ChiperRC4:(id)arg1;
@property BOOL MTAWXOEnableFlag; // @synthesize MTAWXOEnableFlag=_MTAWXOEnableFlag;
- (id)getJson:(id)arg1;
- (void)saveMid:(id)arg1;
- (id)getMid;
- (BOOL)checkMTAWXOEnable;
- (id)fetchSSIDInfo;
- (void)dealloc;
- (id)init;
- (id)getUser;
- (id)getEnv;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTelephonyNetworkInfo, Reachability;

__attribute__((visibility("hidden")))
@interface NetStatusManager : NSObject
{
    Reachability *hostReach;
    Reachability *internetReach;
    Reachability *wifiReach;
    CTTelephonyNetworkInfo *netInfo;
    id <NetStatusManagerProtocol> protocol;
    int reFreshReachbilityCount;
}

+ (BOOL)IsNetworkUseable;
+ (id)sharedNetStatusManager;
@property(nonatomic) __weak id <NetStatusManagerProtocol> protocol; // @synthesize protocol;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEnable4G;
- (BOOL)isEnable3G;
- (BOOL)isEnable2G;
- (BOOL)IsEnableInternetWithCellularNetwork4G;
- (BOOL)IsEnableInternetWithCellularNetwork3G;
- (BOOL)IsEnableInternetWithCellularNetwork2G;
- (BOOL)IsEnableInternetWithCellularNetwork;
- (BOOL)IsEnableInternetWithLocalWifi;
- (BOOL)IsEnableInternet;
- (void)checkAndReport;
- (void)refreshReachableStat;
- (void)delayRefreshReachableStat;
- (void)reachabilityChanged:(id)arg1;
- (void)startManager;
- (id)init;

@end

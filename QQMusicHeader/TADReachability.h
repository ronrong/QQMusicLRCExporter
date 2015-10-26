//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TADReachability : NSObject
{
    NSString *key_;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)makeAddressKey:(unsigned int)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
@property(copy) NSString *key; // @synthesize key=key_;
- (unsigned int)reachabilityFlags;
- (BOOL)isReachableViaWiFi;
- (BOOL)isReachableViaWWAN;
- (BOOL)isInterventionRequired;
- (BOOL)isConnectionOnDemand;
- (BOOL)connectionRequired;
- (BOOL)isConnectionRequired;
- (BOOL)isReachable;
- (unsigned int)currentReachabilityStatus;
- (unsigned int)networkStatusForFlags:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)stopNotifier;
- (BOOL)startNotifier;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;
- (void)dealloc;

@end


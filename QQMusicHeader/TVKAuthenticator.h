//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVKAuthenticator : NSObject
{
    int _authStatus;
    NSString *_authPlatform;
    NSString *_authSdtFrom;
    NSString *_authChannelID;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *authChannelID; // @synthesize authChannelID=_authChannelID;
@property(readonly, nonatomic) NSString *authSdtFrom; // @synthesize authSdtFrom=_authSdtFrom;
@property(readonly, nonatomic) NSString *authPlatform; // @synthesize authPlatform=_authPlatform;
@property(readonly, nonatomic) int authStatus; // @synthesize authStatus=_authStatus;
- (void).cxx_destruct;
- (id)encrypt:(id)arg1;
- (id)decrypt:(id)arg1;
- (BOOL)updateAuthStatusWithAppKey:(id)arg1;
- (id)init;

@end


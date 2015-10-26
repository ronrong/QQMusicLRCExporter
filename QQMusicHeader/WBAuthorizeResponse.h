//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBBaseResponse.h"

@class NSDate, NSString;

@interface WBAuthorizeResponse : WBBaseResponse
{
    NSString *userID;
    NSString *accessToken;
    NSDate *expirationDate;
}

@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken;
@property(retain, nonatomic) NSString *userID; // @synthesize userID;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validate;
- (BOOL)canBeReceived;
- (BOOL)canBeSent;
- (void)dealloc;

@end


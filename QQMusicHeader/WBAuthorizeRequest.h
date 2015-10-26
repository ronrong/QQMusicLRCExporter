//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBBaseRequest.h"

@class NSString;

@interface WBAuthorizeRequest : WBBaseRequest
{
    NSString *redirectURI;
    NSString *scope;
}

+ (Class)associateResponseClass;
@property(retain, nonatomic) NSString *scope; // @synthesize scope;
@property(retain, nonatomic) NSString *redirectURI; // @synthesize redirectURI;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validate;
- (BOOL)canBeReceived;
- (BOOL)canBeSent;
- (void)dealloc;

@end

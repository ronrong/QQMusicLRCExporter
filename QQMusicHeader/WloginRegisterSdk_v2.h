//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WloginTranCallbackProtocol.h"

@interface WloginRegisterSdk_v2 : NSObject <WloginTranCallbackProtocol>
{
}

- (int)registerGetSmsVerifyLoginAccount:(unsigned int)arg1;
- (id)phoneNoForReg;
- (void)tranFailed:(int)arg1 withMsg:(id)arg2;
- (void)tranSuccessWithData:(id)arg1;
- (BOOL)registerEmailHandleOpenURL:(id)arg1;
- (int)registerGetAccount:(id)arg1;
- (int)registerSubmitSmsCode:(id)arg1;
- (int)registerResendSms;
- (int)registerCheckUpSmsState:(id)arg1;
- (int)registerSubmitPhoneNo:(id)arg1 andAppName:(id)arg2 andAppVer:(id)arg3;
- (int)registerCheckAccount:(id)arg1 andType:(int)arg2;
- (BOOL)checkEmailFormat:(id)arg1;
- (void)resetRegProcess;
- (void)setUserNick:(id)arg1;
- (void)setAppUrl:(id)arg1;
- (void)setPicType:(int)arg1;
- (void)setCountry:(int)arg1 andLanguage:(int)arg2;
- (void)dealloc;
- (id)initWithRegWtloginSdk:(id)arg1 andCountry:(int)arg2 andLang:(int)arg3 andAppid:(unsigned int)arg4 andDelegate:(id)arg5;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableArray, NSString, NSURL, WloginErrInfo, WloginMbPhoneInfo, WloginSdk_v2, WloginUserInfo;

@protocol WloginCallbackProtocol_v2 <NSObject>
- (void)SmsCodeSuccessBySmsVerifyLogin_V2:(WloginSdk_v2 *)arg1 tag:(long)arg2;
- (void)SmsVerifyLoginFailed_v2:(WloginSdk_v2 *)arg1 andRst:(int)arg2 withErrInfo:(WloginErrInfo *)arg3 tag:(long)arg4;
- (void)inputSmsCodeErrorBySmsVerifyLogin_V2:(WloginSdk_v2 *)arg1 andErrInfo:(WloginErrInfo *)arg2 tag:(long)arg3;
- (void)inputSmsCodeBySmsVerifyLogin_V2:(WloginSdk_v2 *)arg1 andMsgCnt:(unsigned short)arg2 andTimeout:(unsigned short)arg3 andMsg:(NSString *)arg4 tag:(long)arg5;
- (void)quickLoginEnd_v2:(WloginSdk_v2 *)arg1 andUrl:(NSURL *)arg2 tag:(long)arg3;
- (void)loginFailed_v2:(WloginSdk_v2 *)arg1 andRst:(int)arg2 withErrInfo:(WloginErrInfo *)arg3 tag:(long)arg4;
- (void)loginSuccessSig_v2:(WloginSdk_v2 *)arg1 andSig:(NSMutableArray *)arg2 andBaseInfo:(WloginUserInfo *)arg3 tag:(long)arg4;
- (void)inputSmsCodeError_v2:(WloginSdk_v2 *)arg1 andErrInfo:(WloginErrInfo *)arg2 tag:(long)arg3;
- (void)inputSmsCode_v2:(WloginSdk_v2 *)arg1 andMbPhoneInfo:(WloginMbPhoneInfo *)arg2 tag:(long)arg3;
- (void)showPicture_v2:(WloginSdk_v2 *)arg1 andPicData:(NSData *)arg2 andWording:(NSDictionary *)arg3 tag:(long)arg4;
- (void)loginFailed_v2:(WloginSdk_v2 *)arg1 andRst:(int)arg2 withErrInfo:(WloginErrInfo *)arg3;
- (void)loginSuccessSig_v2:(WloginSdk_v2 *)arg1 andSig:(NSMutableArray *)arg2 andBaseInfo:(WloginUserInfo *)arg3;
- (void)showPicture_v2:(WloginSdk_v2 *)arg1 andPicData:(NSData *)arg2 andWording:(NSDictionary *)arg3;
- (void)showPicture_v2:(WloginSdk_v2 *)arg1 andPicData:(NSData *)arg2;
@end

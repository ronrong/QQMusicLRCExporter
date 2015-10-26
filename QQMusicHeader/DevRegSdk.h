//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WloginTranCallbackProtocol.h"

@class DevRegCmd, WloginTranSdk;

@interface DevRegSdk : NSObject <WloginTranCallbackProtocol>
{
    id devRegDelegate;
    unsigned int dwPushAppid;
    unsigned int dwPushSubAppid;
    unsigned long long ddwAccountUin;
    WloginTranSdk *devRegTransportSdk;
    int iDevRegState;
    DevRegCmd *devRegCmd;
}

- (void)tranFailed:(int)arg1 withMsg:(id)arg2;
- (void)tranSuccessWithData:(id)arg1;
- (int)iosDevReport:(int)arg1 withMsgCount:(unsigned short)arg2;
- (int)iosDevOffLine:(int)arg1;
- (int)iosDevReg:(id)arg1 withClearFlag:(int)arg2;
- (void)dealloc;
- (id)initWithDevRegSdk:(id)arg1 andAppid:(unsigned int)arg2 andSubAppid:(unsigned int)arg3 andUin:(unsigned long long)arg4 andDelegate:(id)arg5;
- (id)initWithDevRegSdk:(id)arg1 andAppid:(unsigned int)arg2 andUin:(unsigned long long)arg3 andDelegate:(id)arg4;

@end


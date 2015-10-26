//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MTAWXOConfig : NSObject
{
    BOOL _debugEnable;
    BOOL _smartReporting;
    BOOL _autoExceptionCaught;
    BOOL _accountType;
    BOOL _statEnable;
    unsigned int _sessionTimeoutSecs;
    int _reportStrategy;
    NSString *_appkey;
    NSString *_channel;
    unsigned int _maxStoreEventCount;
    unsigned int _maxLoadEventCount;
    unsigned int _minBatchReportCount;
    unsigned int _maxSendRetryCount;
    unsigned int _sendPeriodMinutes;
    unsigned int _maxParallelTimingEvents;
    unsigned int _maxReportEventLength;
    NSString *_qq;
    NSString *_account;
    NSString *_accountExt;
    NSString *_customerUserID;
    NSString *_customerAppVersion;
    NSString *_ifa;
    NSString *_pushDeviceToken;
    NSString *_statReportURL;
    int _maxSessionStatReportCount;
    NSString *_op;
    NSString *_cn;
    NSString *_sp;
}

+ (id)getInstance;
@property(retain, nonatomic) NSString *sp; // @synthesize sp=_sp;
@property(retain, nonatomic) NSString *cn; // @synthesize cn=_cn;
@property(retain, nonatomic) NSString *op; // @synthesize op=_op;
@property int maxSessionStatReportCount; // @synthesize maxSessionStatReportCount=_maxSessionStatReportCount;
@property(retain, nonatomic) NSString *statReportURL; // @synthesize statReportURL=_statReportURL;
@property(retain, nonatomic) NSString *pushDeviceToken; // @synthesize pushDeviceToken=_pushDeviceToken;
@property(retain, nonatomic) NSString *ifa; // @synthesize ifa=_ifa;
@property(retain, nonatomic) NSString *customerAppVersion; // @synthesize customerAppVersion=_customerAppVersion;
@property(retain, nonatomic) NSString *customerUserID; // @synthesize customerUserID=_customerUserID;
@property BOOL statEnable; // @synthesize statEnable=_statEnable;
@property(retain, nonatomic) NSString *accountExt; // @synthesize accountExt=_accountExt;
@property BOOL accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *qq; // @synthesize qq=_qq;
@property unsigned int maxReportEventLength; // @synthesize maxReportEventLength=_maxReportEventLength;
@property BOOL autoExceptionCaught; // @synthesize autoExceptionCaught=_autoExceptionCaught;
@property BOOL smartReporting; // @synthesize smartReporting=_smartReporting;
@property unsigned int maxParallelTimingEvents; // @synthesize maxParallelTimingEvents=_maxParallelTimingEvents;
@property unsigned int sendPeriodMinutes; // @synthesize sendPeriodMinutes=_sendPeriodMinutes;
@property unsigned int maxSendRetryCount; // @synthesize maxSendRetryCount=_maxSendRetryCount;
@property unsigned int minBatchReportCount; // @synthesize minBatchReportCount=_minBatchReportCount;
@property unsigned int maxLoadEventCount; // @synthesize maxLoadEventCount=_maxLoadEventCount;
@property unsigned int maxStoreEventCount; // @synthesize maxStoreEventCount=_maxStoreEventCount;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property int reportStrategy; // @synthesize reportStrategy=_reportStrategy;
@property unsigned int sessionTimeoutSecs; // @synthesize sessionTimeoutSecs=_sessionTimeoutSecs;
@property BOOL debugEnable; // @synthesize debugEnable=_debugEnable;
- (id)getCustomProperty:(id)arg1 default:(id)arg2;
- (id)init;

@end


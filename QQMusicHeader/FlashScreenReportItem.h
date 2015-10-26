//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "ProtocolHostDelegate.h"

@class FlashScreenClickInfo, FlashScreenExposureInfo, NSString;

__attribute__((visibility("hidden")))
@interface FlashScreenReportItem : NSObject <ProtocolHostDelegate, NSCoding>
{
    FlashScreenClickInfo *_clickInfo;
    FlashScreenExposureInfo *_exposureInfo;
    NSString *_clickUrl;
    NSString *_exposureUrl;
    int _splashId;
    int _optype;
    int _showFlag;
    int _clickFlag;
    int _showTime;
    int _jumpOver;
    int _preSplashType;
    int _curdayFlag;
    int _getSplashType;
    int _splashType;
}

+ (void)cleanCachedReportItems;
+ (id)loadFlashScreenReportItems;
+ (void)saveFlashScreenReportItems:(id)arg1;
@property(nonatomic) int splashType; // @synthesize splashType=_splashType;
@property(nonatomic) int getSplashType; // @synthesize getSplashType=_getSplashType;
@property(nonatomic) int curdayFlag; // @synthesize curdayFlag=_curdayFlag;
@property(nonatomic) int preSplashType; // @synthesize preSplashType=_preSplashType;
@property(nonatomic) int jumpOver; // @synthesize jumpOver=_jumpOver;
@property(nonatomic) int showTime; // @synthesize showTime=_showTime;
@property(nonatomic) int clickFlag; // @synthesize clickFlag=_clickFlag;
@property(nonatomic) int showFlag; // @synthesize showFlag=_showFlag;
@property(nonatomic) int optype; // @synthesize optype=_optype;
@property(nonatomic) int splashId; // @synthesize splashId=_splashId;
@property(retain, nonatomic) NSString *exposureUrl; // @synthesize exposureUrl=_exposureUrl;
@property(retain, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(retain, nonatomic) FlashScreenExposureInfo *exposureInfo; // @synthesize exposureInfo=_exposureInfo;
@property(retain, nonatomic) FlashScreenClickInfo *clickInfo; // @synthesize clickInfo=_clickInfo;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (void)reportClickInfo:(id)arg1;

@end


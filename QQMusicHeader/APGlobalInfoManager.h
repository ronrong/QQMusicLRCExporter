//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, RequestInfo;

@interface APGlobalInfoManager : NSObject
{
    int appRate;
    int saveValue;
    NSString *mall_url;
    NSString *result_url;
    BOOL isNightMode;
    int recordNumber;
    NSString *saveTime;
    NSString *currtime;
    NSString *version;
    NSString *openId;
    NSString *openKey;
    NSString *sessionID;
    NSString *sessionType;
    NSString *pfStr;
    NSString *pfKeyStr;
    NSString *appUnit;
    NSString *appName;
    BOOL isAppSecretKeyShouldUpdate;
    NSString *appUnipayVid;
    NSString *macAddress;
    NSString *appPlatform;
    NSString *sessionKey;
    NSString *sessionToken;
    NSString *zonid;
    int isFristFlag;
    NSArray *saveValueArray;
    int saveValueIndex;
    NSArray *payGameChannelArray;
    NSString *defaultChannel;
    NSArray *payCenterChannelArray;
    NSDictionary *specialRate;
    BOOL isNeedRelogin;
    BOOL isSelfDevelop;
    BOOL isSaveValueCanChange;
    BOOL isAppInfoInit;
    NSString *marketingTips;
    NSString *unit;
    NSString *offerID;
    int appOrientation;
    NSString *currentSetting;
    int gameCoinType;
    BOOL isHideStatusBar;
    BOOL isPrintLog;
    BOOL isAutoRotate;
    NSMutableArray *saveMoney;
    NSMutableArray *saveNumber;
    RequestInfo *info;
    NSString *local;
    NSString *productID;
    NSString *amt;
    int quantity;
    NSString *_OrderAndDistUrl;
    NSString *_CheckUrl;
    NSString *_GetBalanceUrl;
    NSString *_ChangeKeyUrl;
    NSString *_RequestMpUrl;
    NSString *_baseKey;
    NSString *_secKey;
    NSString *_payKey;
    NSString *_keyTime;
}

+ (id)singleton;
@property(retain, nonatomic) NSString *keyTime; // @synthesize keyTime=_keyTime;
@property(retain, nonatomic) NSString *payKey; // @synthesize payKey=_payKey;
@property(retain, nonatomic) NSString *secKey; // @synthesize secKey=_secKey;
@property(retain, nonatomic) NSString *baseKey; // @synthesize baseKey=_baseKey;
@property(readonly, nonatomic) NSString *RequestMpUrl; // @synthesize RequestMpUrl=_RequestMpUrl;
@property(readonly, nonatomic) NSString *ChangeKeyUrl; // @synthesize ChangeKeyUrl=_ChangeKeyUrl;
@property(readonly, nonatomic) NSString *GetBalanceUrl; // @synthesize GetBalanceUrl=_GetBalanceUrl;
@property(readonly, nonatomic) NSString *CheckUrl; // @synthesize CheckUrl=_CheckUrl;
@property(readonly, nonatomic) NSString *OrderAndDistUrl; // @synthesize OrderAndDistUrl=_OrderAndDistUrl;
@property(nonatomic) BOOL IsNightMode; // @synthesize IsNightMode=isNightMode;
@property(copy, nonatomic) NSString *Version; // @synthesize Version=version;
@property(nonatomic) int IsFristFlag; // @synthesize IsFristFlag=isFristFlag;
@property(copy, nonatomic) NSString *Result_url; // @synthesize Result_url=result_url;
@property(copy, nonatomic) NSString *Mall_url; // @synthesize Mall_url=mall_url;
@property(retain, nonatomic) RequestInfo *Info; // @synthesize Info=info;
@property(retain, nonatomic) NSMutableArray *SaveNumber; // @synthesize SaveNumber=saveNumber;
@property(copy, nonatomic) NSString *Unit; // @synthesize Unit=unit;
@property(retain, nonatomic) NSMutableArray *SaveMoney; // @synthesize SaveMoney=saveMoney;
@property(nonatomic) int quantity; // @synthesize quantity;
@property(retain, nonatomic) NSString *amt; // @synthesize amt;
@property(retain, nonatomic) NSString *productID; // @synthesize productID;
@property(copy, nonatomic) NSString *ZoneId; // @synthesize ZoneId=zonid;
@property(copy, nonatomic) NSString *SessionToken; // @synthesize SessionToken=sessionToken;
@property(nonatomic) BOOL IsSelfDevelop; // @synthesize IsSelfDevelop=isSelfDevelop;
@property(nonatomic) BOOL IsNeedRelogin; // @synthesize IsNeedRelogin=isNeedRelogin;
@property(nonatomic) BOOL IsAutoRatate; // @synthesize IsAutoRatate=isAutoRotate;
@property(nonatomic) BOOL IsPrintLog; // @synthesize IsPrintLog=isPrintLog;
@property(nonatomic) BOOL IsHideStatusBar; // @synthesize IsHideStatusBar=isHideStatusBar;
@property(nonatomic) BOOL IsAppInfoInit; // @synthesize IsAppInfoInit=isAppInfoInit;
@property(nonatomic) BOOL IsSaveValueCanChange; // @synthesize IsSaveValueCanChange=isSaveValueCanChange;
@property(nonatomic) int GameCoinType; // @synthesize GameCoinType=gameCoinType;
@property(nonatomic) int AppOrientation; // @synthesize AppOrientation=appOrientation;
@property(retain, nonatomic) NSString *local; // @synthesize local;
@property(copy, nonatomic) NSString *MarketingTips; // @synthesize MarketingTips=marketingTips;
@property(copy, nonatomic) NSDictionary *SpecialRate; // @synthesize SpecialRate=specialRate;
@property(copy, nonatomic) NSArray *PayCenterChannelArray; // @synthesize PayCenterChannelArray=payCenterChannelArray;
@property(copy, nonatomic) NSString *DefaultChannel; // @synthesize DefaultChannel=defaultChannel;
@property(copy, nonatomic) NSArray *PayGameChannelArray; // @synthesize PayGameChannelArray=payGameChannelArray;
@property(nonatomic) int SaveValueIndex; // @synthesize SaveValueIndex=saveValueIndex;
@property(copy, nonatomic) NSArray *SaveValueArray; // @synthesize SaveValueArray=saveValueArray;
@property(copy, nonatomic) NSString *SessionKey; // @synthesize SessionKey=sessionKey;
@property(copy, nonatomic) NSString *SessionID; // @synthesize SessionID=sessionID;
@property(copy, nonatomic) NSString *PfStr; // @synthesize PfStr=pfStr;
@property(copy, nonatomic) NSString *PfKeyStr; // @synthesize PfKeyStr=pfKeyStr;
@property(copy, nonatomic) NSString *AppPlatform; // @synthesize AppPlatform=appPlatform;
@property(copy, nonatomic) NSString *MacAddress; // @synthesize MacAddress=macAddress;
@property(nonatomic) int SaveValue; // @synthesize SaveValue=saveValue;
@property(nonatomic) int AppRate; // @synthesize AppRate=appRate;
@property(copy, nonatomic) NSString *AppUnipayVid; // @synthesize AppUnipayVid=appUnipayVid;
@property(nonatomic) BOOL IsAppSecretKeyShouldUpdate; // @synthesize IsAppSecretKeyShouldUpdate=isAppSecretKeyShouldUpdate;
@property(copy, nonatomic) NSString *AppName; // @synthesize AppName=appName;
@property(copy, nonatomic) NSString *AppUnit; // @synthesize AppUnit=appUnit;
@property(copy, nonatomic) NSString *SessionType; // @synthesize SessionType=sessionType;
@property(copy, nonatomic) NSString *OpenKey; // @synthesize OpenKey=openKey;
@property(copy, nonatomic) NSString *OpenId; // @synthesize OpenId=openId;
@property(copy, nonatomic) NSString *Currtime; // @synthesize Currtime=currtime;
@property(copy, nonatomic) NSString *SaveTime; // @synthesize SaveTime=saveTime;
@property(nonatomic) int RecordNumber; // @synthesize RecordNumber=recordNumber;
- (void)creatUrlByOfferid;
@property(copy, nonatomic) NSString *OfferID;
@property(copy, nonatomic) NSString *CurrentSetting;
- (void)dealloc;
- (id)init;

@end

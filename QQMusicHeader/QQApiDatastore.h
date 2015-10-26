//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QQApiDatastore : NSObject
{
    NSString *_scheme;
    NSString *_appId;
    NSString *_openId;
    NSString *_appName;
}

+ (id)instance;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (BOOL)isQQSupportApiGeneralPastboard;
- (void)clearApiLargeData;
- (id)getApiLargeDataByGeneralPastboard;
- (id)getApiLargeData;
- (int)setApiLargeData:(id)arg1;
- (void)clearApiMessage;
- (id)getApiMessage;
- (int)setApiMessage:(id)arg1;
- (id)getAdItemArray;
- (int)setAdItemArray:(id)arg1;
- (int)registerWithMetadata:(id)arg1;

@end


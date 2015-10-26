//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UpgradeInfo : NSObject <NSCoding>
{
    BOOL _grayVersion;
    int _upgradeType;
    NSString *_version;
    NSString *_buildVersion;
    NSString *_name;
    NSString *_decrip;
    NSString *_installURL;
}

+ (id)getUpgradeInfo;
+ (void)setUpgradeInfo:(id)arg1;
@property(retain, nonatomic) NSString *installURL; // @synthesize installURL=_installURL;
@property(retain, nonatomic) NSString *decrip; // @synthesize decrip=_decrip;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL grayVersion; // @synthesize grayVersion=_grayVersion;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) int upgradeType; // @synthesize upgradeType=_upgradeType;
- (void).cxx_destruct;
- (BOOL)_biggerThanCurrentVerssion;
- (BOOL)_isValidedUpgrade;
- (void)checkVersionInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decription;

@end


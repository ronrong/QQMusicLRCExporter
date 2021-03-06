//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CGIExpressData : NSObject <NSCopying>
{
    NSMutableArray *_backupLoginDomains;
    NSMutableArray *_backupLoginIps;
    int _reportRate;
    NSMutableDictionary *_dicDomains;
}

@property(retain) NSMutableDictionary *dicDomains; // @synthesize dicDomains=_dicDomains;
@property int reportRate; // @synthesize reportRate=_reportRate;
@property(retain) NSMutableArray *backupLoginIps; // @synthesize backupLoginIps=_backupLoginIps;
@property(retain) NSMutableArray *backupLoginDomains; // @synthesize backupLoginDomains=_backupLoginDomains;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


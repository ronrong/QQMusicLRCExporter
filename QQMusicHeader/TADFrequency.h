//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSString;

@interface TADFrequency : NSObject <NSCoding>
{
    NSDictionary *_orderDataMap;
    NSString *_date;
}

@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSDictionary *orderDataMap; // @synthesize orderDataMap=_orderDataMap;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


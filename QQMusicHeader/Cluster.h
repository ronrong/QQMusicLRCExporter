//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface Cluster : NSObject <NSCopying>
{
    int _sin;
    int _ein;
    int _sum;
}

@property(nonatomic) int sum; // @synthesize sum=_sum;
@property(nonatomic) int ein; // @synthesize ein=_ein;
@property(nonatomic) int sin; // @synthesize sin=_sin;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end


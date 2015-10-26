//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface MMA_Task : NSObject <NSCoding>
{
    BOOL _hasFailed;
    BOOL _hasLock;
    NSString *_url;
    int _failedCount;
    double _timePoint;
}

@property(nonatomic) BOOL hasLock; // @synthesize hasLock=_hasLock;
@property(nonatomic) BOOL hasFailed; // @synthesize hasFailed=_hasFailed;
@property(nonatomic) int failedCount; // @synthesize failedCount=_failedCount;
@property(nonatomic) double timePoint; // @synthesize timePoint=_timePoint;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

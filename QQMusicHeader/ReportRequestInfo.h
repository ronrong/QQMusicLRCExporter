//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RequestInfo.h"

@class NSString;

@interface ReportRequestInfo : RequestInfo
{
    unsigned char isAllReport;
    NSString *sType;
    NSString *reportBody;
}

@property(copy, nonatomic) NSString *ReportBody; // @synthesize ReportBody=reportBody;
@property(copy, nonatomic) NSString *SType; // @synthesize SType=sType;
@property(nonatomic) unsigned char IsAllReport; // @synthesize IsAllReport=isAllReport;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASIHTTPRequest.h"

@class NSMutableDictionary;

@interface TADHTTPClientRequest : ASIHTTPRequest
{
    NSMutableDictionary *_extraUserInfo;
    int _failedCount;
}

@property(nonatomic) int failedCount; // @synthesize failedCount=_failedCount;
@property(retain, nonatomic) NSMutableDictionary *extraUserInfo; // @synthesize extraUserInfo=_extraUserInfo;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HTTPResponse.h"

@class NSMutableData;

@interface TADHttpDataResponse : NSObject <HTTPResponse>
{
    unsigned long long offset;
    NSMutableData *_data;
    unsigned long long _contentLength;
    struct _NSRange _range;
}

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long contentLength; // @synthesize contentLength=_contentLength;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)writeStepLog:(id)arg1;
- (BOOL)isAllDataSended;
- (BOOL)isDone;
- (id)readDataOfLength:(unsigned int)arg1;
- (void)appendData:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (void)dealloc;
- (id)initWithData:(id)arg1 contentLength:(unsigned long long)arg2 range:(struct _NSRange)arg3;

@end


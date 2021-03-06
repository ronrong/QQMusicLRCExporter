//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSString, SvDownloadTask;

@interface SvDownloadOperation : NSOperation
{
    NSString *_url;
    NSString *_identifierForVendor;
    SvDownloadTask *task;
}

@property(retain, nonatomic) SvDownloadTask *task; // @synthesize task;
- (void)getStoredId;
- (id)getChannelIdentifier;
- (void)didFailWithError:(id)arg1;
- (void)didFinishWithData:(id)arg1;
- (void)main;
- (void)dealloc;
- (id)initWithTask:(id)arg1;

@end


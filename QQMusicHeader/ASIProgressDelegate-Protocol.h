//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest;

@protocol ASIProgressDelegate <NSObject>

@optional
- (void)request:(ASIHTTPRequest *)arg1 incrementUploadSizeBy:(long long)arg2;
- (void)request:(ASIHTTPRequest *)arg1 incrementDownloadSizeBy:(long long)arg2;
- (void)request:(ASIHTTPRequest *)arg1 didSendBytes:(long long)arg2;
- (void)request:(ASIHTTPRequest *)arg1 didReceiveBytes:(long long)arg2;
- (void)setProgress:(float)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APASIHTTPRequest, NSData, NSDictionary, NSURL;

@protocol APASIHTTPRequestDelegate <NSObject>

@optional
- (void)proxyAuthenticationNeededForRequest:(APASIHTTPRequest *)arg1;
- (void)authenticationNeededForRequest:(APASIHTTPRequest *)arg1;
- (void)request:(APASIHTTPRequest *)arg1 didReceiveData:(NSData *)arg2;
- (void)requestRedirected:(APASIHTTPRequest *)arg1;
- (void)requestFailed:(APASIHTTPRequest *)arg1;
- (void)requestFinished:(APASIHTTPRequest *)arg1;
- (void)request:(APASIHTTPRequest *)arg1 willRedirectToURL:(NSURL *)arg2;
- (void)request:(APASIHTTPRequest *)arg1 didReceiveResponseHeaders:(NSDictionary *)arg2;
- (void)requestStarted:(APASIHTTPRequest *)arg1;
@end


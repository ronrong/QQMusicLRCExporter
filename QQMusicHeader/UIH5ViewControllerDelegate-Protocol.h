//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol UIH5ViewControllerDelegate <NSObject>
- (void)onRepay;
- (void)onPageLoadSucess:(NSString *)arg1;
- (void)onPageRefresh:(NSString *)arg1;
- (void)onPage:(NSString *)arg1 loadError:(NSError *)arg2;
- (void)onPage:(NSString *)arg1 error:(NSError *)arg2;
- (void)onH5RequestPayProduct:(NSString *)arg1 zoneId:(NSString *)arg2 deposit:(BOOL)arg3 productType:(NSString *)arg4;
- (void)onClose;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TADSchemeHandler : NSObject
{
    NSString *_params;
    NSString *_cidString;
    NSString *_vidString;
    NSString *_ckURLString;
    int _errorTimes;
}

@property(nonatomic) int errorTimes; // @synthesize errorTimes=_errorTimes;
@property(retain, nonatomic) NSString *ckURLString; // @synthesize ckURLString=_ckURLString;
@property(retain, nonatomic) NSString *vidString; // @synthesize vidString=_vidString;
@property(retain, nonatomic) NSString *cidString; // @synthesize cidString=_cidString;
@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
- (void)dealloc;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connectckURL;
- (void)handle;
- (id)initWithParams:(id)arg1;

@end


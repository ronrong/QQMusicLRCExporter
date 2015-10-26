//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TADReportBase.h"

@class NSException, NSMutableDictionary, NSString;

@interface TADMediaLog : NSObject <TADReportBase>
{
    _Bool _isSkiped;
    int _vidToAid;
    int _aidToOid;
    int _oidToUrl;
    int _oidToImg;
    NSString *_vurl;
    int _val1;
    int _val2;
    NSString *_vid;
    NSString *_dtype;
    int _errorCode;
    NSException *_exception;
    NSMutableDictionary *_mediaLog;
    double _start;
    double _end;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *mediaLog; // @synthesize mediaLog=_mediaLog;
@property(retain, nonatomic) NSException *exception; // @synthesize exception=_exception;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool isSkiped; // @synthesize isSkiped=_isSkiped;
@property(retain, nonatomic) NSString *dtype; // @synthesize dtype=_dtype;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) int val2; // @synthesize val2=_val2;
@property(nonatomic) int val1; // @synthesize val1=_val1;
@property(retain, nonatomic) NSString *vurl; // @synthesize vurl=_vurl;
@property(nonatomic) int oidToImg; // @synthesize oidToImg=_oidToImg;
@property(nonatomic) int oidToUrl; // @synthesize oidToUrl=_oidToUrl;
@property(nonatomic) int aidToOid; // @synthesize aidToOid=_aidToOid;
@property(nonatomic) int vidToAid; // @synthesize vidToAid=_vidToAid;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
- (id)dataDictWithKey;
- (void)dealloc;
- (void)addOid:(int)arg1;
- (void)addVid:(id)arg1;
- (void)addPageLoadCost:(int)arg1;
- (void)addLandingPage:(int)arg1;
- (void)addLandingPoint:(int)arg1;
- (void)addRealPlayed:(int)arg1;
- (void)addTotalPlayed:(int)arg1;
- (void)setFirstBufferingTime:(int)arg1;
- (void)setAdaptor:(id)arg1;
- (void)setMerged:(id)arg1;
- (void)setMvid:(id)arg1;
- (void)setAdid:(id)arg1;
- (void)setTpid:(id)arg1;
- (void)setCid:(id)arg1;
- (void)setVideoDuration:(int)arg1;
- (void)setAdType:(id)arg1;
- (void)appendString:(id)arg1 toKey:(id)arg2;
- (void)appendValue:(int)arg1 toKey:(id)arg2;
- (id)getVmindLog;
- (void)sendToServer;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


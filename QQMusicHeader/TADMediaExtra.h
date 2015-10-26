//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TADMediaExtra : NSObject
{
    NSString *_aid;
    NSString *_oaid;
    NSString *_tpid;
    NSString *_isvip;
    NSString *_adFlag;
    int _duration;
    int _vid2aid;
    NSDictionary *_adLocDict;
    int _merged;
    int _oid2url;
    int _videobr;
    int _videoid;
    NSDictionary *_adGetvDict;
}

+ (id)mediaExtraWithOrderDict:(id)arg1;
@property(retain, nonatomic) NSDictionary *adGetvDict; // @synthesize adGetvDict=_adGetvDict;
@property(nonatomic) int videoid; // @synthesize videoid=_videoid;
@property(nonatomic) int videobr; // @synthesize videobr=_videobr;
@property(nonatomic) int oid2url; // @synthesize oid2url=_oid2url;
@property(nonatomic) int merged; // @synthesize merged=_merged;
@property(retain, nonatomic) NSDictionary *adLocDict; // @synthesize adLocDict=_adLocDict;
@property(nonatomic) int vid2aid; // @synthesize vid2aid=_vid2aid;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *adFlag; // @synthesize adFlag=_adFlag;
@property(copy, nonatomic) NSString *isvip; // @synthesize isvip=_isvip;
@property(copy, nonatomic) NSString *tpid; // @synthesize tpid=_tpid;
@property(copy, nonatomic) NSString *oaid; // @synthesize oaid=_oaid;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
- (void).cxx_destruct;
- (void)fillWithAdGetvDictionary:(id)arg1;
- (void)fillWithAdLocDictionary:(id)arg1;
- (BOOL)isGetvmindMerged;

@end


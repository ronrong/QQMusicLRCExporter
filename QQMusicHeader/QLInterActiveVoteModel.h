//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSArray, NSMutableDictionary, NSString, QLASIHTTPRequest;

@interface QLInterActiveVoteModel : QLRequestModel
{
    NSString *_vid;
    QLASIHTTPRequest *_dataRequest;
    NSArray *_OriginPointArray;
    NSMutableDictionary *_hitPointDic;
}

+ (id)createInterActiveVoteModel:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *hitPointDic; // @synthesize hitPointDic=_hitPointDic;
@property(retain, nonatomic) NSArray *OriginPointArray; // @synthesize OriginPointArray=_OriginPointArray;
@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)isFillPointData:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load:(int)arg1 more:(BOOL)arg2;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (void)dealloc;
- (id)initWithVid:(id)arg1;

@end


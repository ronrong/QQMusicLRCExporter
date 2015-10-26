//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VideoSetDataController.h"

@class NSMutableArray, NSString;

@interface VideoGetvinfoDataController : VideoSetDataController
{
    BOOL _isSInfo;
    BOOL _isUnicomFreeMode;
    NSMutableArray *_hlsUrls;
    NSString *_hlsFileName;
    NSString *_vt;
    int _formatid;
}

@property(nonatomic) int formatid; // @synthesize formatid=_formatid;
@property(copy, nonatomic) NSString *vt; // @synthesize vt=_vt;
@property(copy, nonatomic) NSString *hlsFileName; // @synthesize hlsFileName=_hlsFileName;
@property(retain, nonatomic) NSMutableArray *hlsUrls; // @synthesize hlsUrls=_hlsUrls;
@property(nonatomic) BOOL isUnicomFreeMode; // @synthesize isUnicomFreeMode=_isUnicomFreeMode;
@property(readonly, nonatomic) BOOL isSInfo; // @synthesize isSInfo=_isSInfo;
@property(readonly, nonatomic) BOOL isHLS;
- (void)enscapeData:(id)arg1 withDataUserInfo:(id)arg2;
- (void)parseHLSInfoData:(id)arg1 withDataUserInfo:(id)arg2;
- (void)parseSInfoData:(id)arg1 withDataUserInfo:(id)arg2;
- (id)initWithEventName:(id)arg1 withVideoDataType:(int)arg2 withInterfaceType:(int)arg3;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MusicCircleBannerItem : NSObject
{
    NSString *_picUrl;
    NSString *_desc;
    int _jumpType;
    NSString *_jumpUrl;
    long long _jumpId;
}

+ (id)translateFromDic:(id)arg1;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) long long jumpId; // @synthesize jumpId=_jumpId;
@property(nonatomic) int jumpType; // @synthesize jumpType=_jumpType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
- (void).cxx_destruct;
- (id)imageFileName;
- (void)dealloc;

@end

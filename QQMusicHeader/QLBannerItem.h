//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLBannerItem : NSObject
{
    int _type;
    NSString *_name;
    NSString *_introduction;
    NSString *_imageURL;
}

+ (id)createItem:(int)arg1 name:(id)arg2 introduction:(id)arg3 imageURL:(id)arg4;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;

@end


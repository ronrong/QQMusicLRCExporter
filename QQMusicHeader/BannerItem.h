//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface BannerItem : NSObject <NSCoding, NSCopying>
{
    int bannerid;
    NSString *img;
    NSString *img2;
    int showtime;
    int target_t;
    int target_id;
    NSString *target_url;
    int target_gt;
    NSString *target_name;
    NSDate *startTime;
    NSDate *endTime;
    NSString *imageUrlHeader;
    UIImage *bannerImage;
}

@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage;
@property(copy, nonatomic) NSString *imageUrlHeader; // @synthesize imageUrlHeader;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime;
@property(copy, nonatomic) NSString *target_name; // @synthesize target_name;
@property(nonatomic) int target_gt; // @synthesize target_gt;
@property(copy, nonatomic) NSString *target_url; // @synthesize target_url;
@property(nonatomic) int target_id; // @synthesize target_id;
@property(nonatomic) int target_t; // @synthesize target_t;
@property(nonatomic) int showtime; // @synthesize showtime;
@property(copy, nonatomic) NSString *img2; // @synthesize img2;
@property(copy, nonatomic) NSString *img; // @synthesize img;
@property(nonatomic) int bannerid; // @synthesize bannerid;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)imageUrl;
- (id)imageFileNameForBanner;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end


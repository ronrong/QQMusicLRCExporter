//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface AlbumIntroduction : NSObject <NSCoding, NSCopying>
{
    NSString *_albumName;
    NSString *_singer;
    NSString *_language;
    NSString *_date;
    NSString *_introduction;
}

@property(retain, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

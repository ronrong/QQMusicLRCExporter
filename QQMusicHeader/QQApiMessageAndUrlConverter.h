//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QQApiMessageAndUrlConverter : NSObject
{
}

+ (id)urlWithQueryItemForWPA:(id)arg1 type:(int)arg2;
+ (id)urlWithQueryItemForPay:(id)arg1 type:(int)arg2;
+ (id)urlWithQueryItem:(id)arg1 type:(int)arg2;
+ (id)getObjectByUrl:(id)arg1;
+ (id)smartURLString:(id)arg1;
+ (void)setPasteBoardPrevImageData:(id)arg1 filedata:(id)arg2;
+ (void)setURL:(id)arg1 forKey:(id)arg2 toQueryItem:(id)arg3;
+ (void)setString:(id)arg1 forKey:(id)arg2 toQueryItem:(id)arg3;
+ (void)setPreviewImageData:(id)arg1 toQueryItem:(id)arg2;
+ (void)setTitle:(id)arg1 description:(id)arg2 toQueryItem:(id)arg3;
+ (void)setTitle:(id)arg1 description:(id)arg2 appName:(id)arg3 toQueryItem:(id)arg4;
+ (id)urlWithWPAObject:(id)arg1 type:(int)arg2;
+ (id)urlWithPayObject:(id)arg1 type:(int)arg2;
+ (id)urlWithCommonContentObject:(id)arg1 type:(int)arg2;
+ (id)urlWithURLObject:(id)arg1 type:(int)arg2;
+ (id)urlWithImageObject:(id)arg1 type:(int)arg2;
+ (id)urlWithExtendObject:(id)arg1 type:(int)arg2;
+ (id)urlWithTextObject:(id)arg1 type:(int)arg2;
+ (id)messageWithUrlUsedClipboard:(id)arg1;
+ (id)messageWithResponseFromQQ:(id)arg1;
+ (id)messageWithRequestFromQQ:(id)arg1;
+ (id)messageWithUrlNoClipboard:(id)arg1;
+ (id)messageWithUrl:(id)arg1;
+ (id)urlWithMessage:(id)arg1;

@end


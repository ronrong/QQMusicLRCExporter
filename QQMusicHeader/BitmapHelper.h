//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface BitmapHelper : NSObject
{
}

+ (struct CGContext *)newBitmapContextFromImageRef:(struct CGImage *)arg1;
+ (char *)convertUIImageToBitmap:(id)arg1 bitmapDataLength:(unsigned int *)arg2 bitmapWidth:(unsigned int *)arg3 bitmapHeight:(unsigned int *)arg4;
+ (id)convertViewToUIImage:(id)arg1;
+ (BOOL)isRetina;

@end


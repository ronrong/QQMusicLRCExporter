//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FingerPrintTools : NSObject
{
}

+ (void)initFingerPrintTools;
+ (BOOL)deleteTempFiles:(id)arg1;
+ (id)generateUUID;
+ (BOOL)deleteLycisAlbumFile:(int)arg1 uuid:(id)arg2;
+ (id)getLycisAlbumFile:(int)arg1 uuid:(id)arg2;

@end


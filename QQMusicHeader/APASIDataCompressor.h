//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APASIDataCompressor : NSObject
{
    BOOL streamReady;
    struct z_stream_s zStream;
}

+ (id)deflateErrorWithCode:(int)arg1;
+ (BOOL)compressDataFromFile:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (id)compressData:(id)arg1 error:(id *)arg2;
+ (id)compressor;
@property(readonly) BOOL streamReady; // @synthesize streamReady;
- (id)compressBytes:(char *)arg1 length:(unsigned int)arg2 error:(id *)arg3 shouldFinish:(BOOL)arg4;
- (id)closeStream;
- (id)setupStream;
- (void)dealloc;

@end


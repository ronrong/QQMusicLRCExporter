//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MultipartMessageHeader, NSData, NSMutableData;

@interface MultipartFormDataParser : NSObject
{
    NSMutableData *pendingData;
    NSData *boundaryData;
    MultipartMessageHeader *currentHeader;
    BOOL waitingForCRLF;
    BOOL reachedEpilogue;
    BOOL processedPreamble;
    BOOL checkForContentEnd;
    id <MultipartFormDataParserDelegate> delegate;
    int currentEncoding;
    unsigned int formEncoding;
}

+ (id)decodedDataFromQuotedPrintableData:(id)arg1;
+ (id)decodedDataFromData:(id)arg1 encoding:(int)arg2;
@property unsigned int formEncoding; // @synthesize formEncoding;
@property __weak id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (int)numberOfBytesToLeavePendingWithData:(id)arg1 length:(unsigned int)arg2 encoding:(int)arg3;
- (int)findContentEnd:(id)arg1 fromOffset:(int)arg2;
- (int)findHeaderEnd:(id)arg1 fromOffset:(int)arg2;
- (int)processPreamble:(id)arg1;
- (int)offsetTillNewlineSinceOffset:(int)arg1 inData:(id)arg2;
- (BOOL)appendData:(id)arg1;
- (id)initWithBoundary:(id)arg1 formEncoding:(unsigned int)arg2;

@end


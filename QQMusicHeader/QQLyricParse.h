//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface QQLyricParse : NSObject
{
    int mOffset;
    NSMutableArray *mLineLyricList;
    NSMutableArray *mLineUnused;
    int _lyricType;
}

@property(nonatomic) int lyricType; // @synthesize lyricType=_lyricType;
@property(retain, nonatomic) NSMutableArray *mLineUnused; // @synthesize mLineUnused;
@property(retain, nonatomic) NSMutableArray *mLineLyricList; // @synthesize mLineLyricList;
@property int mOffset; // @synthesize mOffset;
- (void).cxx_destruct;
- (BOOL)saveToFile:(id)arg1;
- (id)formatLyricTime:(unsigned long)arg1;
- (void)parseLine:(id)arg1;
- (BOOL)parseLineInternal:(id)arg1;
- (long)parseTime:(id)arg1;
- (long)parseTimeWithException:(id)arg1;
- (BOOL)_isDigitString:(id)arg1;
- (BOOL)parse:(id)arg1;
- (void)_removeInvalidedTimeIfExistValidedTime;
- (id)init;
- (int)judgeLyricType:(id)arg1;
- (long)parseTimeWithExceptionQRC:(id)arg1;
- (long)parseTimeQRC:(id)arg1;

@end


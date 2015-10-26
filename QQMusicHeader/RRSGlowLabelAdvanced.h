//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RRSGlowLabel.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface RRSGlowLabelAdvanced : RRSGlowLabel
{
    NSMutableArray *_lineRects;
    NSMutableArray *_lyricLine;
    NSArray *_wordList;
}

@property(retain, nonatomic) NSArray *wordList; // @synthesize wordList=_wordList;
@property(retain, nonatomic) NSMutableArray *lyricLine; // @synthesize lyricLine=_lyricLine;
@property(retain, nonatomic) NSMutableArray *lineRects; // @synthesize lineRects=_lineRects;
- (void).cxx_destruct;
- (void)loadDataWithWordList:(id)arg1;
- (id)parseToLines:(id)arg1;
- (void)parseRectOffset:(id)arg1 maxWidth:(float)arg2;
- (id)groupedByIndex:(id)arg1 getIndexBlock:(CDUnknownBlockType)arg2;
- (id)parseWordList:(id)arg1 maxWidth:(float)arg2 rowHeight:(float)arg3;
- (void)parseWordList_V2;
- (void)setLineIndex:(int)arg1 wordIndex:(int)arg2 toSingleQRCRect:(id)arg3;
- (id)addNewLine:(id)arg1;
- (id)parseSingleWord:(id)arg1 inNewLine:(id)arg2 maxWidth:(float)arg3 minY:(float)arg4 usedWord:(id *)arg5;
- (BOOL)append:(id)arg1 toLastLine:(id)arg2 maxWidth:(float)arg3 minY:(float)arg4 result:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

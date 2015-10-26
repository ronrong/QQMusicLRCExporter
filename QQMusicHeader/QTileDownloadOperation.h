//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSMutableArray, NSString;

@interface QTileDownloadOperation : NSOperation
{
    id <QTileDownLoadDelegate> _tileDownLoadDelegate;
    BOOL _isFinished;
    NSMutableArray *_tileDownloadList;
    NSString *_url;
    unsigned int _tileSize;
    unsigned int _tileType;
}

@property(nonatomic) unsigned int tileType; // @synthesize tileType=_tileType;
@property(nonatomic) unsigned int tileSize; // @synthesize tileSize=_tileSize;
@property(retain, nonatomic) NSArray *tileDownloadList; // @synthesize tileDownloadList=_tileDownloadList;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) id <QTileDownLoadDelegate> tileDownLoadDelegate; // @synthesize tileDownLoadDelegate=_tileDownLoadDelegate;
- (void)addToTileDownloadList:(id)arg1;
- (void)clear;
- (void)parseTileDirect:(id)arg1;
- (void)parseTileIndirect:(id)arg1;
- (BOOL)isFinished;
- (void)didFinishWithData:(id)arg1;
- (void)main;
- (void)dealloc;
- (id)init;

@end


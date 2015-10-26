//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMStatement : NSObject
{
    struct sqlite3_stmt *_statement;
    NSString *_query;
    long _useCount;
    BOOL _inUse;
}

@property BOOL inUse; // @synthesize inUse=_inUse;
@property long useCount; // @synthesize useCount=_useCount;
@property(retain) NSString *query; // @synthesize query=_query;
@property struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (void).cxx_destruct;
- (id)description;
- (void)reset;
- (void)close;
- (void)dealloc;
- (void)finalize;

@end


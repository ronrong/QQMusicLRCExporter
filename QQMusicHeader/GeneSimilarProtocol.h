//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBaseJason.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GeneSimilarProtocol : ProtocolBaseJason
{
    int _type;
    int _sin;
    int _ein;
    NSMutableArray *_results;
    int _totalnum;
}

@property(nonatomic) int totalnum; // @synthesize totalnum=_totalnum;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(nonatomic) int ein; // @synthesize ein=_ein;
@property(nonatomic) int sin; // @synthesize sin=_sin;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)onParseJasonData:(id)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (BOOL)canReportError;
- (int)cid;

@end


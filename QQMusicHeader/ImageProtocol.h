//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBase.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ImageProtocol : ProtocolBase
{
    NSArray *items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items;
- (void).cxx_destruct;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)init;

@end


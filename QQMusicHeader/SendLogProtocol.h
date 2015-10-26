//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolBase.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SendLogProtocol : ProtocolBase
{
    NSData *m_data;
    NSString *_logCase;
}

+ (void)sendData:(id)arg1 case:(id)arg2;
@property(retain, nonatomic) NSString *logCase; // @synthesize logCase=_logCase;
@property(retain, nonatomic) NSData *m_data; // @synthesize m_data;
- (void).cxx_destruct;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)initWithData:(id)arg1;

@end


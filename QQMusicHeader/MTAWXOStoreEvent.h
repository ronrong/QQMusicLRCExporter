//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MTAWXOStoreEvent : NSObject
{
    unsigned int _eventId;
    NSString *_content;
    unsigned int _status;
    unsigned int _sendCount;
    unsigned int _ts;
}

@property unsigned int ts; // @synthesize ts=_ts;
@property unsigned int sendCount; // @synthesize sendCount=_sendCount;
@property unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property unsigned int eventId; // @synthesize eventId=_eventId;
- (void)dealloc;

@end

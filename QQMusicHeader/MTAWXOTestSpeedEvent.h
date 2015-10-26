//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTAWXOEvent.h"

#import "MTAWXOEventProtocol.h"

@class NSString;

@interface MTAWXOTestSpeedEvent : MTAWXOEvent <MTAWXOEventProtocol>
{
    NSString *_sp;
    NSString *_op;
    NSString *_cn;
}

@property(retain, nonatomic) NSString *cn; // @synthesize cn=_cn;
@property(retain, nonatomic) NSString *op; // @synthesize op=_op;
@property(retain, nonatomic) NSString *sp; // @synthesize sp=_sp;
- (void)dealloc;
- (id)init;
- (void)encode:(id)arg1;
- (int)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CloudProtocolActionDelegate.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CloudProtocolSession : NSObject <CloudProtocolActionDelegate>
{
    NSMutableArray *_arrayColudProtocolAction;
    NSMutableArray *_arrayColudProtocolActionFinished;
    int _iSeqSession;
    id _userInfo;
    BOOL _working;
    CDUnknownBlockType _callBack;
    id <CloudProtocolSessionDelegate> _delegate;
    unsigned long long _uin;
}

@property __weak id <CloudProtocolSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL working; // @synthesize working=_working;
@property unsigned long long uin; // @synthesize uin=_uin;
@property(copy) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain) NSMutableArray *arrayColudProtocolActionFinished; // @synthesize arrayColudProtocolActionFinished=_arrayColudProtocolActionFinished;
@property(retain) NSMutableArray *arrayColudProtocolAction; // @synthesize arrayColudProtocolAction=_arrayColudProtocolAction;
- (void).cxx_destruct;
- (void)onActionDone:(id)arg1;
- (void)onActionWillDone:(id)arg1;
- (void)onActionWillStart:(id)arg1;
- (void)startWork;
- (void)addAction:(id)arg1;
- (id)initWithDelegate:(id)arg1 uin:(unsigned long)arg2 callBack:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVRecognizeDelegate.h"

@class NSString, TVRecognize;

__attribute__((visibility("hidden")))
@interface AVRecognizeOp : NSObject <TVRecognizeDelegate>
{
    id <AVRecognizOpDelegate> m_observer;
    TVRecognize *m_recognizer;
    int m_session_id;
}

- (void).cxx_destruct;
- (void)setRecogMode:(id)arg1;
- (void)recognizeFinished:(id)arg1;
- (void)addData:(id)arg1;
- (void)recognizeData;
- (void)recognizeReset;
- (void)reportResult:(id)arg1;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


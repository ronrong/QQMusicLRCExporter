//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FingerPrintSessionProtocol.h"

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface FingerPrintManager : NSObject <FingerPrintSessionProtocol>
{
    NSMutableSet *_setFingerPrintSession;
    id <FingerPrintManagerDelegate> _fingerPrintManagerdelegate;
}

+ (id)sharedFingerPrintManager;
@property(nonatomic) __weak id <FingerPrintManagerDelegate> fingerPrintManagerdelegate; // @synthesize fingerPrintManagerdelegate=_fingerPrintManagerdelegate;
@property(retain, nonatomic) NSMutableSet *setFingerPrintSession; // @synthesize setFingerPrintSession=_setFingerPrintSession;
- (void).cxx_destruct;
- (void)onFingerPrintStatusChange:(id)arg1 fingerPrintStatus:(int)arg2;
- (void)getFingerPrintForSong:(id)arg1 manualCause:(BOOL)arg2;
- (BOOL)isFindingFingerPrintOfSong:(id)arg1;
- (id)getUrlForFingerPrint:(id)arg1 uuid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


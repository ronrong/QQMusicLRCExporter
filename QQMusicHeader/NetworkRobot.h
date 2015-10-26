//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProtocolHostDelegate.h"

@class NSData, NSMutableArray, NSString, UidSessionProtocol;

__attribute__((visibility("hidden")))
@interface NetworkRobot : NSObject <ProtocolHostDelegate>
{
    NSMutableArray *arrayProtocols;
    NSString *postDataHeaderStr;
    NSString *currentSID;
    NSString *uid;
    NSData *compressedData;
    UidSessionProtocol *uidsessionProtocal;
    unsigned long uiQQ;
}

+ (id)sharedNetworkRobot;
@property(retain, nonatomic) NSString *uid; // @synthesize uid;
@property(retain) NSString *currentSID; // @synthesize currentSID;
@property(retain, nonatomic) NSString *postDataHeaderStr; // @synthesize postDataHeaderStr;
@property(retain) NSMutableArray *arrayProtocols; // @synthesize arrayProtocols;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long uiQQ; // @synthesize uiQQ;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (void)dealloc;
- (void)setUIDAndSID:(id)arg1 SID:(id)arg2;
- (void)requestForNetWork:(id)arg1;
- (void)getVKey;
- (void)getUIDAndSID;
- (id)init;

@end


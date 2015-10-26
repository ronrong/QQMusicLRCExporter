//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WloginProtocolBuff.h"

@class NSData;

@interface DevRegCmd : NSObject <WloginProtocolBuff>
{
    unsigned char cStx;
    unsigned char cEtx;
    unsigned short wCmd;
    NSData *guid;
    struct {
        unsigned short wPkgLen;
        unsigned short wVer;
        unsigned short wCmd;
        unsigned int dwSeq;
        unsigned char cResult;
        unsigned int dwAppid;
        unsigned int dwSubAppid;
        unsigned long long ddwUin;
        unsigned char sGuid[16];
        unsigned long long ddwResv;
    } stPushPkgHead;
}

@property(copy) NSData *guid; // @synthesize guid;
@property unsigned short wCmd; // @synthesize wCmd;
@property unsigned char cEtx; // @synthesize cEtx;
@property unsigned char cStx; // @synthesize cStx;
- (unsigned char)PkgResult;
- (void)SetPkgResult:(unsigned char)arg1;
- (unsigned int)PkgAppid;
- (id)PkgGuid;
- (void)SetPkgGuid:(id)arg1;
- (void)SetPkgAppid:(unsigned int)arg1 andSubAppid:(unsigned int)arg2;
- (unsigned long long)PkgUin;
- (void)SetPkgUin:(unsigned long long)arg1;
- (unsigned short)PkgCmd;
- (void)SetPkgCmd:(unsigned short)arg1;
- (unsigned short)PkgLen;
- (void)SetPkgLen:(unsigned short)arg1;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodePushPkgHead:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encodePushPkgHead:(id)arg1;
- (void)dealloc;
- (id)init;

@end

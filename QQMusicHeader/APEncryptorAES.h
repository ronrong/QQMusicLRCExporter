//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APEncryptorAES : NSObject
{
}

+ (id)dataForHexString:(id)arg1;
+ (id)hexStringForData:(id)arg1;
+ (id)decryptData:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)encryptData:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)encryptUsingCBCModeForData:(id)arg1 key:(id)arg2 iv:(const void *)arg3;
+ (id)commonEncryptData:(id)arg1 key:(id)arg2 iv:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NuRSAKey : NSObject
{
    struct rsa_st *key;
}

- (id)decryptDataWithPrivateKey:(id)arg1;
- (id)decryptDataWithPublicKey:(id)arg1;
- (id)encryptDataWithPrivateKey:(id)arg1;
- (id)encryptDataWithPublicKey:(id)arg1;
- (id)publicKeyDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)exponent;
- (id)modulus;
- (int)check;
- (int)maxSize;
- (id)initWithDictionary:(id)arg1;
- (id)DERPublicKeyData;
- (id)initWithDERPublicKeyData:(id)arg1;
- (id)initWithPEMPublicKeyData:(id)arg1;
- (id)initWithPEMPrivateKeyData:(id)arg1;
- (id)initWithModulusData:(id)arg1 exponentData:(id)arg2;
- (id)initWithModulus:(id)arg1 exponent:(id)arg2;
- (id)init;

@end


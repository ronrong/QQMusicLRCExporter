//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RC4 : NSObject
{
    int i;
    int j;
    unsigned char s[256];
    NSString *key;
}

@property(retain, nonatomic) NSString *key; // @synthesize key;
- (void).cxx_destruct;
- (void)swap:(int)arg1 swap2:(int)arg2;
- (unsigned char)KSA;
- (void)initialize;
- (id)encryptData:(id)arg1;
- (id)initWithKey:(id)arg1;

@end


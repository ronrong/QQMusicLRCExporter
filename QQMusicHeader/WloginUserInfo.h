//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSData, NSString;

@interface WloginUserInfo : NSObject <NSCoding>
{
    unsigned int dwUserUin;
    NSString *sUserMainAccount;
    unsigned short wFaceId;
    unsigned char cAge;
    unsigned char cGender;
    NSString *sNickName;
    NSString *sFaceUrl;
    NSData *quickLoginData;
}

+ (int)_UserDict2Data:(id)arg1 guid:(id)arg2 key:(id)arg3 outData:(id)arg4;
+ (int)_data2UserDict:(id)arg1 guid:(id)arg2 key:(id)arg3 mDict:(id)arg4;
+ (int)_data2UserArray:(id)arg1 guid:(id)arg2 mArray:(id)arg3;
+ (int)deleteUserInfoFromPasteboard:(unsigned int)arg1 guid:(id)arg2 key:(id)arg3 inData:(id)arg4 outData:(id)arg5;
+ (int)insertUserInfoToPasteboard:(id)arg1 guid:(id)arg2 key:(id)arg3 inData:(id)arg4 outData:(id)arg5;
+ (id)readUserInfoListFromPasteboard:(id)arg1 inData:(id)arg2;
@property(retain) NSData *quickLoginData; // @synthesize quickLoginData;
@property(copy) NSString *sFaceUrl; // @synthesize sFaceUrl;
@property(retain) NSString *sNickName; // @synthesize sNickName;
@property unsigned char cGender; // @synthesize cGender;
@property unsigned char cAge; // @synthesize cAge;
@property unsigned short wFaceId; // @synthesize wFaceId;
@property(retain) NSString *sUserMainAccount; // @synthesize sUserMainAccount;
@property unsigned int dwUserUin; // @synthesize dwUserUin;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)userinfo;
- (id)description;

@end


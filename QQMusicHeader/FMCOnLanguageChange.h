//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCRPCNotification.h"

@class FMCLanguage;

@interface FMCOnLanguageChange : FMCRPCNotification
{
}

@property(retain) FMCLanguage *hmiDisplayLanguage;
@property(retain) FMCLanguage *language;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end


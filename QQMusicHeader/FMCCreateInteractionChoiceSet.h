//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCRPCRequest.h"

@class NSMutableArray, NSNumber;

@interface FMCCreateInteractionChoiceSet : FMCRPCRequest
{
}

@property(retain) NSMutableArray *choiceSet;
@property(retain) NSNumber *interactionChoiceSetID;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end


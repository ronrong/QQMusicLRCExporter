//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QPlayUpnpService : NSObject
{
    void *cObject;
}

@property(readonly) void *cObject; // @synthesize cObject;
- (BOOL)isStateVariableImpemented:(id)arg1;
- (id)getStateVariableForName:(id)arg1;
- (id)getActionForName:(id)arg1;
- (id)stateVariables;
- (id)actions;
- (id)serviceType;
- (id)serviceId;
- (BOOL)parseXMLDescription:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCObject:(void *)arg1;

@end


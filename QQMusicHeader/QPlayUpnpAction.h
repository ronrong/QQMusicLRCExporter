//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QPlayUpnpAction : NSObject
{
    void *cObject;
}

@property(readonly) void *cObject; // @synthesize cObject;
- (int)statusCode;
- (BOOL)postWithArguments:(id)arg1;
- (BOOL)post;
- (id)argumentValueForName:(id)arg1;
- (BOOL)setArgumentValue:(id)arg1 forName:(id)arg2;
- (id)arguments;
- (id)name;
- (void)dealloc;
- (id)init;
- (id)initWithCObject:(void *)arg1;

@end


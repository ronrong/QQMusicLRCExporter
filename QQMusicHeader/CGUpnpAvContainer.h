//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CGUpnpAvObject.h"

@class NSMutableArray;

@interface CGUpnpAvContainer : CGUpnpAvObject
{
    NSMutableArray *childArray;
}

@property(retain) NSMutableArray *childArray; // @synthesize childArray;
- (id)objectForTitlePath:(id)arg1;
- (id)objectForId:(id)arg1;
- (id)childforTitle:(id)arg1;
- (id)childforId:(id)arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (id)children;
- (void)removeAllChildren;
- (void)removeChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
- (void)dealloc;
- (id)initWithXMLNode:(void *)arg1;
- (id)init;

@end

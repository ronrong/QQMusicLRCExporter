//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTExtensionLoader : NSObject
{
}

+ (id)failedExtensions;
+ (id)loadedExtensions;
+ (id)availableExtensions;
+ (void)loadAllExtensions;
+ (void)setupStaticData;
- (BOOL)loadExtension:(id)arg1;
- (id)extensionWithID:(id)arg1;
- (id)callExtensionID:(id)arg1 methodWithPrefix:(id)arg2;
- (id)extensionInfoNamedThree20XML;
- (BOOL)loadExtensionNamedThree20XML;

@end


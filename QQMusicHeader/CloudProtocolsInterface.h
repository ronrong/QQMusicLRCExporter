//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CloudProtocolsManager;

__attribute__((visibility("hidden")))
@interface CloudProtocolsInterface : NSObject
{
    CloudProtocolsManager *_cloudProtocolsManager;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) CloudProtocolsManager *cloudProtocolsManager; // @synthesize cloudProtocolsManager=_cloudProtocolsManager;
- (void).cxx_destruct;
- (void)clearAll;
- (void)syncUpWithCallBack:(CDUnknownBlockType)arg1;
- (void)updateFoldersWithCallBack:(CDUnknownBlockType)arg1;
- (void)updateSongListByFolder:(id)arg1 viaServerPush:(BOOL)arg2 callBack:(CDUnknownBlockType)arg3;
- (id)initWithCloudProtocolsManager:(id)arg1 defaultCallBack:(CDUnknownBlockType)arg2;

@end


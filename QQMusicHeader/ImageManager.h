//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ImageHttpManager.h"

#import "ProtocolHostDelegate.h"

@class ImageProtocol, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ImageManager : ImageHttpManager <ProtocolHostDelegate>
{
    NSMutableArray *objectInRun;
    NSMutableArray *ItemsNeedAddress;
    ImageProtocol *protocol;
}

+ (id)sharedImageManager;
+ (id)scrollImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (id)getClusterFileBy:(id)arg1;
+ (id)getResourceFileBy:(id)arg1;
+ (id)getUserImageFilePath:(long long)arg1;
+ (id)getAppImageFilePath:(id)arg1;
+ (BOOL)fileNameIsUnValid:(id)arg1;
+ (id)getCategoryImageFilePath:(id)arg1;
+ (id)getChannelImageFilePath:(id)arg1;
+ (id)getGDTBannerImageFilePath:(id)arg1;
+ (id)getBannerImageFilePath:(id)arg1;
+ (id)geFocusFileByName:(id)arg1;
- (void).cxx_destruct;
- (id)getSingerOrAlbumImageBy:(id)arg1 Option:(int)arg2 AutoScale:(BOOL)arg3 Callback:(id)arg4 AndObject:(id)arg5;
- (void)removeDelegate:(id)arg1;
- (id)getAlbumImageBySong:(id)arg1 Callback:(id)arg2;
- (id)getCacheUIImageBySong:(id)arg1;
- (id)getBigImageBySong:(id)arg1 Callback:(id)arg2 ForceReload:(BOOL)arg3;
- (id)getBigImageBySong:(id)arg1 Callback:(id)arg2;
- (id)getSmallImageBySong:(id)arg1 Callback:(id)arg2;
- (void)getAlbumImageAsynchronized:(id)arg1 Option:(int)arg2 Callback:(id)arg3;
- (id)getAlbumImageBy:(id)arg1 Option:(int)arg2 Callback:(id)arg3;
- (id)getSingerImageBy:(id)arg1 Option:(int)arg2 Callback:(id)arg3 context:(id)arg4;
- (id)getSingerImageBy:(id)arg1 Option:(int)arg2 Callback:(id)arg3;
- (id)getUserImageByUin:(long long)arg1 Url:(id)arg2 AndCallback:(id)arg3 context:(id)arg4;
- (id)getShowCoverImageBy:(id)arg1 Callback:(id)arg2;
- (id)getAppImageByAppName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (id)getImageByCategory:(id)arg1 AndCallback:(id)arg2;
- (void)getCategoryImageAsynchronizedByName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (id)getCategoryImageBy:(id)arg1 AndCallback:(id)arg2;
- (void)getChannelImageAsynchronizedByName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (id)getChannelImageByName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (id)getGDTBannerImageByName:(id)arg1 Url:(id)arg2 andCallback:(id)arg3;
- (id)getBannerImageByName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (id)getFocusImageByName:(id)arg1 Url:(id)arg2 AndCallback:(id)arg3;
- (id)getQQFriendImageByNode:(id)arg1 AndCallback:(id)arg2;
- (id)getClusterImageBy:(id)arg1 AndCallback:(id)arg2;
- (void)downloadFail:(id)arg1;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (BOOL)distinctByInfo:(id)arg1;
- (void)DelayToRequestFromServerNext;
- (void)addItem:(id)arg1;
- (id)buildItem:(id)arg1 ImageOption:(int)arg2 Callback:(id)arg3 AndObject:(id)arg4 ignoreLocalFile:(BOOL)arg5;
- (id)buildItem:(id)arg1 ImageOption:(int)arg2 Callback:(id)arg3 AndObject:(id)arg4;
- (void)dealloc;
- (id)init;

@end

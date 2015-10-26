//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChannelInfoProtocol.h"

@class FolderInfo;

__attribute__((visibility("hidden")))
@interface ChannelInfoCGIProtocol : ChannelInfoProtocol
{
    unsigned long _uin;
    BOOL _calledByPersistPush;
    BOOL _refreshPic;
    FolderInfo *_folder;
    int _from;
}

@property(nonatomic) BOOL refreshPic; // @synthesize refreshPic=_refreshPic;
@property(nonatomic) int from; // @synthesize from=_from;
@property(nonatomic) BOOL calledByPersistPush; // @synthesize calledByPersistPush=_calledByPersistPush;
@property(retain, nonatomic) FolderInfo *folder; // @synthesize folder=_folder;
- (void).cxx_destruct;
- (BOOL)hasNextPage;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUrl;
- (id)initWithFolderInfo:(id)arg1 Uin:(unsigned long)arg2;
- (id)initWithFolderInfo:(id)arg1;
- (id)initWithChannelItemKey:(id)arg1;

@end


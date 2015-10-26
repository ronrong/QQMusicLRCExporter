//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ListBase.h"

#import "ListTagDelegate.h"
#import "ProtocolHostDelegate.h"

@class MyFriendsProtocol, MyMusic, NSMutableArray, NSString, TreeNode;

__attribute__((visibility("hidden")))
@interface MyMusicManager : ListBase <ProtocolHostDelegate, ListTagDelegate>
{
    ListBase *myFriensList;
    ListBase *favorite;
    MyFriendsProtocol *myFriendsProtocol;
    TreeNode *tree;
    NSMutableArray *protocolArray;
    MyMusic *_myMusic;
    NSMutableArray *_recentPlaySongsBeforeDataReady;
}

+ (BOOL)canBeRequested:(id)arg1;
+ (BOOL)canBeAddToCollectExcpetLove:(id)arg1;
+ (id)translateReqSongRecordFromNode:(struct _xmlDoc *)arg1 node:(struct _xmlNode *)arg2;
+ (id)translateQQFriendFromNode:(struct _xmlNode *)arg1;
+ (id)translateQQGroupFromNode:(struct _xmlNode *)arg1;
+ (id)sharedMyMusicManager;
@property(retain) NSMutableArray *recentPlaySongsBeforeDataReady; // @synthesize recentPlaySongsBeforeDataReady=_recentPlaySongsBeforeDataReady;
@property(readonly) MyMusic *myMusic; // @synthesize myMusic=_myMusic;
- (void).cxx_destruct;
- (void)addLocalSongsStatic;
- (void)showSelectMyMusicFolder:(id)arg1 vcFrom:(id)arg2;
- (id)getCachedRecentPlaySongInfoBeforeDataReady;
- (void)setRecentPlaySongInfo:(id)arg1;
- (void)initMyMusic;
- (void)delayForProceessProtocol;
- (void)hostCallBackWithWorkProtocol:(id)arg1 Result:(int)arg2;
- (void)getFriendsInfo:(id)arg1 Fresh:(BOOL)arg2;
- (void)getGroupInfo:(BOOL)arg1;
- (void)expandNode:(id)arg1;
@property(readonly, nonatomic) ListBase *myFriensList; // @synthesize myFriensList;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

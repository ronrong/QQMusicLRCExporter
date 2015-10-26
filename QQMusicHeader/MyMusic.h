//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FolderInfo, ListBase, MyMusicSearch, NSArray;

__attribute__((visibility("hidden")))
@interface MyMusic : NSObject
{
    ListBase *_iPodSongsList;
    ListBase *_recentPlaySongsList;
    FolderInfo *_iPodFolder;
    FolderInfo *_recentPlayFolder;
    int _eMyMusicStatus;
    MyMusicSearch *_myMusicSearch;
    NSArray *_allSongs;
    NSArray *_albums;
    NSArray *_singers;
    ListBase *_allsongsList;
    ListBase *_albumsList;
    ListBase *_singersList;
    ListBase *_albumSongsList;
    ListBase *_singerSongsList;
    NSArray *_allSongsIndexItems;
    NSArray *_albumsIndexItems;
    NSArray *_singersIndexItems;
    NSArray *_albumSongsIndexItems;
    NSArray *_singerSongsIndexItems;
    NSArray *_iPodSongsIndexItems;
}

@property(retain) NSArray *iPodSongsIndexItems; // @synthesize iPodSongsIndexItems=_iPodSongsIndexItems;
@property(retain) NSArray *singerSongsIndexItems; // @synthesize singerSongsIndexItems=_singerSongsIndexItems;
@property(retain) NSArray *albumSongsIndexItems; // @synthesize albumSongsIndexItems=_albumSongsIndexItems;
@property(retain) NSArray *singersIndexItems; // @synthesize singersIndexItems=_singersIndexItems;
@property(retain) NSArray *albumsIndexItems; // @synthesize albumsIndexItems=_albumsIndexItems;
@property(retain) NSArray *allSongsIndexItems; // @synthesize allSongsIndexItems=_allSongsIndexItems;
@property(retain) ListBase *singerSongsList; // @synthesize singerSongsList=_singerSongsList;
@property(retain) ListBase *albumSongsList; // @synthesize albumSongsList=_albumSongsList;
@property(retain) ListBase *singersList; // @synthesize singersList=_singersList;
@property(retain) ListBase *albumsList; // @synthesize albumsList=_albumsList;
@property(retain) ListBase *allsongsList; // @synthesize allsongsList=_allsongsList;
@property(retain) NSArray *singers; // @synthesize singers=_singers;
@property(retain) NSArray *albums; // @synthesize albums=_albums;
@property(retain) NSArray *allSongs; // @synthesize allSongs=_allSongs;
@property(readonly) MyMusicSearch *myMusicSearch; // @synthesize myMusicSearch=_myMusicSearch;
@property(readonly) int eMyMusicStatus; // @synthesize eMyMusicStatus=_eMyMusicStatus;
@property(readonly) FolderInfo *recentPlayFolder; // @synthesize recentPlayFolder=_recentPlayFolder;
@property(readonly) FolderInfo *iPodFolder; // @synthesize iPodFolder=_iPodFolder;
- (void).cxx_destruct;
- (int)songDownloadStatus:(id)arg1;
- (void)deleteRecentPlayBySongArray:(id)arg1 updateAll:(BOOL)arg2;
- (id)_findSongInfoInFolderSongs:(id)arg1 songInfo:(id)arg2;
- (id)findSongInfoInFolderSongs:(id)arg1 songInfo:(id)arg2;
- (BOOL)findSongInRecentPlay:(id)arg1;
- (unsigned int)getRecentPlayMaxCount;
- (BOOL)_limitRecentPlayFolderSongs:(BOOL)arg1 deleteEntryFile:(char *)arg2;
- (void)onRecentPlayMaxCountMaybeChange;
- (void)setRecentPlaySongInfo:(id)arg1;
- (void)_onRecentPlayCountChange:(id)arg1;
- (void)_flushRecentPlaySongsBeforeDataReady;
- (void)_insertRecentPlaySongInfo:(id)arg1;
- (void)cleanRecentPlayList;
- (BOOL)tryDeleteDiskFileBySongInfo:(id)arg1;
- (void)deleteSongsFromAllMusic:(id)arg1 isLocalMode:(BOOL)arg2;
- (void)onCloudFolderLoaded;
- (void)onRecentPlayAndIPodSongsLoaded;
- (void)onDownloadedSongLoaded;
- (void)onSomeThingLoaded;
- (void)deleteIPodBySongInfo:(id)arg1;
- (int)getAllSongsLocalCount;
- (int)getAllSongsTotalCount;
- (void)updateSongErr:(id)arg1;
- (void)upLocalListToCloud;
- (void)updateAll;
- (id)createIndexItemsByClusterInfos:(id)arg1;
- (void)tryRestorePlaylist;
- (void)updateSongListforKey:(id)arg1 inArray:(id)arg2 toResult:(id)arg3 isAlbum:(BOOL)arg4;
- (void)sortClusterInfo:(id)arg1;
- (void)sortAllSongs:(id)arg1;
- (int)compareClusterInfo:(id)arg1 clusterInfo2:(id)arg2;
- (int)compareNameIndex:(id)arg1 nameIndex2:(id)arg2;
- (void)addFolderSongs:(id)arg1 toAllSongs:(id)arg2 withLocalPlayMode:(BOOL)arg3;
- (id)getBackupArray:(id)arg1;
- (void)addFolderSong:(id)arg1 toAlbums:(id)arg2 andSingers:(id)arg3;
- (void)addFolderSong:(id)arg1 toAllSongs:(id)arg2 withLocalPlayMode:(BOOL)arg3;
- (void)addSong:(id)arg1 expInfo:(id)arg2 toAllSongs:(id)arg3 withLocalPlayMode:(BOOL)arg4 careOpType:(BOOL)arg5;
- (void)onActiveAlbumSong:(id)arg1;
- (void)onActiveSingerSong:(id)arg1;
- (void)reloadData;
- (id)loadFolderInfo:(unsigned long)arg1 folderId:(int)arg2 FolderType:(int)arg3 Tid:(long long)arg4;
- (id)loadListBase:(int)arg1;
- (id)getIndexItemsByListTagType:(int)arg1;
- (void)_checkRecentPlayExistWrongiPodFile;
- (void)asynScanIpodFile:(BOOL)arg1;
- (unsigned int)findMediaItemInArray:(id)arg1 bySongID:(long long)arg2;
- (id)init;

@end


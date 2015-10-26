//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SongFolderListItem.h"

@class MusicCluster, NSString;

__attribute__((visibility("hidden")))
@interface CategoricalSongFolderListItem : SongFolderListItem
{
    BOOL _songShowFlag;
    BOOL _albumShowFlag;
    BOOL _mvShowFlag;
    BOOL _gedanShowFlag;
    int _categoryId;
    int _sortId;
    int _fenleipindaoId;
    NSString *_categoryName;
    NSString *_categoryDesc;
    NSString *_coverPicUrl;
    NSString *_coverIconUrl;
    NSString *_themeUrl;
    NSString *_coverColor;
    int *_categorySubId;
    MusicCluster *_songsCluster;
    MusicCluster *_albumsCluster;
    MusicCluster *_mvsCluster;
    MusicCluster *_songListsCluster;
    int _from;
}

@property(nonatomic) BOOL gedanShowFlag; // @synthesize gedanShowFlag=_gedanShowFlag;
@property(nonatomic) BOOL mvShowFlag; // @synthesize mvShowFlag=_mvShowFlag;
@property(nonatomic) BOOL albumShowFlag; // @synthesize albumShowFlag=_albumShowFlag;
@property(nonatomic) BOOL songShowFlag; // @synthesize songShowFlag=_songShowFlag;
@property(nonatomic) int from; // @synthesize from=_from;
@property(retain, nonatomic) MusicCluster *songListsCluster; // @synthesize songListsCluster=_songListsCluster;
@property(retain, nonatomic) MusicCluster *mvsCluster; // @synthesize mvsCluster=_mvsCluster;
@property(retain, nonatomic) MusicCluster *albumsCluster; // @synthesize albumsCluster=_albumsCluster;
@property(retain, nonatomic) MusicCluster *songsCluster; // @synthesize songsCluster=_songsCluster;
@property(nonatomic) int *categorySubId; // @synthesize categorySubId=_categorySubId;
@property(retain, nonatomic) NSString *coverColor; // @synthesize coverColor=_coverColor;
@property(retain, nonatomic) NSString *themeUrl; // @synthesize themeUrl=_themeUrl;
@property(retain, nonatomic) NSString *coverIconUrl; // @synthesize coverIconUrl=_coverIconUrl;
@property(retain, nonatomic) NSString *coverPicUrl; // @synthesize coverPicUrl=_coverPicUrl;
@property(retain, nonatomic) NSString *categoryDesc; // @synthesize categoryDesc=_categoryDesc;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(nonatomic) int fenleipindaoId; // @synthesize fenleipindaoId=_fenleipindaoId;
@property(nonatomic) int sortId; // @synthesize sortId=_sortId;
@property(nonatomic) int categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
- (int)ein;
- (BOOL)hasMoreData;
- (id)key;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicCluster.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MVInfo : MusicCluster
{
    NSString *_videoId;
    NSString *_videoName;
    unsigned long _singerId;
    NSString *_singerName;
    NSString *_publishDate;
    int _duration;
    NSString *_subTitle;
    int _canNotPlay;
    NSString *_localMVPath;
    NSString *_downloadURL;
}

+ (id)translateFromSongInfo:(id)arg1;
+ (id)translateMVToSongInfo:(id)arg1;
+ (id)filterCanNotPlayMVInfos:(id)arg1;
+ (id)translateMVFromJsonData:(id)arg1;
+ (id)translateMVFromNode:(struct _xmlNode *)arg1 containHilightInfo:(BOOL)arg2 expInfo:(id *)arg3;
@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(copy, nonatomic) NSString *localMVPath; // @synthesize localMVPath=_localMVPath;
@property(nonatomic) int canNotPlay; // @synthesize canNotPlay=_canNotPlay;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *publishDate; // @synthesize publishDate=_publishDate;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(nonatomic) unsigned long singerId; // @synthesize singerId=_singerId;
@property(copy, nonatomic) NSString *videoName; // @synthesize videoName=_videoName;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (id)initWithMVMid:(id)arg1;

@end

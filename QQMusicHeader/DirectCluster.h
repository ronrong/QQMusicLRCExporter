//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicCluster.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DirectCluster : MusicCluster
{
    NSString *searchId;
    int directReachType;
    NSString *maindiscription;
    NSString *subDiscription;
    unsigned long long id_;
    int zhiDaSin;
    int zhiDaEin;
    int zhiDaSum;
    BOOL _showFlag;
    BOOL _buluoFlag;
    NSString *jumpURL;
    unsigned long _singerUin;
    int _singerType;
}

@property(nonatomic) BOOL buluoFlag; // @synthesize buluoFlag=_buluoFlag;
@property(nonatomic) BOOL showFlag; // @synthesize showFlag=_showFlag;
@property(nonatomic) int singerType; // @synthesize singerType=_singerType;
@property(nonatomic) unsigned long singerUin; // @synthesize singerUin=_singerUin;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId;
@property(nonatomic) int zhiDaSum; // @synthesize zhiDaSum;
@property(nonatomic) int zhiDaSin; // @synthesize zhiDaSin;
@property(nonatomic) int zhiDaEin; // @synthesize zhiDaEin;
@property(nonatomic) unsigned long long id_; // @synthesize id_;
@property(nonatomic) int directReachType; // @synthesize directReachType;
@property(retain, nonatomic) NSString *jumpURL; // @synthesize jumpURL;
@property(retain, nonatomic) NSString *subDiscription; // @synthesize subDiscription;
@property(retain, nonatomic) NSString *maindiscription; // @synthesize maindiscription;
- (void).cxx_destruct;
- (id)getResType;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ClusterInfo.h"

@class NSString, SongInfo;

__attribute__((visibility("hidden")))
@interface ReqSongRecordInfo : ClusterInfo
{
    unsigned long m_iQQNumberFrom;
    unsigned long m_iQQNumberTo;
    BOOL m_bReceived;
    unsigned long m_iReqSeq;
    SongInfo *song;
    NSString *m_stringMessage;
    NSString *m_stringMessageWithName;
    NSString *m_stringNickNameFrom;
    NSString *m_stringNickNameTo;
    unsigned long m_iReqTime;
    unsigned long m_iMessageHeight;
    int m_eCanBePlay;
    int m_ePlayStatusForRecordInfo;
}

@property(nonatomic) int m_ePlayStatusForRecordInfo; // @synthesize m_ePlayStatusForRecordInfo;
@property(retain, nonatomic) NSString *m_stringNickNameTo; // @synthesize m_stringNickNameTo;
@property(nonatomic) int m_eCanBePlay; // @synthesize m_eCanBePlay;
@property(nonatomic) unsigned long m_iMessageHeight; // @synthesize m_iMessageHeight;
@property(retain, nonatomic) NSString *m_stringNickNameFrom; // @synthesize m_stringNickNameFrom;
@property(nonatomic) unsigned long m_iReqTime; // @synthesize m_iReqTime;
@property(retain, nonatomic) NSString *m_stringMessageWithName; // @synthesize m_stringMessageWithName;
@property(retain, nonatomic) NSString *m_stringMessage; // @synthesize m_stringMessage;
@property(nonatomic) unsigned long m_iReqSeq; // @synthesize m_iReqSeq;
@property(nonatomic) BOOL m_bReceived; // @synthesize m_bReceived;
@property(nonatomic) unsigned long m_iQQNumberTo; // @synthesize m_iQQNumberTo;
@property(nonatomic) unsigned long m_iQQNumberFrom; // @synthesize m_iQQNumberFrom;
@property(retain, nonatomic) SongInfo *song; // @synthesize song;
- (void).cxx_destruct;
- (id)img100Url;
- (id)m100Face;
- (id)imgUrl;
- (id)mFace;

@end


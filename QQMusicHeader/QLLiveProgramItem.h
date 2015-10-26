//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface QLLiveProgramItem : NSObject
{
    BOOL _liveProgramEnd;
    BOOL _liveProgramPlaying;
    BOOL _liveProgramRecommended;
    NSString *ptime;
    NSString *pname;
    NSString *pid;
    unsigned int _liveProgramStatus;
    NSString *_liveProgramChannelID;
    NSString *_liveProgramCID;
    NSString *_liveProgramStreamID;
    NSString *_liveProgramStreamURL;
    NSString *_liveProgramTitle;
    NSDate *_liveProgramDateWithTime;
    NSString *_liveProgramID;
}

+ (id)liveProgramItemWithEntity:(id)arg1;
@property(copy, nonatomic) NSString *liveProgramID; // @synthesize liveProgramID=_liveProgramID;
@property(retain, nonatomic) NSDate *liveProgramDateWithTime; // @synthesize liveProgramDateWithTime=_liveProgramDateWithTime;
@property(copy, nonatomic) NSString *liveProgramTitle; // @synthesize liveProgramTitle=_liveProgramTitle;
@property(copy, nonatomic) NSString *liveProgramStreamURL; // @synthesize liveProgramStreamURL=_liveProgramStreamURL;
@property(copy, nonatomic) NSString *liveProgramStreamID; // @synthesize liveProgramStreamID=_liveProgramStreamID;
@property(copy, nonatomic) NSString *liveProgramCID; // @synthesize liveProgramCID=_liveProgramCID;
@property(copy, nonatomic) NSString *liveProgramChannelID; // @synthesize liveProgramChannelID=_liveProgramChannelID;
@property(nonatomic) unsigned int liveProgramStatus; // @synthesize liveProgramStatus=_liveProgramStatus;
@property(nonatomic) BOOL liveProgramRecommended; // @synthesize liveProgramRecommended=_liveProgramRecommended;
@property(nonatomic) BOOL liveProgramPlaying; // @synthesize liveProgramPlaying=_liveProgramPlaying;
@property(nonatomic) BOOL liveProgramEnd; // @synthesize liveProgramEnd=_liveProgramEnd;
@property(copy, nonatomic) NSString *pid; // @synthesize pid;
@property(copy, nonatomic) NSString *pname; // @synthesize pname;
@property(copy, nonatomic) NSString *ptime; // @synthesize ptime;
@property(readonly, copy, nonatomic) NSString *liveProgramDate;
@property(readonly, copy, nonatomic) NSString *liveProgramTime;
- (void)parseDictionary:(id)arg1;
- (id)initWithEntity:(id)arg1;
- (void)dealloc;

@end

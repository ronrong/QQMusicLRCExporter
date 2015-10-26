//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SonosPlayer.h"

@class NSArray, NSString, QPlaySpeaker;

__attribute__((visibility("hidden")))
@interface SonosPlayerGroup : SonosPlayer
{
    BOOL _isEmpty;
    BOOL _ignoreAVTmetadataEvents;
    BOOL _receivedAVTURIeventAfterGainingControl;
    int _state;
    BOOL _canChangeVolume;
    NSString *_householdID;
    NSString *_groupId;
    QPlaySpeaker *_executiveSpeaker;
    NSArray *_speakers;
}

+ (id)keyPathsForValuesAffectingName;
+ (id)groupWithId:(id)arg1 controlPoint:(id)arg2;
@property(retain, nonatomic) NSArray *speakers; // @synthesize speakers=_speakers;
@property(retain, nonatomic) QPlaySpeaker *executiveSpeaker; // @synthesize executiveSpeaker=_executiveSpeaker;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *householdID; // @synthesize householdID=_householdID;
@property(nonatomic) BOOL canChangeVolume; // @synthesize canChangeVolume=_canChangeVolume;
- (void).cxx_destruct;
- (id)speakerForIdentifier:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setQplayAuthed:(BOOL)arg1;
- (BOOL)qplayAuthed;
- (void)setAuthed:(BOOL)arg1;
- (BOOL)authed;
- (id)getHLogoName;
- (id)getLogoName;
- (void)getMute;
- (float)getSpeakerCurrentVolume;
- (void)didReceiveGRCValue:(id)arg1 forKey:(id)arg2;
- (id)getMuteKey;
- (id)getVolumeKey;
- (void)updateVolumeFromEvent:(int)arg1;
- (void)setMute:(BOOL)arg1;
- (void)sendVolumeAction:(id)arg1;
- (void)setVolume:(float)arg1 filter:(BOOL)arg2;
- (void)startVolumechange;
- (void)setState:(int)arg1;
- (int)state;
@property(nonatomic) BOOL receivedAVTURIeventAfterGainingControl;
@property(nonatomic) BOOL isEmpty;
- (BOOL)isEqualContent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)getAllNeededServices;
- (void)dealloc;
- (id)QPlayVersion;
- (id)name;
- (id)manufacturer;
- (id)modelName;
- (id)identifier;
- (id)initWithId:(id)arg1 controlPoint:(id)arg2;

@end


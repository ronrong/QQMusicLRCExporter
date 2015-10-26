//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDHmiProvider.h"

@class IDMultimediaInfo, IDStatusBar, NSDictionary, NSString;

@interface IDRhmiFeatureListMediaRadioHmiProvider : NSObject <IDHmiProvider>
{
    IDMultimediaInfo *_multimediaInfo;
    IDStatusBar *_hmiStatusBar;
    NSDictionary *_viewDict;
    NSDictionary *_modelDict;
}

@property(retain) NSDictionary *modelDict; // @synthesize modelDict=_modelDict;
@property(retain) NSDictionary *viewDict; // @synthesize viewDict=_viewDict;
@property(retain) IDStatusBar *hmiStatusBar; // @synthesize hmiStatusBar=_hmiStatusBar;
@property(retain) IDMultimediaInfo *multimediaInfo; // @synthesize multimediaInfo=_multimediaInfo;
- (void).cxx_destruct;
- (id)allViews;
- (id)viewForId:(int)arg1;
- (id)allModels;
- (id)modelForId:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


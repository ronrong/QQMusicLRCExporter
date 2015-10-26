//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SimpleDownloadTaskDelegate.h"
#import "SongLengthVerifierDelegate.h"

@class NSMutableArray, NSString, SongLengthVerifier;

__attribute__((visibility("hidden")))
@interface DownloadedSongValidator : NSObject <SongLengthVerifierDelegate, SimpleDownloadTaskDelegate>
{
    NSMutableArray *_validatingSongs;
    SongLengthVerifier *_currentVerifier;
}

+ (id)sharedValidator;
@property(retain) SongLengthVerifier *currentVerifier; // @synthesize currentVerifier=_currentVerifier;
@property(retain, nonatomic) NSMutableArray *validatingSongs; // @synthesize validatingSongs=_validatingSongs;
- (void).cxx_destruct;
- (void)downloadTask:(id)arg1 didDownloadFailed:(id)arg2;
- (void)downloadTask:(id)arg1 didDownloadSuccessWithFile:(id)arg2;
- (void)songLengthVerifyDidFinish:(id)arg1;
- (id)_getRealSongFileName:(id)arg1;
- (int)_getSongTypeFromFileName:(id)arg1;
- (long long)_getSongIDFromFileName:(id)arg1;
- (void)moveRedownloadSongFiles;
- (BOOL)hasPendingRedownloadSongsForMoving;
- (void)validateSong:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


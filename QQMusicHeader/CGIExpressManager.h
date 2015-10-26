//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CGIExpressData, NSMutableData, NSMutableSet, NSURLConnection;

__attribute__((visibility("hidden")))
@interface CGIExpressManager : NSObject
{
    NSURLConnection *_connection;
    int _statusCode;
    NSMutableData *_data;
    CGIExpressData *_cgiExpressData;
    NSMutableSet *_hijackedOriginalHosts;
}

+ (id)sharedInstance;
@property(retain) NSMutableSet *hijackedOriginalHosts; // @synthesize hijackedOriginalHosts=_hijackedOriginalHosts;
@property(retain) CGIExpressData *cgiExpressData; // @synthesize cgiExpressData=_cgiExpressData;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property int statusCode; // @synthesize statusCode=_statusCode;
@property(retain) NSURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)createDefault;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)_translateFromServerData:(id)arg1;
- (id)_splitString:(id)arg1;
- (void)_loadFromServer;
- (void)_saveToLocalFile:(id)arg1;
- (void)_loadFromLocalFile;
- (id)_getLocalFilePath;
- (BOOL)canRetry:(id)arg1;
- (int)getSuccessReportRate;
- (void)setHostHijacked:(id)arg1 isIp:(BOOL)arg2 forOriginalHost:(id)arg3;
- (id)getBakupHostIfHijacked:(id)arg1 pIsIp:(char *)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ClusterInfo.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DownloadBasicInfo : ClusterInfo
{
    NSString *download_url;
    NSString *saveFilePath;
    float download_percent;
    int download_state;
    long storeDataTotalLenth;
    long currentStoredDataLength;
}

@property(nonatomic) long currentStoredDataLength; // @synthesize currentStoredDataLength;
@property(nonatomic) long storeDataTotalLenth; // @synthesize storeDataTotalLenth;
@property(nonatomic) int download_state; // @synthesize download_state;
@property(nonatomic) float download_percent; // @synthesize download_percent;
@property(readonly, nonatomic) NSString *saveFilePath; // @synthesize saveFilePath;
@property(readonly, nonatomic) NSString *download_url; // @synthesize download_url;
- (void).cxx_destruct;
- (id)saveFilePathWithUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 AndSaveFilePath:(id)arg2;

@end


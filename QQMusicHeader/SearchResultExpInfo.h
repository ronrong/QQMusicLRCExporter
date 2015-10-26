//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExpInfo.h"

@class ListBase;

__attribute__((visibility("hidden")))
@interface SearchResultExpInfo : ExpInfo
{
    BOOL hasMoreVersions;
    BOOL bExpanded;
    BOOL bSubVersion;
    ListBase *moreVersionList;
    int pos;
    int subpos;
}

@property int subpos; // @synthesize subpos;
@property int pos; // @synthesize pos;
@property(retain) ListBase *moreVersionList; // @synthesize moreVersionList;
@property BOOL bSubVersion; // @synthesize bSubVersion;
@property BOOL bExpanded; // @synthesize bExpanded;
@property BOOL hasMoreVersions; // @synthesize hasMoreVersions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)clone;
- (void)assign:(id)arg1;
- (id)init;

@end

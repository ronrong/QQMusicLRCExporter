//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface QQFriendsGroupItem : NSObject
{
    int _groupid;
    NSString *_name;
    int _totalnum;
}

+ (id)tranlateToQQFriendsGroupItemFromJsonData:(id)arg1;
@property(nonatomic) int totalnum; // @synthesize totalnum=_totalnum;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int groupid; // @synthesize groupid=_groupid;
- (void).cxx_destruct;

@end

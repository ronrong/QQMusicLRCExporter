//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProtocolAuthBase.h"

@class NSString, TreeNode;

__attribute__((visibility("hidden")))
@interface MyFriendsProtocol : ProtocolAuthBase
{
    TreeNode *tree;
    NSString *groupId;
    NSString *groupDv;
    int reqType;
}

@property(nonatomic) int reqType; // @synthesize reqType;
@property(retain, nonatomic) NSString *groupDv; // @synthesize groupDv;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId;
@property(retain, nonatomic) TreeNode *tree; // @synthesize tree;
- (void).cxx_destruct;
- (void)onParseXmlData:(struct _xmlDoc *)arg1;
- (void)onAddDataInRoot:(struct _xmlNode *)arg1;
- (id)getUser;
- (id)getUrl;
- (int)cid;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ForMeLink, ForMeRecData, ForMeShareData, FriendShareData, UITableViewCell;

@protocol ForMeDelegate <NSObject>
- (float)heighetForData:(id)arg1 AtRow:(int)arg2;
- (void)doReloadCell:(UITableViewCell *)arg1;
- (void)doClickLink:(ForMeLink *)arg1;
- (void)doClickMainImgageAction:(ForMeRecData *)arg1;
- (void)doPlayOrPauseAction:(ForMeRecData *)arg1;
- (void)doOrderAction:(ForMeRecData *)arg1;
- (void)doFavAction:(ForMeRecData *)arg1;
- (void)doZanAction:(ForMeShareData *)arg1;
- (void)doFavShareAction:(FriendShareData *)arg1 atIndex:(int)arg2;
- (void)doZanShareAction:(FriendShareData *)arg1 atIndex:(int)arg2;
@end


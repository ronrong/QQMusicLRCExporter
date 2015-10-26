//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITapGestureRecognizer;

@protocol P_QLMPlayerControlDelegate <NSObject>
- (void)playerDidClickBackButton:(id)arg1;
- (void)playerControlDidClickPlay:(id)arg1;
- (void)playerControlDidClickShare:(id)arg1;
- (void)playerControlDidClickDownload:(id)arg1;
- (void)playerControlDidClickFavorite:(BOOL)arg1;
- (void)playerControlSeekEnd:(double)arg1;
- (void)playerControlSeekTo:(double)arg1;
- (void)playerControlSeekBegin:(double)arg1;

@optional
- (void)playerControlDidHideAllControlViews;
- (void)playerControlDidShowAllControlViews;
- (void)playerControlPlayerDidSinggleTag:(UITapGestureRecognizer *)arg1;
- (void)playerControlActionStatus:(unsigned int)arg1;
@end


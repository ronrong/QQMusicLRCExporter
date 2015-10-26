//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SkinViewController_Comment.h"

#import "CommentCellDelegate.h"
#import "EGORefreshTableHeaderDelegate.h"
#import "HPGrowingTextViewDelegate.h"
#import "QMTableViewProtocol.h"

@class CommentEditor, CommentLoader, EGORefreshTableHeaderView, NSString, SongListItem;

__attribute__((visibility("hidden")))
@interface CommentViewController : SkinViewController_Comment <CommentCellDelegate, QMTableViewProtocol, HPGrowingTextViewDelegate, EGORefreshTableHeaderDelegate>
{
    SongListItem *_songListItem;
    CommentLoader *_loader;
    CommentEditor *_editor;
    EGORefreshTableHeaderView *_refreshTableHeaderView;
}

@property(retain, nonatomic) EGORefreshTableHeaderView *refreshTableHeaderView; // @synthesize refreshTableHeaderView=_refreshTableHeaderView;
@property(retain, nonatomic) CommentEditor *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) CommentLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) SongListItem *songListItem; // @synthesize songListItem=_songListItem;
- (void).cxx_destruct;
- (void)doCommentPost:(id)arg1;
- (id)_errorMsgForWorkResult:(int)arg1;
- (void)_increaseCommentCount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)commentCell:(id)arg1 didClickCreator:(id)arg2;
- (BOOL)moreDataIsLoading:(id)arg1;
- (void)processingLoadMoreAction:(id)arg1;
- (BOOL)hasMoreDataInTableView:(id)arg1;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (struct UIEdgeInsets)getScrollViewOriginOffset;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)vcType;
- (void)reFresh;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


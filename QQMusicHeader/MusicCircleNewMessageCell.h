//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMusicCell.h"

#import "ImageManagerDelegate.h"
#import "QMCreatorViewDelegate.h"

@class MusicCircleActionInfo, NSString, OHAttributedLabel, QMCreatorView, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MusicCircleNewMessageCell : QQMusicCell <ImageManagerDelegate, QMCreatorViewDelegate>
{
    id <MusicCircleCellDelegate> _delegate;
    MusicCircleActionInfo *_circleActionInfo;
    UIImageView *_albumCover;
    UIImageView *_likeImage;
    OHAttributedLabel *_commentLable;
    QMCreatorView *_creatorView;
    UILabel *_timeLabel;
    UIButton *_recommentButton;
}

@property(retain, nonatomic) UIButton *recommentButton; // @synthesize recommentButton=_recommentButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) QMCreatorView *creatorView; // @synthesize creatorView=_creatorView;
@property(retain, nonatomic) OHAttributedLabel *commentLable; // @synthesize commentLable=_commentLable;
@property(retain, nonatomic) UIImageView *likeImage; // @synthesize likeImage=_likeImage;
@property(retain, nonatomic) UIImageView *albumCover; // @synthesize albumCover=_albumCover;
@property(retain, nonatomic) MusicCircleActionInfo *circleActionInfo; // @synthesize circleActionInfo=_circleActionInfo;
@property(nonatomic) __weak id <MusicCircleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)qmCellType;
- (void)onImagetWithInfo:(id)arg1 ImageFile:(id)arg2;
- (void)recommentNewMessage:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateCommentLabel:(struct CGSize)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)commonInit;
- (id)init;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


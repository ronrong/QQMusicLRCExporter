//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class QMapTileView, UIView;

@interface QScrollView : UIScrollView
{
    QMapTileView *_tileView;
    struct CGRect _zoomRect;
    id <QTileDrawDelegate> _tileDrawDelegate;
}

@property(nonatomic) struct CGRect zoomRect; // @synthesize zoomRect=_zoomRect;
@property(readonly, nonatomic) UIView *tileView; // @synthesize tileView=_tileView;
- (void)updateTileView;
@property(nonatomic) id <QTileDrawDelegate> tileDrawDelegate; // @synthesize tileDrawDelegate=_tileDrawDelegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

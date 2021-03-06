//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QStreetView, QStreetViewOverlay;

@protocol QStreetViewDelegate <NSObject>

@optional
- (void)streetView:(QStreetView *)arg1 handleNetWorkResponse:(int)arg2;
- (void)streetView:(QStreetView *)arg1 didNofifyActionEvent:(int)arg2;
- (void)streetView:(QStreetView *)arg1 showParkView:(BOOL)arg2;
- (void)streetView:(QStreetView *)arg1 didNofifyGestureEvent:(int)arg2;
- (void)streetView:(QStreetView *)arg1 didSelectStreetViewOverlay:(QStreetViewOverlay *)arg2 clickPosition:(struct CGPoint)arg3 streetViewOverlayFrame:(struct CGRect)arg4;
- (void)streetView:(QStreetView *)arg1 didSelectStreetViewPoi:(int)arg2;
- (void)streetView:(QStreetView *)arg1 didSelectStreetViewOverlay:(QStreetViewOverlay *)arg2;
- (void)streetView:(QStreetView *)arg1 rotateWithNewPitch:(float)arg2 newYaw:(float)arg3;
- (void)streetView:(QStreetView *)arg1 changeWithNewLongitude:(double)arg2 newLatitude:(double)arg3;
- (void)streetView:(QStreetView *)arg1 streetViewShowState:(int)arg2;
- (void)streetViewDidLoad:(QStreetView *)arg1;
@end


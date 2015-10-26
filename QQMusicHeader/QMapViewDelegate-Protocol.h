//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, QAnnotationView, QMapView, QOverlayView, QUserLocation;

@protocol QMapViewDelegate <NSObject>

@optional
- (void)mapView:(QMapView *)arg1 didAddOverlayViews:(NSArray *)arg2;
- (QOverlayView *)mapView:(QMapView *)arg1 viewForOverlay:(id <QOverlay>)arg2;
- (void)mapView:(QMapView *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)mapView:(QMapView *)arg1 didUpdateUserLocation:(QUserLocation *)arg2;
- (void)mapViewDidStopLocatingUser:(QMapView *)arg1;
- (void)mapViewWillStartLocatingUser:(QMapView *)arg1;
- (void)mapView:(QMapView *)arg1 didDeselectAnnotationView:(QAnnotationView *)arg2;
- (void)mapView:(QMapView *)arg1 didSelectAnnotationView:(QAnnotationView *)arg2;
- (void)mapView:(QMapView *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (QAnnotationView *)mapView:(QMapView *)arg1 viewForAnnotation:(id <QAnnotation>)arg2;
- (void)mapView:(QMapView *)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(QMapView *)arg1 regionWillChangeAnimated:(BOOL)arg2;
@end


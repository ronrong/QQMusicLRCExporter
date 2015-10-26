//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QMapViewInternal, UIButton, UIImage;

@interface QAnnotationView : UIView
{
    id <QAnnotation> _annotation;
    NSString *_reuseIdentifier;
    UIImage *_image;
    struct CGPoint _centerOffset;
    struct CGPoint _calloutOffset;
    BOOL _isEnabled;
    BOOL _isHighlighted;
    BOOL _isSelected;
    BOOL _isCanShowCallout;
    UIView *_leftCalloutAccessoryView;
    UIView *_rightCalloutAccessoryView;
    UIButton *_imageButton;
    QMapViewInternal *_mapView;
    SEL _selShowCallOutView;
}

@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView; // @synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView; // @synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView;
@property(nonatomic) BOOL canShowCallout; // @synthesize canShowCallout=_isCanShowCallout;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_isSelected;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_isHighlighted;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_isEnabled;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset=_calloutOffset;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) id <QAnnotation> annotation; // @synthesize annotation=_annotation;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onTap:(id)arg1;
- (void)positionChanged:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


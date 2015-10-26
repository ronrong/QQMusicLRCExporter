//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QShape.h"

#import "QOverlay.h"

@class NSString;

@interface QCircle : QShape <QOverlay>
{
    CDStruct_2c43369c _coordinate;
    double _radius;
    CDStruct_02837cd9 _boundingMapRect;
}

+ (id)circleWithMapRect:(CDStruct_90e2a262)arg1;
+ (id)circleWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
- (void)initWithMapRect:(CDStruct_90e2a262)arg1;
- (void)initWithCenterCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface QMDirectionDownGestureRecognizer : UIGestureRecognizer
{
    unsigned int _direction;
    float _lineLenghtSoFar;
    struct CGPoint _startPoint;
}

@property(nonatomic) float lineLenghtSoFar; // @synthesize lineLenghtSoFar=_lineLenghtSoFar;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) unsigned int direction; // @synthesize direction=_direction;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (UIImageDataExpress)
+ (id)clipImageByNormalSectionRatio:(id)arg1 drawSize:(struct CGSize)arg2 innerGlow:(BOOL)arg3;
+ (id)clipImageByGoldenSectionRatio:(id)arg1 drawSize:(struct CGSize)arg2 innerGlow:(BOOL)arg3;
+ (id)clipImageByGoldenSectionRatio:(id)arg1 drawSize:(struct CGSize)arg2;
+ (id)chatBgImage:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)mergeImage:(id)arg1;
+ (id)mergeGridsImageLT2RB:(id)arg1;
+ (id)mergeGridsImageForDiscussFly:(id)arg1;
+ (id)mergeGridsImage:(id)arg1;
+ (id)borderImage:(id)arg1;
+ (id)roundIconImageWith:(id)arg1 diameter:(double)arg2 stretch:(_Bool)arg3;
+ (BOOL)pix2Screen;
- (id)framesWithSize:(struct CGSize)arg1;
- (id)qlStateImage:(id)arg1;
- (id)scaleToSizeForDoodle:(struct CGSize)arg1;
- (id)qlScaleToSizeNoTransparent:(struct CGSize)arg1;
- (id)qlScalToSuitSizeWithMaxShortSide:(float)arg1 maxLongSide:(float)arg2;
- (id)qlScaleToSize:(struct CGSize)arg1;
- (id)linghtImage;
- (void)drawGrayImageInRect:(struct CGRect)arg1;
- (BOOL)isTransparentImage;
- (id)grayImage;
- (id)roundCornerImageWithSize:(struct CGSize)arg1 cornerType:(int)arg2;
- (id)roundCornerImageWithMaxShortSide:(float)arg1 maxLongSide:(float)arg2 CornerType:(int)arg3;
- (id)roundCornerImageWithSize:(struct CGSize)arg1;
- (id)iconImageWithWidth:(double)arg1 cornerRadius:(double)arg2;
- (id)iconImageWithWidth:(double)arg1 cornerRadius:(double)arg2 border:(double)arg3 borderColor:(id)arg4;
- (BOOL)is3xScreen;
- (BOOL)is2xScreen;
@end


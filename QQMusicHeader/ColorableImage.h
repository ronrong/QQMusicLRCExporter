//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface ColorableImage : NSObject
{
    NSMutableSet *colorableImageNames;
    NSMutableArray *preDefineColorStyles;
    NSMutableArray *inTimeColorableImageNames;
    NSMutableArray *delayableColorableImageNames;
    NSMutableDictionary *_skinDic;
    NSString *_currentSkinName;
    NSMutableDictionary *_dicInMemoryImages;
    NSMutableArray *_inMemoryImages;
    NSMutableArray *_inMemoryImagesBackup;
    int _activityStyle;
}

+ (void)backgroudRefreshSkinStyle;
+ (struct SColorStyle)getBestColorStyleForColor:(unsigned long)arg1 fixHue:(short)arg2;
+ (void)checkOnFirstTimeLauch;
+ (id)getPreDefineColorStyles;
+ (BOOL)isColorStyleEqual:(struct SColorStyle)arg1 b:(struct SColorStyle)arg2;
+ (struct SColorStyle)getSystemBlueColorStyle;
+ (unsigned long)getColorByCurrentColorSyleForColor:(unsigned long)arg1;
+ (unsigned long)getColorByColorSyle:(struct SColorStyle)arg1 forColor:(unsigned long)arg2;
+ (struct SColorStyle)getColorStyleByColor:(unsigned long)arg1;
+ (struct SColorStyle)decodeColorStyle:(id)arg1;
+ (id)encodeColorStyle:(struct SColorStyle)arg1;
+ (void)refreshColorStyle;
+ (struct SColorStyle)getCurrentColorStyle;
+ (id)imageNamed:(id)arg1;
+ (void)backgroundApplyNewColorStyle;
+ (void)cleanMemoryCache;
+ (int)subStringCount:(id)arg1 subStr:(id)arg2;
+ (id)getUniqueNameByColorStyle:(struct SColorStyle)arg1 skinName:(id)arg2;
+ (id)sharedColorableImage;
@property int activityStyle; // @synthesize activityStyle=_activityStyle;
@property(retain) NSMutableArray *inMemoryImagesBackup; // @synthesize inMemoryImagesBackup=_inMemoryImagesBackup;
@property(retain) NSMutableArray *inMemoryImages; // @synthesize inMemoryImages=_inMemoryImages;
@property(retain) NSMutableDictionary *dicInMemoryImages; // @synthesize dicInMemoryImages=_dicInMemoryImages;
@property(retain) NSString *currentSkinName; // @synthesize currentSkinName=_currentSkinName;
@property(retain) NSMutableDictionary *skinDic; // @synthesize skinDic=_skinDic;
@property(retain) NSMutableArray *delayableColorableImageNames; // @synthesize delayableColorableImageNames;
@property(retain) NSMutableArray *inTimeColorableImageNames; // @synthesize inTimeColorableImageNames;
@property(retain) NSMutableArray *preDefineColorStyles; // @synthesize preDefineColorStyles;
@property(retain) NSMutableSet *colorableImageNames; // @synthesize colorableImageNames;
- (void).cxx_destruct;
- (void)_refreshSkinStyle;
- (int)getCurrentActivityStyle;
- (int)getCurrentColorType;
- (id)getColorForKey:(id)arg1;
- (void)backgroundConvertDelayableImages:(id)arg1;
- (void)onBackgroundApplyNewColorStyleFinish:(id)arg1;
- (void)_backgroundApplyNewColorStyle;
- (void)_deleteAllColorStyles;
- (BOOL)writeImage:(id)arg1 toFileAtPath:(id)arg2;
- (id)_imageNamed:(id)arg1;
- (id)_imageNamedFromFile:(id)arg1;
- (void)_loadSkinColorStyle;
- (id)styleOfString:(id)arg1 modelString:(id)arg2;
- (void)_defaultColorStyle;
- (void)_loadFromFile;
- (id)_getValueByKey:(id)arg1 fromContent:(id)arg2;
- (id)init;

@end

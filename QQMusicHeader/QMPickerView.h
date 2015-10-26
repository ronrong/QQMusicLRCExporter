//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BETouchView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSObject, NSString, UIImageView, UIPickerView, UIView;

__attribute__((visibility("hidden")))
@interface QMPickerView : BETouchView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <QMPickerViewDelegate> delegate;
    UIImageView *pickerBg;
    UIPickerView *pickerView_;
    NSArray *folders;
    NSObject *object;
    UIView *bgView;
}

@property(nonatomic) __weak NSObject *object; // @synthesize object;
@property(retain, nonatomic) NSArray *folders; // @synthesize folders;
@property(retain, nonatomic) UIPickerView *pickerView_; // @synthesize pickerView_;
@property(nonatomic) __weak id <QMPickerViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (void)selectedRowInComponent:(int)arg1;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)headerFinish:(id)arg1;
- (void)headerCancel:(id)arg1;
- (void)feedBack:(id)arg1;
- (void)hide;
- (void)hideOK;
- (void)show;
- (id)initWithDelegate:(id)arg1 andFolderLst:(id)arg2 withObject:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


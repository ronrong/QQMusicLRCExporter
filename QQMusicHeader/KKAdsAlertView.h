//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLLabelButtonDelegate.h"

@class KKAdImgLabelView, KKMediaRootViewController, NSString, QLLabelButton, UIButton, UILabel;

@interface KKAdsAlertView : UIView <QLLabelButtonDelegate>
{
    id <KKAdsAlertViewDelegate> _delegate;
    KKMediaRootViewController *_mainCtrl;
    UILabel *_alertTitleLabel;
    UILabel *_alertContentLabel;
    KKAdImgLabelView *_leftLabelView;
    KKAdImgLabelView *_middleLabelView;
    KKAdImgLabelView *_rightLabelView;
    UIView *_separatorLine;
    UILabel *_priceLabel;
    UIButton *_openHollywoodBtn;
    QLLabelButton *_bottomLabelBtn;
    UIView *_backImageView;
    UIButton *_xButton;
}

@property(retain, nonatomic) UIButton *xButton; // @synthesize xButton=_xButton;
@property(retain, nonatomic) UIView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) QLLabelButton *bottomLabelBtn; // @synthesize bottomLabelBtn=_bottomLabelBtn;
@property(retain, nonatomic) UIButton *openHollywoodBtn; // @synthesize openHollywoodBtn=_openHollywoodBtn;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) KKAdImgLabelView *rightLabelView; // @synthesize rightLabelView=_rightLabelView;
@property(retain, nonatomic) KKAdImgLabelView *middleLabelView; // @synthesize middleLabelView=_middleLabelView;
@property(retain, nonatomic) KKAdImgLabelView *leftLabelView; // @synthesize leftLabelView=_leftLabelView;
@property(retain, nonatomic) UILabel *alertContentLabel; // @synthesize alertContentLabel=_alertContentLabel;
@property(retain, nonatomic) UILabel *alertTitleLabel; // @synthesize alertTitleLabel=_alertTitleLabel;
@property KKMediaRootViewController *mainCtrl; // @synthesize mainCtrl=_mainCtrl;
@property id <KKAdsAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)show;
- (void)willMoveToSuperview:(id)arg1;
- (void)removeFromSuperview;
- (void)dismissAlert;
- (void)buttonClicked;
- (void)QLLabelButtonClicked;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


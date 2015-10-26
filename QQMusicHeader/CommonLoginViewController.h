//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LoginViewController.h"

#import "UITableViewDataSource.h"
#import "UITextFieldDelegate.h"
#import "ValViewControllerDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UIControl, UITextField;

__attribute__((visibility("hidden")))
@interface CommonLoginViewController : LoginViewController <ValViewControllerDelegate, UITextFieldDelegate, UITableViewDataSource>
{
    BOOL _needSecureCode;
    BOOL _isPushShow;
    UIButton *_loginBtn;
    UIButton *_cancelBtn;
    UIActivityIndicatorView *_loginACView;
    UIControl *_registerButton;
    UITextField *_qqNumberTextField;
    UITextField *_qqPasswordTextField;
    UIButton *_clearBtn;
}

@property(retain, nonatomic) UIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UITextField *qqPasswordTextField; // @synthesize qqPasswordTextField=_qqPasswordTextField;
@property(retain, nonatomic) UITextField *qqNumberTextField; // @synthesize qqNumberTextField=_qqNumberTextField;
@property(retain, nonatomic) UIControl *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) UIActivityIndicatorView *loginACView; // @synthesize loginACView=_loginACView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(nonatomic) BOOL isPushShow; // @synthesize isPushShow=_isPushShow;
@property(nonatomic) BOOL needSecureCode; // @synthesize needSecureCode=_needSecureCode;
- (void).cxx_destruct;
- (void)clearSearchText:(id)arg1;
- (void)doit;
- (void)privacyCtlButtonClicked:(id)arg1;
- (void)registerButtonClicked:(id)arg1;
- (BOOL)isValidInput:(id *)arg1;
- (void)cancleKeyboard:(id)arg1;
- (void)enbaleUI:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (void)textFieldTextChanged:(id)arg1;
- (void)inputFieldTouchDown:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onTouchupInsideDoneModal:(id)arg1;
- (void)ValViewControllerDidContinue:(id)arg1;
- (void)ValViewControllerDidCancel:(id)arg1;
- (id)createClearInputButton;
- (void)back:(id)arg1;
- (int)limitTableWidth;
- (void)headerFinish:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)getTableFooterView;
- (void)createNewUserAndPrivacyLabel;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

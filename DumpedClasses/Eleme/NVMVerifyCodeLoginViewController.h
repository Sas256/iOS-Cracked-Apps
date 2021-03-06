//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "NVMVerifyCodeLoginViewDelegate.h"
#import "NVMWeixinControllerDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, NVMCallingFooterView, NVMPhoneFieldDelegateHandler, NVMSNSUserProfile, NVMTimerButton, NVMVerifyCodeLoginView, UIButton, UITextField;

@interface NVMVerifyCodeLoginViewController : NVMViewController <UITextFieldDelegate, NVMVerifyCodeLoginViewDelegate, NVMWeixinControllerDelegate>
{
    _Bool _autoSendCode;
    CDUnknownBlockType _didLoginCompeletionHandler;
    NVMVerifyCodeLoginView *_verifyCodeLoginView;
    UITextField *_mobileTextField;
    UITextField *_codeTextFiled;
    NVMTimerButton *_sendButton;
    UIButton *_loginButton;
    NSString *_mobileNumber;
    NVMPhoneFieldDelegateHandler *_phoneFieldDelegateHandler;
    NSString *_verifyCode;
    NVMCallingFooterView *_callingFooter;
    NVMSNSUserProfile *_userProfile;
    unsigned long long _currentSNSType;
}

@property(nonatomic) unsigned long long currentSNSType; // @synthesize currentSNSType=_currentSNSType;
@property(retain, nonatomic) NVMSNSUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(nonatomic) __weak NVMCallingFooterView *callingFooter; // @synthesize callingFooter=_callingFooter;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(retain, nonatomic) NVMPhoneFieldDelegateHandler *phoneFieldDelegateHandler; // @synthesize phoneFieldDelegateHandler=_phoneFieldDelegateHandler;
@property(copy, nonatomic) NSString *mobileNumber; // @synthesize mobileNumber=_mobileNumber;
@property(nonatomic) __weak UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) __weak NVMTimerButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak UITextField *codeTextFiled; // @synthesize codeTextFiled=_codeTextFiled;
@property(nonatomic) __weak UITextField *mobileTextField; // @synthesize mobileTextField=_mobileTextField;
@property(retain, nonatomic) NVMVerifyCodeLoginView *verifyCodeLoginView; // @synthesize verifyCodeLoginView=_verifyCodeLoginView;
@property(copy, nonatomic) CDUnknownBlockType didLoginCompeletionHandler; // @synthesize didLoginCompeletionHandler=_didLoginCompeletionHandler;
@property(nonatomic) _Bool autoSendCode; // @synthesize autoSendCode=_autoSendCode;
- (void).cxx_destruct;
- (_Bool)controller:(id)arg1 shouldContinueRequestAfterGetAuthCode:(id)arg2;
- (void)controller:(id)arg1 didGetCode:(id)arg2;
- (void)initializeRiskInfoDict;
- (_Bool)validateCode;
- (_Bool)validateMobile;
- (id)code;
- (id)phoneNumber;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)dismissSelfAndNotify;
- (void)gotoLogWithPassword;
- (void)serviceAgreementButtonDidTouch;
- (void)verifyCodeLoginViewDidLoadCodeTextFiled:(id)arg1;
- (void)verifyCodeLoginViewDidLoadMobieTextFiled:(id)arg1;
- (void)verifyCodeLoginViewDidLoadCallingFooter:(id)arg1;
- (void)verifyCodeLoginViewDidLoadSendButton:(id)arg1;
- (void)verifyCodeLoginViewDidLoadLoginButton:(id)arg1;
- (void)dismissView:(_Bool)arg1;
- (void)gotoBindPhone;
- (CDUnknownBlockType)SNSLoginCompletionHandler;
- (void)enableNavigationBarButtons;
- (void)disableNavigationBarButtons;
- (void)loginWithSNSUserProfile:(id)arg1 snsType:(unsigned long long)arg2 mobileToken:(id)arg3;
- (CDUnknownBlockType)openIdCompletionHandler:(unsigned long long)arg1;
- (void)taobaoLogin;
- (void)weiboLogin;
- (void)QQLogin;
- (void)weixinLogin;
- (void)login;
- (void)showCaptchCodeGettingView;
- (void)handleSendCodeError:(id)arg1;
- (void)sendCode;
- (void)dealloc;
- (void)viewDidFirstAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


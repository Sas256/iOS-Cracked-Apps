//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSettingTableViewController.h"

#import "NMHttpRequestDelegate.h"
#import "NMNotConnectedProtocol.h"
#import "NMSettingBindingCellDelegate.h"
#import "UIAlertViewDelegate.h"

@class NMDeleteBindingRequest, NSArray, NSMutableArray, NSString;

@interface NMBindViewController : NMSettingTableViewController <NMHttpRequestDelegate, UIAlertViewDelegate, NMSettingBindingCellDelegate, NMNotConnectedProtocol>
{
    NMDeleteBindingRequest *_deleteBindingRequest;
    NSString *_mainType;
    NSMutableArray *_splitViewArray;
    long long _currentPlatformType;
    NSArray *_sectionNameArray;
    NSMutableArray *_loginTypeArray;
    _Bool _isWeiboBinded;
    _Bool _needUnbindPhoneNotice;
}

@property(nonatomic) _Bool needUnbindPhoneNotice; // @synthesize needUnbindPhoneNotice=_needUnbindPhoneNotice;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)settingBindingCellBindButtonClicked:(id)arg1;
- (void)processUnbind;
- (void)unbindCheckFailed:(id)arg1;
- (id)userIdForAccessToken:(long long)arg1;
- (void)processUnbindCheck;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)hasHeaderInSection:(long long)arg1;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (id)itemForIndexPath:(id)arg1;
- (id)createBindingCell;
- (double)heightForRowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (double)heightForSeparatorAtSection:(long long)arg1;
- (void)willLoadSeparatorView:(id)arg1 inSection:(long long)arg2;
- (long long)numberOfSections;
- (void)backAction:(id)arg1;
- (void)refreshView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

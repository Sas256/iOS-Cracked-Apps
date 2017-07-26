//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTTrain12306CodeViewDelegate.h"

@class CTTrain12306CodeView, NSDictionary, NSString;

@interface CTTrain12306BridgeCodeViewController : CTRootViewController <CTTrain12306CodeViewDelegate>
{
    NSDictionary *_codeInfo;
    CDUnknownBlockType _backJsBlock;
    CTTrain12306CodeView *_codeView;
    NSString *_codeModel;
    NSString *_howToUseUrl;
}

@property(copy, nonatomic) NSString *howToUseUrl; // @synthesize howToUseUrl=_howToUseUrl;
@property(retain, nonatomic) NSString *codeModel; // @synthesize codeModel=_codeModel;
@property(retain, nonatomic) CTTrain12306CodeView *codeView; // @synthesize codeView=_codeView;
@property(copy, nonatomic) CDUnknownBlockType backJsBlock; // @synthesize backJsBlock=_backJsBlock;
@property(retain, nonatomic) NSDictionary *codeInfo; // @synthesize codeInfo=_codeInfo;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)load12306CheckCode;
- (void)codeViewRefreshImage:(id)arg1;
- (void)onBackButton;
- (void)onConfirmButton:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

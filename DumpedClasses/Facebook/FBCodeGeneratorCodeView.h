//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBCodeGeneratorProgressView, UIButton, UILabel, UITapGestureRecognizer, UITextView;
@protocol FBCodeGeneratorCodeViewDelegate;

@interface FBCodeGeneratorCodeView : UIView
{
    UITextView *_codeView;
    FBCodeGeneratorProgressView *_progressIndicator;
    UIButton *_codesNotWorkingButton;
    UITapGestureRecognizer *_codeTapRecognizer;
    UILabel *_codeInstructionsLabel;
    id <FBCodeGeneratorCodeViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCodeGeneratorCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_tappedCodeNotWorking;
- (void)_tappedCode;
- (void)setCode:(id)arg1 countDownTime:(long long)arg2 countDownProgress:(double)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


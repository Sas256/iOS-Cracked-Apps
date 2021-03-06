//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

@class NSArray, UIButton, UITextField, UIView;

@interface FADigitalAlbumCustomNumberView : FAView
{
    NSArray *_numberArray;
    _Bool _isShowing;
    id <FADigitalAlbumCustomNumViewDelegate> _delegate;
    UITextField *_numInputField;
    UIView *_topView;
    UIView *_bgView;
    UIButton *_okButton;
    UIView *_btnContentView;
}

@property(retain, nonatomic) UIView *btnContentView; // @synthesize btnContentView=_btnContentView;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UITextField *numInputField; // @synthesize numInputField=_numInputField;
@property(nonatomic) __weak id <FADigitalAlbumCustomNumViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
- (void).cxx_destruct;
- (void)numInputAction:(id)arg1;
- (void)okAction:(id)arg1;
- (void)dismissViewAction;
- (void)configNumBtns;
- (void)showInView;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


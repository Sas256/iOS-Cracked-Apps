//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIColor, UIFont, UILabel;

@interface NVMFairAlertView : UIView
{
    NSString *_title;
    NSString *_message;
    NSArray *_actions;
    UIView *_customContentView;
    UIFont *_titleFont;
    UIFont *_messageFont;
    UIColor *_titleColor;
    UIColor *_messageColor;
    double _cornerRadius;
    double _contentWidth;
    CDUnknownBlockType _didTapBackground;
    CDUnknownBlockType _didTapClose;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_containerView;
    UIButton *_closeButton;
    NSMutableArray *_buttons;
    struct UIEdgeInsets _contentPadding;
}

@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType didTapClose; // @synthesize didTapClose=_didTapClose;
@property(copy, nonatomic) CDUnknownBlockType didTapBackground; // @synthesize didTapBackground=_didTapBackground;
@property(nonatomic) struct UIEdgeInsets contentPadding; // @synthesize contentPadding=_contentPadding;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (double)rightPadding;
- (double)bottomPadding;
- (double)leftPadding;
- (double)topPadding;
- (void)closeButtonAction:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (id)buttonForActionIndex:(long long)arg1;
- (void)setupButtons;
- (void)setupContentView;
- (void)setupTitle;
- (void)setupCloseButton;
- (void)setupContainerView;
- (void)setup;
- (void)addGesture;
- (void)defaultSettings;
- (id)initWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3;

@end

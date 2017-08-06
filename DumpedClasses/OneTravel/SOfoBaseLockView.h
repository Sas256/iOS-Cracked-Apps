//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface SOfoBaseLockView : UIView
{
    UIButton *_closedButton;
    UIButton *_ledButton;
    CDUnknownBlockType _switchBlock;
    CDUnknownBlockType _sendOrderBlock;
    id <SOfoLockViewDelegate> _delegate;
    UIView *_coverView;
}

@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak id <SOfoLockViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType sendOrderBlock; // @synthesize sendOrderBlock=_sendOrderBlock;
@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
@property(retain, nonatomic) UIButton *ledButton; // @synthesize ledButton=_ledButton;
@property(retain, nonatomic) UIButton *closedButton; // @synthesize closedButton=_closedButton;
- (void).cxx_destruct;
- (void)scanToSendOrderSucceed:(_Bool)arg1;
- (void)willBecomeReactive;
- (void)willBecomeActive;
- (void)didClickedClosedButton;
- (void)didClickedBottomButton;
- (void)didClickedCoverView;
- (void)layoutSubContentViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface huoyanOverlayView : UIView
{
    UIView *_animateView;
    UIImageView *_netImageView;
    struct CGRect _clearRect;
}

@property(retain, nonatomic) UIImageView *netImageView; // @synthesize netImageView=_netImageView;
@property(retain, nonatomic) UIView *animateView; // @synthesize animateView=_animateView;
@property(nonatomic) struct CGRect clearRect; // @synthesize clearRect=_clearRect;
- (void).cxx_destruct;
- (void)stopAnimate;
- (void)startAnimate;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 with:(struct CGRect)arg2;

@end

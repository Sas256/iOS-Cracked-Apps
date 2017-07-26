//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class CAGradientLayer, CAMediaTimingFunction, CAShapeLayer, NSString;

@interface CTPCircleLoadingView : UIView <CAAnimationDelegate>
{
    _Bool _isAnimating;
    CAMediaTimingFunction *_timingFunction;
    CAShapeLayer *_progressLayer;
    CAShapeLayer *_successLayer;
    CAGradientLayer *_failedLayer;
    CAShapeLayer *_failedShaperLayer;
    long long _aniamtionType;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long aniamtionType; // @synthesize aniamtionType=_aniamtionType;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) CAShapeLayer *failedShaperLayer; // @synthesize failedShaperLayer=_failedShaperLayer;
@property(retain, nonatomic) CAGradientLayer *failedLayer; // @synthesize failedLayer=_failedLayer;
@property(retain, nonatomic) CAShapeLayer *successLayer; // @synthesize successLayer=_successLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(nonatomic) double lineWidth;
- (id)shapeLayerWithStrokeColor:(struct CGColor *)arg1 fillColor:(struct CGColor *)arg2;
- (void)updatePath;
- (void)finishAnimationWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopAnimation;
- (id)basicAnimationKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5 timingFunction:(id)arg6;
- (void)startAnimation;
- (void)setAnimating:(_Bool)arg1;
- (void)resetAnimations;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)dealloc;
- (void)initialize;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

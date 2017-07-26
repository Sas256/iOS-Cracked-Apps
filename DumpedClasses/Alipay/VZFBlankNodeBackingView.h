//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "VZFBackingViewProtocol.h"
#import "VZFNodeBackingViewInterface.h"

@class NSString, UIColor, VZFBlankNodeRenderer;

@interface VZFBlankNodeBackingView : UIView <VZFNodeBackingViewInterface, VZFBackingViewProtocol>
{
    UIColor *_defaultColor;
    UIColor *_highlightColor;
    VZFBlankNodeRenderer *_blankRenderer;
}

+ (Class)layerClass;
@property(retain, nonatomic) VZFBlankNodeRenderer *blankRenderer; // @synthesize blankRenderer=_blankRenderer;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
- (void).cxx_destruct;
- (void)resetState;
- (void)setBackgroundColorSynchronously:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)vz_applyNodeAttributes:(id)arg1;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)setLayerBorder:(struct CGColor *)arg1 borderWidth:(double)arg2 cornerRadius:(double)arg3;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setLayerNeedsAsyncDisplay;
- (void)setRenderer:(id)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (id)renderer;
- (id)blankLayer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

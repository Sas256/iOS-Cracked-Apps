//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class UIColor;

@interface ALPProgressLayer : CALayer
{
    double _progress;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)drawRectangleInContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2;
- (void)drawRectangleInContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 withRadius:(double)arg3;
- (void)drawInContext:(struct CGContext *)arg1;

// Remaining properties
@property(retain, nonatomic) UIColor *borderTintColor; // @dynamic borderTintColor;
@property(nonatomic) double progressBorderWidth; // @dynamic progressBorderWidth;
@property(nonatomic) unsigned long long progressStyle; // @dynamic progressStyle;
@property(retain, nonatomic) UIColor *progressTintColor; // @dynamic progressTintColor;

@end

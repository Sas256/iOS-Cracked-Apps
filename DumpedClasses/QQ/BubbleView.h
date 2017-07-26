//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont;

@interface BubbleView : UIView
{
    _Bool _upTriangle;
    unsigned long long _bubbleStyle;
    NSString *_bubbleText;
    UIColor *_textColor;
    UIFont *_textFont;
    UIColor *_bubbleColor;
    double _triangleOffsetX;
}

@property(nonatomic, getter=isUpTriangle) _Bool upTriangle; // @synthesize upTriangle=_upTriangle;
@property(nonatomic) double triangleOffsetX; // @synthesize triangleOffsetX=_triangleOffsetX;
@property(retain, nonatomic) UIColor *bubbleColor; // @synthesize bubbleColor=_bubbleColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *bubbleText; // @synthesize bubbleText=_bubbleText;
@property(nonatomic) unsigned long long bubbleStyle; // @synthesize bubbleStyle=_bubbleStyle;
- (void)dealloc;
- (void)drawUp:(_Bool)arg1 TriangleTriangleWithOffsetX:(double)arg2 withContext:(struct CGContext *)arg3;
- (void)drawBubble:(struct CGContext *)arg1;
- (void)drawTrangle:(struct CGContext *)arg1;
- (void)drawText:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateText;
- (id)initWithFrame:(struct CGRect)arg1;

@end

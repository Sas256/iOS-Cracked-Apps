//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLAspectAutoFitCornerView, QLHTMLFontLabel, UIView;

@interface QLJCEMarkLabelObject : NSObject
{
    long long _markLabelType;
    QLHTMLFontLabel *_textLabel;
    QLAspectAutoFitCornerView *_imageView;
}

+ (_Bool)isLabelEmpty:(id)arg1;
+ (id)objectWithMarkLabel:(id)arg1;
@property(retain, nonatomic) QLAspectAutoFitCornerView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) QLHTMLFontLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) long long markLabelType; // @synthesize markLabelType=_markLabelType;
- (void).cxx_destruct;
- (_Bool)isTextStyle;
@property(readonly) UIView *contentView;
- (void)flushWithMarkLabel:(id)arg1;
- (void)refreshHTMLLabel:(id)arg1 text:(id)arg2 color:(id)arg3 ignoreBg:(_Bool)arg4;
- (id)createHtmlLabel:(double)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface TBITapDetectingImageView : UIImageView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *singleTap;
    UITapGestureRecognizer *doubleTap;
    UILongPressGestureRecognizer *longPress;
    id <TBITapDetectingImageViewDelegate> _tapDelegate;
}

@property(nonatomic) __weak id <TBITapDetectingImageViewDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)gestureInitialization;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

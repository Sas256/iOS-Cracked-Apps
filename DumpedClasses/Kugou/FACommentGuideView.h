//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface FACommentGuideView : UIView
{
    CDUnknownBlockType _dismissGuideHandler;
    UIView *_centerView;
}

@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(copy, nonatomic) CDUnknownBlockType dismissGuideHandler; // @synthesize dismissGuideHandler=_dismissGuideHandler;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (void)showGuideView;
- (void)dismissGuideView;
- (void)gotoAppStore;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

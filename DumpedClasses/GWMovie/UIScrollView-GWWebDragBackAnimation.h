//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol GWScrollViewDragBackAnimationDelegate;

@interface UIScrollView (GWWebDragBackAnimation)
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak id <GWScrollViewDragBackAnimationDelegate> dragBackAnimationDelegate;
@property(nonatomic) _Bool ifAgreeBackAnimation; // @dynamic ifAgreeBackAnimation;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class SVInfiniteScrollingView;

@interface UIScrollView (SVInfiniteScrolling)
@property(nonatomic) _Bool showsInfiniteScrolling;
@property(readonly, nonatomic) SVInfiniteScrollingView *infiniteScrollingView; // @dynamic infiniteScrollingView;
- (void)setInfiniteScrollingView:(id)arg1;
- (void)triggerInfiniteScrolling;
- (void)addInfiniteScrollingWithActionHandler:(CDUnknownBlockType)arg1;
@end


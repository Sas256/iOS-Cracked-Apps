//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString, TTHorizontalScrollViewCell, UIImage, UIScrollView;

@interface TTHorizontalScrollView : UIView <UIScrollViewDelegate>
{
    unsigned long long _beginDraggingIndex;
    _Bool _scrollByDrag;
    _Bool _didAppeared;
    _Bool _isCodeInvokeScroll;
    id <TTHorizontalScrollViewDataSource> _ttDataSource;
    id <TTHorizontalScrollViewDelegate> _ttDelegate;
    UIScrollView *_contentScrollView;
    UIImage *_cellBackgroundImage;
    unsigned long long _totalNumberOfCells;
    unsigned long long _totalNumberOfCaches;
    NSMutableDictionary *_reuseCells;
    NSMutableSet *_visibleCells;
    unsigned long long _lastCurrentIndex;
    long long _currentIndex;
    TTHorizontalScrollViewCell *_lastCurrentCell;
}

@property(nonatomic) _Bool isCodeInvokeScroll; // @synthesize isCodeInvokeScroll=_isCodeInvokeScroll;
@property(retain, nonatomic) TTHorizontalScrollViewCell *lastCurrentCell; // @synthesize lastCurrentCell=_lastCurrentCell;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) unsigned long long lastCurrentIndex; // @synthesize lastCurrentIndex=_lastCurrentIndex;
@property(retain, nonatomic) NSMutableSet *visibleCells; // @synthesize visibleCells=_visibleCells;
@property(retain, nonatomic) NSMutableDictionary *reuseCells; // @synthesize reuseCells=_reuseCells;
@property(nonatomic) _Bool didAppeared; // @synthesize didAppeared=_didAppeared;
@property(nonatomic) _Bool scrollByDrag; // @synthesize scrollByDrag=_scrollByDrag;
@property(nonatomic) unsigned long long totalNumberOfCaches; // @synthesize totalNumberOfCaches=_totalNumberOfCaches;
@property(nonatomic) unsigned long long totalNumberOfCells; // @synthesize totalNumberOfCells=_totalNumberOfCells;
@property(retain, nonatomic) UIImage *cellBackgroundImage; // @synthesize cellBackgroundImage=_cellBackgroundImage;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak id <TTHorizontalScrollViewDelegate> ttDelegate; // @synthesize ttDelegate=_ttDelegate;
@property(nonatomic) __weak id <TTHorizontalScrollViewDataSource> ttDataSource; // @synthesize ttDataSource=_ttDataSource;
- (void).cxx_destruct;
- (struct CGSize)screenSize;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewEndScroll;
- (double)heightForCell;
- (double)widthForCell;
- (void)numberOfCachCells;
- (double)currentMovePercentage;
- (unsigned long long)currentCellIndex;
- (unsigned long long)numberOfCells;
- (void)queueReusableCell:(id)arg1 WithIdentifier:(id)arg2;
- (unsigned long long)cellNeedShowMinIndex;
- (unsigned long long)cellNeedShowMaxIndex;
- (_Bool)cellNeedShowForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForCellsAtIndex:(unsigned long long)arg1;
- (_Bool)contentScrollViewContainCellForIndex:(unsigned long long)arg1;
- (void)reloadCells;
- (void)reloadCells:(_Bool)arg1;
- (void)queueReusableCells:(_Bool)arg1;
- (void)loadCellsNearby;
- (void)loadCellsNearbyWhenFirstAppear;
- (id)reloadCellAtIndex:(unsigned long long)arg1;
- (void)notifyVisibleCellsBeginDragging;
- (void)notifyCurrentDisplayIndexWhenEndDecelerating:(unsigned long long)arg1;
- (void)scrollToIndex:(unsigned long long)arg1 animated:(_Bool)arg2 reloadCellImmediatelyIfNoNaimated:(_Bool)arg3;
- (void)scrollToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)cellAtIndex:(long long)arg1;
- (id)currentDisplayCell;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1 suggestIndex:(long long)arg2;
- (void)setScrollViewContentSize:(struct CGSize)arg1;
- (void)splashViewDisappeared;
- (void)reloadDataAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)removeCellDelegates;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

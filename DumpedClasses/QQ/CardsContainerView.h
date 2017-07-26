//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString;

@interface CardsContainerView : UIView <UIGestureRecognizerDelegate>
{
    NSMutableArray *_arrCardViews;
    unsigned long long _indexBottomCard;
    unsigned long long _maxCardsCount;
    double _centerX;
    struct CGPoint _ptBegin;
    UIView *_viewCache;
    UIView *_viewIgnoreRight;
    NSLayoutConstraint *_cstRightIgnoreView;
    UIView *_viewIgnoreLeft;
    NSLayoutConstraint *_cstLeftIgnoreView;
    long long INT_marginIgnore;
    double FLOAT_IgnoreWidth;
    _Bool _hasMoved;
    _Bool _bFirstShow;
    double _scale;
    struct CGSize _margin;
    double _cardHeight;
    _Bool _bLoopShow;
    _Bool _changeAlpha;
    id <CardsContainerViewDataDelegate> _dataSource;
    id <CardsContainerViewDelegate> _delegate;
    long long _cardsCount;
}

@property(nonatomic) _Bool changeAlpha; // @synthesize changeAlpha=_changeAlpha;
@property(nonatomic) _Bool bLoopShow; // @synthesize bLoopShow=_bLoopShow;
@property(nonatomic) long long cardsCount; // @synthesize cardsCount=_cardsCount;
@property(nonatomic) __weak id <CardsContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CardsContainerViewDataDelegate> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)getBottomCard;
- (void)refreshViewData:(id)arg1;
- (id)getCard:(unsigned long long)arg1;
- (void)resetTopCard:(id)arg1;
- (void)showBottomCard;
- (void)refreshCardData;
- (void)clipView:(id)arg1 index:(int)arg2;
- (void)stackingCards;
- (void)removeTopCard:(float)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showTopCard:(long long)arg1 view:(id)arg2;
- (void)changeIgnoreView;
- (void)moveCard:(id)arg1;
- (void)reset;
- (void)layoutSubviews;
- (void)updateIgnoreViewConstraint;
- (id)createIgnoreView;
- (void)initViews;
- (void)gestureFail;
- (id)initWithFrame:(struct CGRect)arg1 maxCardsCount:(long long)arg2 margin:(struct CGSize)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

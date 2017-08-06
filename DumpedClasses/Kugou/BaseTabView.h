//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class KGThemeImageView, KGThemeLine, NSMutableArray, NSString, UIImageView, UIScrollView;

@interface BaseTabView : UIView <UIScrollViewDelegate>
{
    NSMutableArray *_buttons;
    KGThemeLine *_bottomIndicatorView;
    UIImageView *_bottomShadowView;
    KGThemeLine *_bgView;
    UIScrollView *_scrollView;
    KGThemeImageView *_leftShadowView;
    KGThemeImageView *_rightShadowView;
    double _tabItemWith;
    double _tabItemLeftRightExpandWidth;
    _Bool _isNeedIndicatorMovedAnimated;
    _Bool _hideBottomShadow;
    _Bool _isNeedFixedFrame;
    id <TabViewDelegate> _delegate;
    long long _selectIndex;
}

@property(nonatomic) _Bool isNeedFixedFrame; // @synthesize isNeedFixedFrame=_isNeedFixedFrame;
@property(nonatomic) _Bool hideBottomShadow; // @synthesize hideBottomShadow=_hideBottomShadow;
@property(nonatomic) _Bool isNeedIndicatorMovedAnimated; // @synthesize isNeedIndicatorMovedAnimated=_isNeedIndicatorMovedAnimated;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak id <TabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBackgroundViewAlpha:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setLeftShadowViewShowState;
- (void)endDynamicChangeIndicatorIndex:(long long)arg1;
- (void)dynamicChangeIndicatorPosition:(double)arg1 direction:(unsigned long long)arg2;
- (void)beginDynamicChangeIndicatorIndex:(long long)arg1;
- (void)moveBottomIndictorViewToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setHilightAtIndex:(long long)arg1;
- (void)selectIndex:(long long)arg1;
- (void)customSettingWhenPressedSomeItem:(long long)arg1;
- (void)sendClickEventWithActiveEvent:(_Bool)arg1;
- (void)btnSelected:(id)arg1 activeEvent:(_Bool)arg2;
- (void)btnPressed:(id)arg1;
- (void)moveHighlightIndexToCenterWithIndex:(unsigned long long)arg1 animated:(_Bool)arg2 needMoveBottomIndicator:(_Bool)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)initLeftRightShadowView;
- (void)viewInitWithButtonNames:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 buttonNames:(id)arg2 highLightIndex:(long long)arg3 isNeedFixedFrame:(_Bool)arg4 itemLeftRightExpandWidth:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1 buttonNames:(id)arg2 highLightIndex:(long long)arg3 isNeedFixedFrame:(_Bool)arg4 itemWidth:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1 andButtonNames:(id)arg2 andHighLightIndex:(long long)arg3 andIsNeedFixedFrame:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 andButtonNames:(id)arg2 andHighLightIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

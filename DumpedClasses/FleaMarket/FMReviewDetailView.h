//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseScrollView.h"

@class FMBottomButtonView, FMReviewDetailModel, FMReviewTradeView;

@interface FMReviewDetailView : FMBaseScrollView
{
    FMReviewTradeView *reviewTradeView;
    FMReviewDetailModel *_viewDO;
    FMBottomButtonView *_postMoreReviewButton;
}

@property(retain, nonatomic) FMBottomButtonView *postMoreReviewButton; // @synthesize postMoreReviewButton=_postMoreReviewButton;
@property(retain, nonatomic) FMReviewDetailModel *viewDO; // @synthesize viewDO=_viewDO;
- (void).cxx_destruct;
- (void)gotoPostMoreReview;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (unsigned long long)cellType:(id)arg1;
- (void)__$$keyPathChange_viewDO$_$errorMsg:(_Bool)arg1 old:(id)arg2 new:(id)arg3;
- (void)__$$keyPathChange_viewDO$_$items:(_Bool)arg1 old:(id)arg2 new:(id)arg3;
- (void)__$$keyPathChange_viewDO$_$detail:(_Bool)arg1 old:(id)arg2 new:(id)arg3;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

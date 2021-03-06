//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedImageView, SSThemedLabel, WDPostQuestionViewModel;

@interface WDPostQuestionTitleTipsView : SSThemedView
{
    unsigned long long _viewStatus;
    SSThemedButton *_tipsButton;
    SSThemedLabel *_wrongStatusLabel;
    SSThemedImageView *_wrongStatusImageView;
    WDPostQuestionViewModel *_viewModel;
}

@property(retain, nonatomic) WDPostQuestionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SSThemedImageView *wrongStatusImageView; // @synthesize wrongStatusImageView=_wrongStatusImageView;
@property(retain, nonatomic) SSThemedLabel *wrongStatusLabel; // @synthesize wrongStatusLabel=_wrongStatusLabel;
@property(retain, nonatomic) SSThemedButton *tipsButton; // @synthesize tipsButton=_tipsButton;
@property(nonatomic) unsigned long long viewStatus; // @synthesize viewStatus=_viewStatus;
- (void).cxx_destruct;
- (void)tipsButtonClicked:(id)arg1;
- (struct CGRect)frameForTipsButton;
- (struct CGRect)frameForWrongStatusLabel;
- (struct CGRect)frameForWrongImageView;
- (void)addKVO;
- (void)setWrongStatusLabelText:(id)arg1;
- (void)refreshWithViewStatus:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

@end


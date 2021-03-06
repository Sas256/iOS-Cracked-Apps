//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, WDDetailModel;

@interface WDBottomToolView : SSThemedView
{
    id <WDBottomToolViewDelegate> _delegate;
    WDDetailModel *_detailModel;
    SSThemedButton *_writeButton;
    SSThemedButton *_commentButton;
    SSThemedButton *_diggButton;
    SSThemedButton *_nextButton;
}

@property(retain, nonatomic) SSThemedButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) SSThemedButton *diggButton; // @synthesize diggButton=_diggButton;
@property(retain, nonatomic) SSThemedButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) SSThemedButton *writeButton; // @synthesize writeButton=_writeButton;
@property(retain, nonatomic) WDDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) __weak id <WDBottomToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)diggAnimationWith:(id)arg1;
- (void)nextButtonClicked:(id)arg1;
- (void)diggButtonClicked:(id)arg1;
- (void)commentButtonClicked:(id)arg1;
- (void)writeButtonClicked:(id)arg1;
- (id)attributeStringForText:(id)arg1 icon:(id)arg2 iconFontSize:(double)arg3 color:(id)arg4 baseLineOffset:(double)arg5 textLineOffset:(double)arg6;
- (id)stringForValue:(long long)arg1;
- (void)refreshWriteButton;
- (void)refreshNextButton;
- (void)refreshDiggCount;
- (void)refreshCommentCount;
- (void)addKVO;
- (void)refreshFrame;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1 detailModel:(id)arg2;

@end


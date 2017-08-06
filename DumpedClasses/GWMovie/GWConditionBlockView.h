//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIButton, UILabel;

@interface GWConditionBlockView : UIView
{
    NSDictionary *_conditionInfo;
    CDUnknownBlockType _cancelEvent;
    CDUnknownBlockType _conditionEvent;
    UILabel *_conditionsLabel;
    UIButton *_cancelConditionBtn;
}

@property(retain, nonatomic) UIButton *cancelConditionBtn; // @synthesize cancelConditionBtn=_cancelConditionBtn;
@property(retain, nonatomic) UILabel *conditionsLabel; // @synthesize conditionsLabel=_conditionsLabel;
@property(copy, nonatomic) CDUnknownBlockType conditionEvent; // @synthesize conditionEvent=_conditionEvent;
@property(copy, nonatomic) CDUnknownBlockType cancelEvent; // @synthesize cancelEvent=_cancelEvent;
@property(retain, nonatomic) NSDictionary *conditionInfo; // @synthesize conditionInfo=_conditionInfo;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)cancelConditionBtnClickEvent:(id)arg1;
- (void)conditionsLabelClicked:(id)arg1;
- (id)mapSortString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

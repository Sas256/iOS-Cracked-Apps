//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTSCalendarDateModel, UIButton, UILabel;

@interface CTSCalendarButton : UIView
{
    CTSCalendarDateModel *_dateModel;
    id <CTSCalendarButtoDelegate> _delegate;
    UIButton *_dateButton;
    UILabel *_monthTipLabel;
    UIView *_selectedBackgroudView;
    UILabel *_dateLabel;
    UIView *_smallCircleView;
}

@property(retain, nonatomic) UIView *smallCircleView; // @synthesize smallCircleView=_smallCircleView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UIView *selectedBackgroudView; // @synthesize selectedBackgroudView=_selectedBackgroudView;
@property(retain, nonatomic) UILabel *monthTipLabel; // @synthesize monthTipLabel=_monthTipLabel;
@property(retain, nonatomic) UIButton *dateButton; // @synthesize dateButton=_dateButton;
@property(nonatomic) __weak id <CTSCalendarButtoDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTSCalendarDateModel *dateModel; // @synthesize dateModel=_dateModel;
- (void).cxx_destruct;
- (void)dateButtonTapped:(id)arg1;
- (void)hiddenAllSubView;
- (void)refreshDateButtonState;
- (void)setCalendarButtonWith:(id)arg1;
- (void)initBaseView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


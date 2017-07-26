//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightPickerLabel, CTFlightRadioView, NSLayoutConstraint, UIImageView, UILabel;

@interface CTFlightCarParkServiceCell : UITableViewCell
{
    UILabel *_labelTitle;
    CTFlightPickerLabel *_labelContent;
    CTFlightRadioView *_bgView;
    NSLayoutConstraint *_seperatViewHeightCons;
    NSLayoutConstraint *_seperatViewTopSpaceCons;
    NSLayoutConstraint *_seperatViewRightSpaceCons;
    NSLayoutConstraint *_arrowViewRightSpaceCons;
    NSLayoutConstraint *_labelTitleLeftSpaceCons;
    NSLayoutConstraint *_bgviewLeftSpaceCons;
    NSLayoutConstraint *_bgViewRightSpaceCOns;
    UIImageView *_rightArrow;
}

@property(nonatomic) __weak UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) NSLayoutConstraint *bgViewRightSpaceCOns; // @synthesize bgViewRightSpaceCOns=_bgViewRightSpaceCOns;
@property(retain, nonatomic) NSLayoutConstraint *bgviewLeftSpaceCons; // @synthesize bgviewLeftSpaceCons=_bgviewLeftSpaceCons;
@property(retain, nonatomic) NSLayoutConstraint *labelTitleLeftSpaceCons; // @synthesize labelTitleLeftSpaceCons=_labelTitleLeftSpaceCons;
@property(retain, nonatomic) NSLayoutConstraint *arrowViewRightSpaceCons; // @synthesize arrowViewRightSpaceCons=_arrowViewRightSpaceCons;
@property(retain, nonatomic) NSLayoutConstraint *seperatViewRightSpaceCons; // @synthesize seperatViewRightSpaceCons=_seperatViewRightSpaceCons;
@property(retain, nonatomic) NSLayoutConstraint *seperatViewTopSpaceCons; // @synthesize seperatViewTopSpaceCons=_seperatViewTopSpaceCons;
@property(retain, nonatomic) NSLayoutConstraint *seperatViewHeightCons; // @synthesize seperatViewHeightCons=_seperatViewHeightCons;
@property(retain, nonatomic) CTFlightRadioView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) CTFlightPickerLabel *labelContent; // @synthesize labelContent=_labelContent;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
- (void)initView;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;

@end

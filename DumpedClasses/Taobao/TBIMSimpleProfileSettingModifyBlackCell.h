//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMSimpleProfileSettingBaseCell.h"

@class UILabel, UISwitch, UIView;

@interface TBIMSimpleProfileSettingModifyBlackCell : TBIMSimpleProfileSettingBaseCell
{
    UIView *_tbBackgroundView;
    UIView *_bottomLine;
    UILabel *_tbTextLabel;
    UISwitch *_tbSwitch;
}

@property(retain, nonatomic) UISwitch *tbSwitch; // @synthesize tbSwitch=_tbSwitch;
@property(retain, nonatomic) UILabel *tbTextLabel; // @synthesize tbTextLabel=_tbTextLabel;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *tbBackgroundView; // @synthesize tbBackgroundView=_tbBackgroundView;
- (void).cxx_destruct;
- (void)switchBlackStatus:(id)arg1;
- (void)updateBlackStatus:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 delegate:(id)arg3;

@end

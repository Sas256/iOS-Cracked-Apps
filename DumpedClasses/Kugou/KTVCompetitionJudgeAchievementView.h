//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVCompetitionJudgeResultView.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface KTVCompetitionJudgeAchievementView : KTVCompetitionJudgeResultView
{
    UIImageView *_achievementImageView;
    UIImageView *_achievementBgImageView;
    UILabel *_remainDayLabel;
    UIButton *_shareButton;
    NSString *_url;
    NSString *_madelStr;
    UIView *_rateLeftLine;
    UIView *_rateRightLine;
}

@property(retain, nonatomic) UIView *rateRightLine; // @synthesize rateRightLine=_rateRightLine;
@property(retain, nonatomic) UIView *rateLeftLine; // @synthesize rateLeftLine=_rateLeftLine;
@property(retain, nonatomic) NSString *madelStr; // @synthesize madelStr=_madelStr;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *remainDayLabel; // @synthesize remainDayLabel=_remainDayLabel;
@property(retain, nonatomic) UIImageView *achievementBgImageView; // @synthesize achievementBgImageView=_achievementBgImageView;
@property(retain, nonatomic) UIImageView *achievementImageView; // @synthesize achievementImageView=_achievementImageView;
- (void).cxx_destruct;
- (id)createShareImage;
- (void)setInfo:(id)arg1;
- (void)sharedAction;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

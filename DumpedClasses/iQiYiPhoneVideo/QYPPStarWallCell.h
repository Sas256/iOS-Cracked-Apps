//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSNumber, UIImageView, UILabel, UIView;

@interface QYPPStarWallCell : UITableViewCell
{
    UIView *leftVerticalLine;
    UILabel *topDateLabel;
    UILabel *topDurationLabel;
    UIImageView *bubble;
    UIImageView *starIcon;
    UILabel *starName;
    UIView *bubbleVerticalLine;
    UIView *undergoingView;
    UILabel *undergoingFansLabel;
    UILabel *undergoingContentLabel;
    UIView *starAnnounceView;
    UILabel *activityTimeTitle;
    UILabel *activityTimeContentLabel;
    UIView *starHistoryView;
    UIView *gailouView;
    UIView *fanpaiView;
    UIView *zanView;
    UIView *fansView;
    UIImageView *leftLineTag;
    UIImageView *rightCornerTag;
    NSNumber *starId;
    long long cellType;
    CDUnknownBlockType _goCircleBlock;
    CDUnknownBlockType _goCircleWithStarArriveTabBlock;
}

@property(copy, nonatomic) CDUnknownBlockType goCircleWithStarArriveTabBlock; // @synthesize goCircleWithStarArriveTabBlock=_goCircleWithStarArriveTabBlock;
@property(copy, nonatomic) CDUnknownBlockType goCircleBlock; // @synthesize goCircleBlock=_goCircleBlock;
@property(nonatomic) long long cellType; // @synthesize cellType;
- (void).cxx_destruct;
- (void)clickBubble:(id)arg1;
- (void)goCircle:(id)arg1;
- (void)setupHistoryViewWithModel:(id)arg1;
- (void)setupAnnounceViewWithModel:(id)arg1;
- (void)setupUndergoingViewWithModel:(id)arg1;
- (void)setupWithModel:(id)arg1;
- (id)makeHistoryViewWithImage:(id)arg1 labelTag:(long long)arg2 withSuperView:(id)arg3;
- (void)configUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


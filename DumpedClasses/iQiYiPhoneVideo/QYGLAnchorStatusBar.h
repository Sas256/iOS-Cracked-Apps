//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface QYGLAnchorStatusBar : UIView
{
    _Bool _live;
    UILabel *_introductionLabel;
    UIImageView *_liveMarkImageView;
    UILabel *_liveLabel;
}

@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UIImageView *liveMarkImageView; // @synthesize liveMarkImageView=_liveMarkImageView;
@property(retain, nonatomic) UILabel *introductionLabel; // @synthesize introductionLabel=_introductionLabel;
@property(nonatomic, getter=isLive) _Bool live; // @synthesize live=_live;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *anchorIntroduction;
- (void)updateConstraints;
- (id)init;

@end


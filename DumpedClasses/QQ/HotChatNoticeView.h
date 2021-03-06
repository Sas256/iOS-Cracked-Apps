//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMaskView.h"

@class NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface HotChatNoticeView : QQMaskView
{
    long long _hotGroupCode;
    int _roomType;
    NSString *_groupNotice;
    NSString *_jumpingUrl;
    _Bool _isShowing;
    id <HotChatNoticeViewDelegate> _delagate;
    UIView *_contentView;
    UIView *_topSeparate;
    UIButton *_detailButton;
    UIImageView *_moreIcon;
    UIButton *_moreButton;
    UIScrollView *_noticeContentView;
    UILabel *_noticeLabel;
    UIButton *_confirmButton;
}

@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) UIScrollView *noticeContentView; // @synthesize noticeContentView=_noticeContentView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIImageView *moreIcon; // @synthesize moreIcon=_moreIcon;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UIView *topSeparate; // @synthesize topSeparate=_topSeparate;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) id <HotChatNoticeViewDelegate> delagate; // @synthesize delagate=_delagate;
- (void).cxx_destruct;
- (void)hideNoticeView;
- (void)showNoticeView:(id)arg1 jumpUrl:(id)arg2;
- (void)clickedDetailButton:(id)arg1;
- (void)clickConfirmButton:(id)arg1;
- (void)animateHide;
- (void)animateShow;
- (void)updateFrame;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithhotGroupCode:(long long)arg1 roomType:(int)arg2;

@end


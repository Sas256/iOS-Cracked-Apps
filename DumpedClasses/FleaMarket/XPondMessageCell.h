//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FMImageView, UILabel, XSingleBinder;

@interface XPondMessageCell : UITableViewCell
{
    FMImageView *_itemImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    XSingleBinder *_binder;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) XSingleBinder *binder; // @synthesize binder=_binder;
- (void).cxx_destruct;
- (void)didSelectCell;
- (void)setItemMainPic:(id)arg1;
- (void)setDescText:(id)arg1 andTimeText:(id)arg2;
- (void)setTitleText:(id)arg1;
- (void)onPondMsgState:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)setupLineView;
- (void)setupDescView;
- (void)setupTitleView;
- (void)setupItemImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

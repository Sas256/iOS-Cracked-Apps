//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CAGradientLayer, UIButton;

@interface TXDChannelEnterCell : UITableViewCell
{
    CDUnknownBlockType _jump2Channel;
    UIButton *_channelButton;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIButton *channelButton; // @synthesize channelButton=_channelButton;
@property(copy, nonatomic) CDUnknownBlockType jump2Channel; // @synthesize jump2Channel=_jump2Channel;
- (void).cxx_destruct;
- (void)jump2Channel:(id)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

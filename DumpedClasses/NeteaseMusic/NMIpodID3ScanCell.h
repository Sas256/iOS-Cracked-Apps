//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIActivityIndicatorView, UILabel;

@interface NMIpodID3ScanCell : UITableViewCell
{
    UIActivityIndicatorView *_waitingView;
    UILabel *_textLabel;
    UILabel *_progressLabel;
}

+ (double)cellHeight;
- (void).cxx_destruct;
- (void)setScanProgress:(double)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

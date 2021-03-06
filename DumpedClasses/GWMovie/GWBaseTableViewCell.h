//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer;

@interface GWBaseTableViewCell : UITableViewCell
{
    _Bool _isUseHightLight;
    _Bool _isHasInited;
    double _totalHeight;
    CALayer *_selectedlayer;
}

+ (double)rowHeightWithCellObject:(id)arg1;
@property(retain, nonatomic) CALayer *selectedlayer; // @synthesize selectedlayer=_selectedlayer;
@property(nonatomic) _Bool isHasInited; // @synthesize isHasInited=_isHasInited;
@property(nonatomic) _Bool isUseHightLight; // @synthesize isUseHightLight=_isUseHightLight;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showCellWithCellObject:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


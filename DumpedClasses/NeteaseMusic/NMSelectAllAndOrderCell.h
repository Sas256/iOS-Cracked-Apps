//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMAllSelectionCell.h"

@class NMDjRadioSortButton;

@interface NMSelectAllAndOrderCell : NMAllSelectionCell
{
    NMDjRadioSortButton *_orderButton;
    id <NMSelectAllAndOrderCellDelegate> _cellDelegate;
}

@property(nonatomic) __weak id <NMSelectAllAndOrderCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAscend;
- (void)orderButtonClicked:(id)arg1;
- (void)onCheckBoxAll:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 alignment:(unsigned long long)arg3;

@end


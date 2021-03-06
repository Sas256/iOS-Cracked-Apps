//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, UILabel;

@interface CTTrainFilterSectionView : UIView
{
    id <CTTrainFilterSectionViewDelegate> _delegate;
    NSString *_sectionTitle;
    NSMutableArray *_arrayAllItems;
    NSMutableArray *_arraySelectedItems;
    UILabel *_labelTitle;
    NSMutableArray *_arrayButtons;
}

@property(retain, nonatomic) NSMutableArray *arrayButtons; // @synthesize arrayButtons=_arrayButtons;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) NSMutableArray *arraySelectedItems; // @synthesize arraySelectedItems=_arraySelectedItems;
@property(retain, nonatomic) NSMutableArray *arrayAllItems; // @synthesize arrayAllItems=_arrayAllItems;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(nonatomic) __weak id <CTTrainFilterSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onItemButton:(id)arg1;
- (void)setOriginalButtonStatus;
- (void)setupContent;
- (id)initViewWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIView;

@interface SOperationFormCell : UICollectionViewCell
{
    _Bool _click;
    UIView *_rowSeparator;
    UIView *_columnSeparator;
}

@property(nonatomic) _Bool click; // @synthesize click=_click;
@property(retain, nonatomic) UIView *columnSeparator; // @synthesize columnSeparator=_columnSeparator;
@property(retain, nonatomic) UIView *rowSeparator; // @synthesize rowSeparator=_rowSeparator;
- (void).cxx_destruct;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setClickEffectEnable:(_Bool)arg1;
- (void)refreshSeparator;
- (void)setDataModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

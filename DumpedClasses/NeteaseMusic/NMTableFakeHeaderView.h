//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@interface NMTableFakeHeaderView : UITableViewHeaderFooterView
{
    _Bool _kvoed;
    long long _section;
    id <NMTableFakeHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NMTableFakeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool kvoed; // @synthesize kvoed=_kvoed;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg1;
- (void)didMoveToSuperview;
- (void)removeFrameObserver:(id)arg1;
- (void)addFrameObserver:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "DWPlayerLifecycleProtocol.h"
#import "TBSNSVideoTableViewCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DWInstance, NSMutableArray, NSString, TBSNSVideoTableViewCell, UILabel;

@interface TBSNSVideoTableView : UITableView <UITableViewDataSource, UITableViewDelegate, DWPlayerLifecycleProtocol, UIScrollViewDelegate, TBSNSVideoTableViewCellDelegate>
{
    _Bool _showFooterView;
    _Bool _isRefreshing;
    NSMutableArray *_data;
    DWInstance *_firstInstance;
    DWInstance *_videoInstance;
    TBSNSVideoTableViewCell *_playingCell;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(nonatomic) _Bool showFooterView; // @synthesize showFooterView=_showFooterView;
@property(retain, nonatomic) TBSNSVideoTableViewCell *playingCell; // @synthesize playingCell=_playingCell;
@property(retain, nonatomic) DWInstance *videoInstance; // @synthesize videoInstance=_videoInstance;
@property(retain, nonatomic) DWInstance *firstInstance; // @synthesize firstInstance=_firstInstance;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)scrollToVideoCell:(id)arg1;
- (void)videoCompleted;
- (void)clickPlayButtonToPlay:(id)arg1;
- (void)tapVideoToPlay:(id)arg1;
- (void)willPlayNextVideo:(id)arg1;
- (void)videoPlaying:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshAnimationFinish;
- (id)getVideoInstanceWithModel:(id)arg1;
- (void)handleScrollDidEndDragging:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

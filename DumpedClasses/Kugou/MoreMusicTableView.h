//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicTableView.h"

#import "RefreshControlDelegate.h"

@class KGRefreshController, NSString;

@interface MoreMusicTableView : MusicTableView <RefreshControlDelegate>
{
    _Bool _isLoading;
    _Bool _dataChanging;
    KGRefreshController *_refreshControl;
}

@property(retain, nonatomic) KGRefreshController *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void).cxx_destruct;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getAllSongInfo;
- (void)insertAllSelect;
- (_Bool)hasMore;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)removeMultiVersionMusicCellWithSong:(id)arg1 andMusicCellIndexPath:(id)arg2 andMultiNum:(long long)arg3;
- (void)removeMusicMenuCell;
- (void)insertMusicMenuCellWithMusicCell:(id)arg1;
- (_Bool)isLoading;
- (_Bool)dataChanging;
- (void)loadingFinishAndRefresh;
- (void)endChangeData;
- (void)startChangeData;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

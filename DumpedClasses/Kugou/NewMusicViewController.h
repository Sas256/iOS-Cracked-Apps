//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGMusicTableViewAdapterDataSource.h"
#import "KGMusicTableViewAdapterDelegate.h"
#import "TabViewDelegate.h"

@class KGDefaultNetErrorView, KGMusicControlViewController, KGMusicTableViewAdapter, NSMutableArray, NSString, TabView, UIView;

@interface NewMusicViewController : KGViewController <TabViewDelegate, KGMusicTableViewAdapterDelegate, KGMusicTableViewAdapterDataSource>
{
    KGMusicTableViewAdapter *_tableViewAdapter;
    NSMutableArray *_allAlbums;
    NSMutableArray *_allMusics;
    NSMutableArray *_arrChineseMusics;
    NSMutableArray *_arrWestMusics;
    NSMutableArray *_arrJapaneseMusics;
    NSString *_chineseAlbumUniqueCode;
    NSString *_westAlbumUniqueCode;
    NSString *_japaneseAlbumUniqueCode;
    NSString *_nowAlbumUniqueCode;
    NSString *_chineseUniqueCode;
    NSString *_westUniqueCode;
    NSString *_japaneseUniqueCode;
    NSString *_nowUniqueCode;
    UIView *_sectionView;
    _Bool _willRectifyPoint;
    float scrollHeight[3];
    unsigned long long _nowSelectedIndex;
    KGDefaultNetErrorView *_errorView;
    UIView *_headerView;
    _Bool isNeedRefreshL;
    _Bool _isShowLoadMoreCell;
    KGMusicControlViewController *_musicControl;
    long long _chineseMusicCount;
    long long _westMusicCount;
    long long _japaneseMusicCount;
    TabView *_tabView;
}

@property(retain, nonatomic) TabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) long long japaneseMusicCount; // @synthesize japaneseMusicCount=_japaneseMusicCount;
@property(nonatomic) long long westMusicCount; // @synthesize westMusicCount=_westMusicCount;
@property(nonatomic) long long chineseMusicCount; // @synthesize chineseMusicCount=_chineseMusicCount;
@property(nonatomic) _Bool isShowLoadMoreCell; // @synthesize isShowLoadMoreCell=_isShowLoadMoreCell;
@property(retain, nonatomic) KGMusicControlViewController *musicControl; // @synthesize musicControl=_musicControl;
- (void).cxx_destruct;
- (void)searchButtonClick:(id)arg1;
- (id)tabPath;
- (void)getMusicNextPage:(long long)arg1;
- (void)getMusics:(long long)arg1;
- (void)fillContent;
- (void)changeSelected:(long long)arg1;
- (void)switchSelected:(unsigned long long)arg1;
- (void)removeAllMusics;
- (void)addMusicsWithArray:(id)arg1;
- (void)RepointScrollPoint;
- (void)requestAgain;
- (void)viewInit;
- (id)tableView:(id)arg1 menuArrayWidthForRowAtIndexPath:(id)arg2;
- (void)addCharacterImageForTableviewCell:(id)arg1 andIsCheckBoxStyle:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (_Bool)hasMoreWithTabelView:(id)arg1;
- (void)addMoreDataActionWithTabelView:(id)arg1;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getAllSongInfos;
- (void)btnClicked:(long long)arg1;
- (void)changeShotBgColor:(id)arg1 isShow:(_Bool)arg2;
- (void)KGUsingControllerState:(int)arg1;
- (void)onChangeTheme:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

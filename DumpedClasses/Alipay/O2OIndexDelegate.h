//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZListViewDelegate.h"

#import "O2OIndexRecommendMenuViewDelegate.h"

@class NSArray, NSString, O2OIndexRecommendSectionHeader;

@interface O2OIndexDelegate : VZListViewDelegate <O2OIndexRecommendMenuViewDelegate>
{
    NSArray *_menuItems;
    _Bool _shoudShowRefreshControl;
    _Bool _isInFirstTab;
    _Bool _isHeadlineRefreshOn;
    NSString *_nativeId;
    _Bool _hasMarketingArea;
    id <O2OIndexLabelSelectDelegate> _labelDelegate;
    O2OIndexRecommendSectionHeader *_recommendSectionHeader;
    NSArray *_listTitles;
}

@property(retain, nonatomic) NSArray *listTitles; // @synthesize listTitles=_listTitles;
@property(retain, nonatomic) O2OIndexRecommendSectionHeader *recommendSectionHeader; // @synthesize recommendSectionHeader=_recommendSectionHeader;
@property(nonatomic) __weak id <O2OIndexLabelSelectDelegate> labelDelegate; // @synthesize labelDelegate=_labelDelegate;
@property(nonatomic) _Bool hasMarketingArea; // @synthesize hasMarketingArea=_hasMarketingArea;
- (void).cxx_destruct;
- (void)didSelectMenuView:(id)arg1 selectedIndex:(unsigned long long)arg2 currentIndex:(unsigned long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)setListTitles:(id)arg1 nativeId:(id)arg2;
- (_Bool)shouldShowSectionHeaderForId:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)sectionItemAtSection:(long long)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

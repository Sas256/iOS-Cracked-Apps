//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface FTSDynamicSearchResultsListViewModel : NSObject
{
    NSMutableArray *_searchResults;
    NSString *_currentSearchWord;
    id _viewModelDelegate;
    id _ftsGroupResultsDelegate;
    id _ftsEntranceViewController;
}

@property(nonatomic) __weak id ftsEntranceViewController; // @synthesize ftsEntranceViewController=_ftsEntranceViewController;
@property(nonatomic) __weak id ftsGroupResultsDelegate; // @synthesize ftsGroupResultsDelegate=_ftsGroupResultsDelegate;
@property(nonatomic) __weak id viewModelDelegate; // @synthesize viewModelDelegate=_viewModelDelegate;
@property(copy, nonatomic) NSString *currentSearchWord; // @synthesize currentSearchWord=_currentSearchWord;
@property(retain, nonatomic) NSMutableArray *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (_Bool)getIsClickItemFirst;
- (long long)getFatherViewPageShowStyle;
- (long long)getFatherViewShowStyle;
- (id)getDynamicSearchCellModelFromGroupResults:(id)arg1;
- (id)tableView:(id)arg1 blankCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 moreCellForRowAtIndexPath:(id)arg2 withData:(id)arg3;
- (id)tableView:(id)arg1 QZoneCellForRowAtIndexPath:(id)arg2 withData:(id)arg3;
- (id)tableView:(id)arg1 peopleCellForRowAtIndexPath:(id)arg2 withData:(id)arg3;
- (id)tableView:(id)arg1 groupCellForRowAtIndexPath:(id)arg2 withData:(id)arg3;
- (id)tableView:(id)arg1 resultItemCellForRowAtIndexPath:(id)arg2;
- (id)defaultSectionHeaderViewWithTitle:(id)arg1 forTableView:(id)arg2 marginTop:(double)arg3;
- (double)searchResultHeightForRowAtIndexPath:(id)arg1;
- (void)FTSDynamicSearchDataReportSelectedItem:(id)arg1;
- (void)qqDynamicSearchDidSelectedResultItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

@end


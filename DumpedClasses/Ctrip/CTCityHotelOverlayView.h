//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UITableView, UIView;

@interface CTCityHotelOverlayView : CTRootView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *mTableHistory;
    UITableView *mTableAssociate;
    UIView *mPanelView;
    _Bool isPanelLeft;
    _Bool isOnRequest;
    _Bool isChinaFirst;
    NSMutableArray *arrHistory;
    NSMutableArray *arrSearch;
    NSMutableDictionary *touchCityDic;
    _Bool isSearchRequestError;
    int _errorCode;
    id <CTCityHotelOverlayViewDelegate> _delegate;
    NSString *_searchFieldText;
    NSString *_errorInformation;
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorInformation; // @synthesize errorInformation=_errorInformation;
@property(copy, nonatomic) NSString *searchFieldText; // @synthesize searchFieldText=_searchFieldText;
@property(nonatomic) __weak id <CTCityHotelOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showSearchResults:(id)arg1 searchBarStr:(id)arg2;
- (void)showAssociateResultsChina:(id)arg1 global:(id)arg2 onRequest:(_Bool)arg3 isChinaFirst:(_Bool)arg4;
- (void)showHistoryKeywords;
- (void)setDefaultWithAnimated:(_Bool)arg1 isShowHistory:(_Bool)arg2;
- (void)exchangeShowView:(id)arg1 hideView:(id)arg2;
- (void)setPanelLeft:(_Bool)arg1 animated:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)getDetinationCityModelForCell:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 associateCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 historyCellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


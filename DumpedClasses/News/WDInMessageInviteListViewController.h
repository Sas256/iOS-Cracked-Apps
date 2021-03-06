//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class TTViewWrapper, WDInMessageInviteListView, WDInMessageInviteListViewModel;

@interface WDInMessageInviteListViewController : SSViewControllerBase
{
    CDUnknownBlockType _block;
    WDInMessageInviteListViewModel *_viewModel;
    WDInMessageInviteListView *_listView;
    TTViewWrapper *_wrapperView;
}

+ (void)load;
@property(retain, nonatomic) TTViewWrapper *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) WDInMessageInviteListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) WDInMessageInviteListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)fontChanged;
- (struct CGRect)frameForTableView;
- (id)questionInvitations;
- (void)setTartgetView:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithGdExtJson:(id)arg1 apiParams:(id)arg2;
- (id)initWithBaseCondition:(id)arg1;
- (void)dealloc;

@end


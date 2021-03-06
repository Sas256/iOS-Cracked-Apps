//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKComponentHostingViewDelegate-Protocol.h"
#import "FBAbstractTimelineHeaderDataSource-Protocol.h"
#import "FBProfileFallbackCellDataSourceUpdaterDataSource-Protocol.h"
#import "FBProfileTimelineQuickPromotionEventListener-Protocol.h"
#import "FBTimelineCoverPhotoEditableHeaderDataSource-Protocol.h"

@class FBContextualTimelineActionBarController, FBContextualTimelineFullBleedProfileMediaController, FBContextualTimelineFullLengthFriendingButtonCell, FBContextualTimelineHeaderConfiguration, FBContextualTimelineHeaderView, FBContextualTimelineIntroCardSelfItemsController, FBContextualTimelineQuickPromotionController, FBMemPerson, FBProfileFallbackCellDataSourceUpdater, FBProfileTimelineQuickPromotionViewController, FBProfileToolbox, FBTimelineTemporaryCoverPhoto, FBUserSession, NSMutableArray, NSString, UITableViewCell;
@protocol FBPersonContextualTimelineHeaderDataSourceDelegate, FBSectionedDataSourceWriting, FBTableViewMutating;

@interface FBPersonContextualTimelineHeaderDataSource : NSObject <CKComponentHostingViewDelegate, FBProfileFallbackCellDataSourceUpdaterDataSource, FBProfileTimelineQuickPromotionEventListener, FBAbstractTimelineHeaderDataSource, FBTimelineCoverPhotoEditableHeaderDataSource>
{
    FBUserSession *_session;
    _Bool _hasFullySyncedHeaderDetails;
    FBProfileToolbox *_toolbox;
    _Bool _contextItemsLoadedLogged;
    NSObject *_scenePath;
    NSMutableArray *_currentSectionViewModels;
    _Bool _coverPhotoLogged;
    _Bool _profileRefresherEntryPointViewLogged;
    _Bool _shouldUseComponentCoverArea;
    _Bool _shouldHideActionBar;
    _Bool _isUsingSectionComponent;
    _Bool _enableFullWidthProfileMedia;
    _Bool _isCoverEditMode;
    _Bool _headerDidLoad;
    FBTimelineTemporaryCoverPhoto *_temporaryCoverPhoto;
    id <FBTableViewMutating> _tableViewMutator;
    id <FBPersonContextualTimelineHeaderDataSourceDelegate> _contextualTimelineDelegate;
    id <FBSectionedDataSourceWriting> _writeInterface;
    FBProfileFallbackCellDataSourceUpdater *_fallbackCellDataSourceUpdater;
    FBContextualTimelineHeaderConfiguration *_configuration;
    unsigned long long _fallbackCellDataSourceSectionStartIndex;
    FBMemPerson *_person;
    FBContextualTimelineQuickPromotionController *_quickPromotionController;
    FBProfileTimelineQuickPromotionViewController *_timelineQuickPromotionViewController;
    UITableViewCell *_headerCell;
    FBContextualTimelineHeaderView *_headerView;
    FBContextualTimelineFullLengthFriendingButtonCell *_fullLengthFriendingButtonCell;
    FBContextualTimelineIntroCardSelfItemsController *_introCardSelfItemsController;
    FBContextualTimelineActionBarController *_actionBarController;
    FBContextualTimelineFullBleedProfileMediaController *_fullBleedProfileMediaAreaController;
    NSString *_analyticsUUID;
}

+ (id)sectionID;
@property(copy, nonatomic) NSString *analyticsUUID; // @synthesize analyticsUUID=_analyticsUUID;
@property(retain, nonatomic) FBContextualTimelineFullBleedProfileMediaController *fullBleedProfileMediaAreaController; // @synthesize fullBleedProfileMediaAreaController=_fullBleedProfileMediaAreaController;
@property(retain, nonatomic) FBContextualTimelineActionBarController *actionBarController; // @synthesize actionBarController=_actionBarController;
@property(retain, nonatomic) FBContextualTimelineIntroCardSelfItemsController *introCardSelfItemsController; // @synthesize introCardSelfItemsController=_introCardSelfItemsController;
@property(retain, nonatomic) FBContextualTimelineFullLengthFriendingButtonCell *fullLengthFriendingButtonCell; // @synthesize fullLengthFriendingButtonCell=_fullLengthFriendingButtonCell;
@property(retain, nonatomic) FBContextualTimelineHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableViewCell *headerCell; // @synthesize headerCell=_headerCell;
@property(retain, nonatomic) FBProfileTimelineQuickPromotionViewController *timelineQuickPromotionViewController; // @synthesize timelineQuickPromotionViewController=_timelineQuickPromotionViewController;
@property(retain, nonatomic) FBContextualTimelineQuickPromotionController *quickPromotionController; // @synthesize quickPromotionController=_quickPromotionController;
@property(retain, nonatomic) FBMemPerson *person; // @synthesize person=_person;
@property(nonatomic) unsigned long long fallbackCellDataSourceSectionStartIndex; // @synthesize fallbackCellDataSourceSectionStartIndex=_fallbackCellDataSourceSectionStartIndex;
@property(readonly, nonatomic) FBContextualTimelineHeaderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) FBProfileFallbackCellDataSourceUpdater *fallbackCellDataSourceUpdater; // @synthesize fallbackCellDataSourceUpdater=_fallbackCellDataSourceUpdater;
@property(retain, nonatomic) id <FBSectionedDataSourceWriting> writeInterface; // @synthesize writeInterface=_writeInterface;
@property(nonatomic) _Bool headerDidLoad; // @synthesize headerDidLoad=_headerDidLoad;
@property(nonatomic) __weak id <FBPersonContextualTimelineHeaderDataSourceDelegate> contextualTimelineDelegate; // @synthesize contextualTimelineDelegate=_contextualTimelineDelegate;
@property(nonatomic) __weak id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
@property(retain, nonatomic) FBTimelineTemporaryCoverPhoto *temporaryCoverPhoto; // @synthesize temporaryCoverPhoto=_temporaryCoverPhoto;
@property(nonatomic) _Bool isCoverEditMode; // @synthesize isCoverEditMode=_isCoverEditMode;
- (void).cxx_destruct;
- (void)didDismissProfileTimelineQuickPromotion:(_Bool)arg1;
- (unsigned long long)fallbackCellDataSourceNumberOfRowsInSection:(unsigned long long)arg1;
- (unsigned long long)fallbackCellDataSourceNumberOfSections;
- (void)setTemporaryCoverFocus:(struct CGPoint)arg1;
- (struct CGPoint)temporaryCoverFocus;
- (_Bool)_isViewingSelf;
- (void)timelineViewDidScroll:(id)arg1;
- (void)_updateIntroCardSelfItem;
- (void)_logProfileRefresherEntryPointViewIfNeeded;
- (void)logHeaderEvents;
- (void)updateFullLengthFriendingButton;
- (void)updateActionBar;
- (void)updateHeaderView;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (_Bool)_shouldShowFullWidthProfileMedia;
- (id)headerBottomPaddingCell;
- (_Bool)_shouldUpdateIntroCardSelfItem;
- (_Bool)_showIntroCardSelfItemsSection;
- (unsigned long long)cellTypeForIndexPath:(id)arg1;
- (id)cellForType:(unsigned long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)addInitialSectionsAndRowsIfNecessary;
- (id)viewModelAtIndexPath:(id)arg1;
- (void)configureWithPerson:(id)arg1 hasFullySyncedHeaderDetails:(_Bool)arg2;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 configuration:(id)arg3 analyticsUUID:(id)arg4 toolbox:(id)arg5 isUsingSectionComponent:(_Bool)arg6;

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSettingTableViewController.h"

#import "NMSettingSwitchCellDelegate.h"

@class NMSettingSwitchCell, NSString;

@interface NMSubSettingViewController : NMSettingTableViewController <NMSettingSwitchCellDelegate>
{
    _Bool _isUnicomSettingOn;
    unsigned long long sectionCount;
    unsigned long long equalizerRow;
    unsigned long long classicPlayViewRow;
    unsigned long long controlCenterMenuRow;
    unsigned long long lyricPingSuoRow;
    unsigned long long lyricTranslateRow;
    unsigned long long lyricRowCount;
    NMSettingSwitchCell *_runFMCell;
    _Bool _scrollToLocalMusiciPodSetting;
}

@property(nonatomic) _Bool scrollToLocalMusiciPodSetting; // @synthesize scrollToLocalMusiciPodSetting=_scrollToLocalMusiciPodSetting;
- (void).cxx_destruct;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (double)heightForFooterInSection:(long long)arg1;
- (id)viewForFooterInSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (_Bool)hasHeaderInSection:(long long)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (long long)numberOfSections;
- (id)createNormalTableViewCell;
- (id)createSettingSwitchCell:(id)arg1;
- (id)createSettingSwitchCell;
- (id)_offlinePackageSize:(_Bool)arg1;
- (void)settingSwitchCell:(id)arg1 switchValueChanged:(_Bool)arg2;
- (void)triggerDownload;
- (void)backAction:(id)arg1;
- (void)_offlinePackageSizeChanged:(id)arg1;
- (void)wannStateChanged:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_refreshTableSetionCount;
- (void)loadView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)effectorEnableChanged:(id)arg1;
- (void)tableReloadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


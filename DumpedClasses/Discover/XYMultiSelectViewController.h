//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSMutableArray, NSString, UIButton, UICollectionView, UILabel;

@interface XYMultiSelectViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _showGuideButton;
    NSArray *_choicesArray;
    NSString *_subTitle;
    NSMutableArray *_selectedIndexArray;
    id <XYMultiSelectViewControllerDelegate> _delegate;
    long long _minSelectCount;
    long long _maxSelectCount;
    NSArray *_conflictIndexArray;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UIButton *_guideButton;
    UICollectionView *_collectionView;
    NSMutableArray *_selectedArray;
}

@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *guideButton; // @synthesize guideButton=_guideButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *conflictIndexArray; // @synthesize conflictIndexArray=_conflictIndexArray;
@property(nonatomic) _Bool showGuideButton; // @synthesize showGuideButton=_showGuideButton;
@property(nonatomic) long long maxSelectCount; // @synthesize maxSelectCount=_maxSelectCount;
@property(nonatomic) long long minSelectCount; // @synthesize minSelectCount=_minSelectCount;
@property(nonatomic) __weak id <XYMultiSelectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *selectedIndexArray; // @synthesize selectedIndexArray=_selectedIndexArray;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSArray *choicesArray; // @synthesize choicesArray=_choicesArray;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
- (void)showHUDWithTitle:(id)arg1;
- (void)guideButtonEvent;
- (void)cancelButtonEvent;
- (void)confirmButtonEvent;
- (void)didReceiveMemoryWarning;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupUI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


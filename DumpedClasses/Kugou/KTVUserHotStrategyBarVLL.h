//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KTVUserHotStrategyGuideBarDelegate.h"

@class KTVUserHotStrategyGuideBar, NSString;

@interface KTVUserHotStrategyBarVLL : NSObject <KTVUserHotStrategyGuideBarDelegate>
{
    id <KTVUserHotStrategyBarVLLDelegate> _delegate;
    KTVUserHotStrategyGuideBar *_hotStrategyBar;
}

@property(retain, nonatomic) KTVUserHotStrategyGuideBar *hotStrategyBar; // @synthesize hotStrategyBar=_hotStrategyBar;
@property(nonatomic) __weak id <KTVUserHotStrategyBarVLLDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapViewInKTVUserHotStrategyGuideBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCSTSOrderBaseViewController.h"

#import "DCCompleteOrdeDelegate.h"
#import "DCDNavBarUnitDelegate.h"

@class DCDCompleteAcceptUnit, DCDNavigationBarUnit, DCYSInviteGetInfoBaseModel, NSString;

@interface DCDAcceptPViewController : DCSTSOrderBaseViewController <DCCompleteOrdeDelegate, DCDNavBarUnitDelegate>
{
    DCDCompleteAcceptUnit *_completeOrderCom;
    DCDNavigationBarUnit *_navBarCom;
}

+ (void)load;
@property(retain, nonatomic) DCDNavigationBarUnit *navBarCom; // @synthesize navBarCom=_navBarCom;
@property(retain, nonatomic) DCDCompleteAcceptUnit *completeOrderCom; // @synthesize completeOrderCom=_completeOrderCom;
- (void).cxx_destruct;
- (void)navBarEvent:(id)arg1;
- (void)updateViewFrame;
- (void)setNavigationTitle:(id)arg1;
- (void)refreshOrderModel:(id)arg1;
- (void)navBarCom:(id)arg1 orderIds:(id)arg2;
- (_Bool)isPackageOrdersForNavBarCom:(id)arg1;
- (id)orderIdWillShowNavBarCom:(id)arg1;
- (_Bool)isInMapNavigationForNavBarCom:(id)arg1;
- (void)refreshOrderInfoView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) DCYSInviteGetInfoBaseModel *originModel; // @dynamic originModel;
@property(readonly) Class superclass;

@end

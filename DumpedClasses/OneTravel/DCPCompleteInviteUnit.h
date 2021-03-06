//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCCompleteOrderCom.h"

@class DCPCompleteInviteStore, DCYSInviteGetInfoBaseModel;

@interface DCPCompleteInviteUnit : DCCompleteOrderCom
{
    DCPCompleteInviteStore *_dataStore;
    DCYSInviteGetInfoBaseModel *_orderModel;
}

@property(retain, nonatomic) DCYSInviteGetInfoBaseModel *orderModel; // @synthesize orderModel=_orderModel;
@property(retain, nonatomic) DCPCompleteInviteStore *dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (id)eventKey:(id)arg1 event:(id)arg2;
- (void)addAnalyticsEvent:(id)arg1 event:(id)arg2;
- (void)sendNotificationWhenReloadStateChanged:(id)arg1;
- (void)cancelOrderInvite;
- (void)showCancelAlert:(id)arg1;
- (void)cancelInvite:(id)arg1;
- (void)showInVaildAlert:(id)arg1;
- (void)createOrderInvite;
- (void)beginCreateOrderInvite;
- (void)clickedInviteWithOrderEmergeEvent:(id)arg1;
- (id)showInviteDriverInfoView;
- (void)clickConfirmInfoEmergeAction:(id)arg1;
- (void)showConfirmView;
- (id)getCalculateModel;
- (void)checkOrderState;
- (void)clickedNumberConfigEmergeEvent:(id)arg1;
- (void)showPassengerConfigSelect;
- (void)clickedNumberEmergeEvent:(id)arg1;
- (void)showPassengerNumberSelect;
- (void)clickedTimeEmergeEvent:(id)arg1;
- (void)showTimeSelect;
- (void)checkPassengerNumberSelect;
- (void)checkTimeSelect;
- (void)showConfirmAlert;
- (void)confirmConfig;
- (void)beginCheckOrderState;
- (void)dispacthEvent:(long long)arg1;
- (void)orderProcessOperation;

@end


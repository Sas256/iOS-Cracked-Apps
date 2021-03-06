//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGAllCloseControllerViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UILabel, UITableView, UIView;

@interface PaymentMethodsViewController : KGAllCloseControllerViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_mainTableView;
    long long _rmb;
    long long _paymentMethod;
    UIView *_descriptionView;
    UILabel *_descriptionTitleLabel;
    UILabel *_descriptionTextLabel;
    _Bool _isRenew;
    int _package;
    long long _goodsType;
    NSString *_goods;
    long long _vipDuration;
    double _price;
    NSString *_proId;
    id _objectThatNeedsUpdate;
    NSArray *_paymentTypes;
    long long _paymentType;
}

@property(nonatomic) long long paymentType; // @synthesize paymentType=_paymentType;
@property(retain, nonatomic) NSArray *paymentTypes; // @synthesize paymentTypes=_paymentTypes;
@property(nonatomic) int package; // @synthesize package=_package;
@property(nonatomic) _Bool isRenew; // @synthesize isRenew=_isRenew;
@property(nonatomic) __weak id objectThatNeedsUpdate; // @synthesize objectThatNeedsUpdate=_objectThatNeedsUpdate;
@property(copy, nonatomic) NSString *proId; // @synthesize proId=_proId;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) long long vipDuration; // @synthesize vipDuration=_vipDuration;
@property(retain, nonatomic) NSString *goods; // @synthesize goods=_goods;
@property(nonatomic) long long goodsType; // @synthesize goodsType=_goodsType;
- (void).cxx_destruct;
- (int)ISvipAccount;
- (id)getStringInJSONString:(id)arg1 WithKey:(id)arg2;
- (id)JSONString_kgjsonextention:(id)arg1;
- (id)clientTimeString;
- (void)showAlertViewMsg:(id)arg1;
- (void)handleKubiIAPBuyThread:(id)arg1;
- (void)handleVipIAPBuyFinish;
- (void)toAppStorePaymentWithProID:(id)arg1;
- (id)getVIPOrderStringWithPaymentMethod:(long long)arg1;
- (void)getPaymentOrderStringThreadFail;
- (void)refreshVipInfoCompleteAction;
- (void)handlePaymentMethodSelection:(long long)arg1;
- (void)appleStorePaymentMethodSelection;
- (long long)paymentMethodWithPayment:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)initSubviews;
- (void)initPaymentTypes;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithGoodsType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


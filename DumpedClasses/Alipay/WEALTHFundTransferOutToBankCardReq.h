//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHCommonRequest.h"

@class NSString, WEALTHBankCardForTransferOut;

@interface WEALTHFundTransferOutToBankCardReq : WEALTHCommonRequest
{
    WEALTHBankCardForTransferOut *_bankCardForTransferOut;
    NSString *_transferAmount;
    NSString *_password;
    NSString *_passwordType;
    NSString *_fundCode;
    NSString *_tid;
    NSString *_securityId;
}

@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *fundCode; // @synthesize fundCode=_fundCode;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *transferAmount; // @synthesize transferAmount=_transferAmount;
@property(retain, nonatomic) WEALTHBankCardForTransferOut *bankCardForTransferOut; // @synthesize bankCardForTransferOut=_bankCardForTransferOut;
- (void).cxx_destruct;

@end

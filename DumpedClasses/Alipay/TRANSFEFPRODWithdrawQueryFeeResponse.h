//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRANSFEFPRODWithdrawRPCResponse.h"

@class NSString;

@interface TRANSFEFPRODWithdrawQueryFeeResponse : TRANSFEFPRODWithdrawRPCResponse
{
    _Bool _immunity;
    _Bool _needNotice;
    NSString *_availableAmount;
    NSString *_feeAmount;
    NSString *_withdrawAmount;
    NSString *_feeTitle;
    NSString *_feeNotice;
}

@property(retain, nonatomic) NSString *feeNotice; // @synthesize feeNotice=_feeNotice;
@property(retain, nonatomic) NSString *feeTitle; // @synthesize feeTitle=_feeTitle;
@property(retain, nonatomic) NSString *withdrawAmount; // @synthesize withdrawAmount=_withdrawAmount;
@property(retain, nonatomic) NSString *feeAmount; // @synthesize feeAmount=_feeAmount;
@property(retain, nonatomic) NSString *availableAmount; // @synthesize availableAmount=_availableAmount;
@property(nonatomic) _Bool needNotice; // @synthesize needNotice=_needNotice;
@property(nonatomic) _Bool immunity; // @synthesize immunity=_immunity;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface WEALTHFundTransferInSuccessReq : NSObject
{
    _Bool _qureyDateTag;
    NSString *_tradeNo;
    NSDictionary *_extInfo;
}

+ (Class)extInfoElementClass;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool qureyDateTag; // @synthesize qureyDateTag=_qureyDateTag;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
- (void).cxx_destruct;

@end

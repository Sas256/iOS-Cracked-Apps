//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSFundProdBaseReqVO.h"

@class NSArray, NSString;

@interface MOBILEPRODCreateGroupReq : CSFundProdBaseReqVO
{
    NSArray *_members;
    NSString *_amount;
}

+ (Class)membersElementClass;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSArray *members; // @synthesize members=_members;
- (void).cxx_destruct;

@end

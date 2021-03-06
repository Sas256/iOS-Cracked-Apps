//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSTimer;

@interface GetTroopRemarkManager : NSObject
{
    NSTimer *_timer;
    NSMutableArray *_array;
    int _dwIndex;
    int _repeatCount;
    id <GetTroopRemarkProtocol> _delegate;
    NSMutableDictionary *_GroupRemarkDic;
    int _autoSeq;
    int _manuSeq;
    int _xo;
}

+ (id)GetNeedTroopRemarkList;
+ (id)GetInstance;
- (void).cxx_destruct;
- (void)changeAccount;
- (void)enterBackGround;
- (void)ReTimeOut;
- (void)ActionReGetTroopRemark:(id)arg1;
- (void)ActionGetBatchMemberRemark:(id)arg1;
- (void)requestBatchMemberRemark:(id)arg1 groupCode:(id)arg2;
- (void)ActionGetMemberRemark:(id)arg1;
- (void)getMemberRemark:(id)arg1 groupCode:(id)arg2 groupUIN:(long long)arg3;
- (void)ReGetTroopRemark:(id)arg1;
- (void)stopGetTroopRemark;
- (void)timeOut;
- (void)Action:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)init:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *array; // @dynamic array;
@property(nonatomic) __weak id <GetTroopRemarkProtocol> delegate; // @dynamic delegate;
@property(nonatomic) int dwIndex; // @dynamic dwIndex;

@end


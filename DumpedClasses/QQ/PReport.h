//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface PReport : NSObject
{
    NSMutableArray *spCare;
    NSMutableArray *commGList;
    NSMutableArray *commDList;
    NSMutableArray *topQList;
    NSMutableArray *topGList;
    NSMutableArray *topDList;
    NSMutableDictionary *fMap;
    unsigned long long ts;
    int _friendCount;
}

- (void).cxx_destruct;
- (void)doJob;
- (void)doJobInternel;
- (void)reportUinList:(id)arg1 key:(id)arg2 dict:(id)arg3;
- (void)loadData;
- (void)setFriendNum:(int)arg1;
- (int)getFriendsNum;
- (void)clearData;
- (id)init;

@end


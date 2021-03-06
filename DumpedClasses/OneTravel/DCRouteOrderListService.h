//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseService.h"

@class NSDictionary, NSMutableArray;

@interface DCRouteOrderListService : DCBaseService
{
    NSDictionary *_actions;
    NSMutableArray *_requestCacheList;
}

+ (id)sharedInstance;
@property(retain) NSMutableArray *requestCacheList; // @synthesize requestCacheList=_requestCacheList;
@property(copy, nonatomic) NSDictionary *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (_Bool)driverS2SHasNewWithRouteID:(id)arg1;
- (void)setDriverS2SHasNew:(_Bool)arg1 oneID:(id)arg2;
- (void)cleanCache;
- (id)requestFromDateId:(id)arg1;
- (_Bool)canRequest:(id)arg1;
- (void)handleIMControlNotification:(id)arg1;
- (void)handleMessage:(id)arg1;
- (_Bool)canHandleMessageAction:(id)arg1;
- (void)steupURLObserver;
- (void)inviteStateDidChange:(id)arg1;
- (void)serviceDidLoad;
- (void)dealloc;
- (id)init;
- (void)handleAPNsMessage:(id)arg1;
- (void)registerAPNSMsg;

@end


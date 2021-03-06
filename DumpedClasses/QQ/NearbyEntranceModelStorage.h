//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUserData, NSArray, NSDictionary, NSMutableDictionary, NSString, NearbySelfInfoModel, QQNearByFilterModel;

@interface NearbyEntranceModelStorage : NSObject
{
    NSArray *_nearbyFriendArray;
    CUserData *_userData;
    NSString *_lastUin;
    NSDictionary *_nearByGroupInfo;
    NSArray *_nearbyAdList;
    QQNearByFilterModel *_filterModel;
    int _xo;
    _Bool *_needClearNearbyAnimatePlayedDict;
    NSDictionary *_nearbyFriendRecommendationDict;
    NearbySelfInfoModel *_nearbySelfInfoModel;
    NSMutableDictionary *_nearbyAnimatePlayedDict;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *nearbyAnimatePlayedDict; // @synthesize nearbyAnimatePlayedDict=_nearbyAnimatePlayedDict;
@property(retain, nonatomic) NearbySelfInfoModel *nearbySelfInfoModel; // @synthesize nearbySelfInfoModel=_nearbySelfInfoModel;
@property(retain, nonatomic) NSDictionary *nearbyFriendRecommendationDict; // @synthesize nearbyFriendRecommendationDict=_nearbyFriendRecommendationDict;
@property _Bool *needClearNearbyAnimatePlayedDict; // @synthesize needClearNearbyAnimatePlayedDict=_needClearNearbyAnimatePlayedDict;
- (void)clearNearbyAnimationPlayDict;
- (void)setNearbyAnimationPlayed:(id)arg1 isPlayed:(_Bool)arg2;
- (_Bool)isNearbyAnimationPlayed:(id)arg1;
- (void)clearStorageCacheAndNearbyFriendListFile;
- (void)saveNearbySelfInfoModelToFile:(id)arg1;
- (id)getNearbySelfInfoModelFromFile;
- (void)saveNearbySelfInfoModelCache:(id)arg1;
- (id)getNearbySelfInfoModelCache;
- (id)getNearbyRecommendationDictFromFile;
- (void)saveNearbyRecommendationDictToFile:(id)arg1;
- (void)saveNearbyRecommendationDictCache:(id)arg1;
- (id)getNearbyRecommendationDictCache;
- (id)getNearbyFriendListFromFile;
- (void)saveNearbyFriendListToFile:(id)arg1;
- (id)getNearbyFilterModel;
- (void)saveNearbyFilterModel:(id)arg1;
- (void)clearStorageCache;
- (void)saveNearbyAdList:(id)arg1;
- (void)saveNearbyFriendList:(id)arg1;
- (void)saveUserData:(id)arg1;
- (id)getUserDataCache;
- (id)getNearbyAdListCache;
- (id)getNearbyFriendListCache;
- (id)getNearbyListOperations;
- (id)NearbySelfInfoModelCachePath;
- (id)EncounterNearbyRecommendationCachePath;
- (id)EncounterCacheDir;
- (void)changeAccount:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) QQNearByFilterModel *filterModel; // @dynamic filterModel;
@property(copy, nonatomic) NSString *lastUin; // @dynamic lastUin;
@property(retain, nonatomic) NSDictionary *nearByGroupInfo; // @dynamic nearByGroupInfo;
@property(retain, nonatomic) NSArray *nearbyAdList; // @dynamic nearbyAdList;
@property(retain, nonatomic) NSArray *nearbyFriendArray; // @dynamic nearbyFriendArray;
@property(retain, nonatomic) CUserData *userData; // @dynamic userData;

@end


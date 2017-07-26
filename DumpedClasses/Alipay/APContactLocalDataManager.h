//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APConfigObserverProtocol.h"

@class APCustomStorage, NSArray, NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, SocialSessionLogManager;

@interface APContactLocalDataManager : NSObject <APConfigObserverProtocol>
{
    id <APContactRecentProxy> _contactRecentProxy;
    id <APContactAccountProxy> _contactAccountProxy;
    id <APNewContactMsgProxy> _newContactMsgProxy;
    _Bool _hasQuiteUnread;
    _Bool _isLoadingCache;
    _Bool _didFinishSort;
    _Bool _needStrangerBox;
    _Bool _isFirstLoad;
    long long _totalUnread;
    APCustomStorage *_storage;
    NSString *_priBoxRedDotSwitch;
    NSArray *_recentStrangers;
    NSMutableDictionary *_recentCachedDict;
    NSMutableDictionary *_contactCachedDict;
    NSMutableArray *_recentContacts;
    NSString *_currentUserID;
    NSLock *_contactLock;
    NSLock *_recentLock;
    long long _markedStrangerUnread;
    long long _totalStrangerUnread;
    NSMutableDictionary *_timeCachedDict;
    NSOperationQueue *_sortQueue;
    long long _markedChatRoomUnread;
    long long _totalChatRoomUnread;
    NSDate *_date;
    NSDate *_totalDate;
    NSMutableDictionary *_pMsgUnreadInfo;
    SocialSessionLogManager *_sessionLogManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SocialSessionLogManager *sessionLogManager; // @synthesize sessionLogManager=_sessionLogManager;
@property(retain, nonatomic) NSMutableDictionary *pMsgUnreadInfo; // @synthesize pMsgUnreadInfo=_pMsgUnreadInfo;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) NSDate *totalDate; // @synthesize totalDate=_totalDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long totalChatRoomUnread; // @synthesize totalChatRoomUnread=_totalChatRoomUnread;
@property(nonatomic) long long markedChatRoomUnread; // @synthesize markedChatRoomUnread=_markedChatRoomUnread;
@property(retain, nonatomic) NSOperationQueue *sortQueue; // @synthesize sortQueue=_sortQueue;
@property(retain) NSMutableDictionary *timeCachedDict; // @synthesize timeCachedDict=_timeCachedDict;
@property(nonatomic) long long totalStrangerUnread; // @synthesize totalStrangerUnread=_totalStrangerUnread;
@property(nonatomic) long long markedStrangerUnread; // @synthesize markedStrangerUnread=_markedStrangerUnread;
@property(retain, nonatomic) NSLock *recentLock; // @synthesize recentLock=_recentLock;
@property(retain, nonatomic) NSLock *contactLock; // @synthesize contactLock=_contactLock;
@property(retain, nonatomic) NSString *currentUserID; // @synthesize currentUserID=_currentUserID;
@property(retain) NSMutableArray *recentContacts; // @synthesize recentContacts=_recentContacts;
@property(retain) NSMutableDictionary *contactCachedDict; // @synthesize contactCachedDict=_contactCachedDict;
@property(retain) NSMutableDictionary *recentCachedDict; // @synthesize recentCachedDict=_recentCachedDict;
@property(retain) NSArray *recentStrangers; // @synthesize recentStrangers=_recentStrangers;
@property(retain, nonatomic) NSString *priBoxRedDotSwitch; // @synthesize priBoxRedDotSwitch=_priBoxRedDotSwitch;
@property(nonatomic) _Bool needStrangerBox; // @synthesize needStrangerBox=_needStrangerBox;
@property(nonatomic) _Bool didFinishSort; // @synthesize didFinishSort=_didFinishSort;
@property(nonatomic) _Bool isLoadingCache; // @synthesize isLoadingCache=_isLoadingCache;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
@property(nonatomic) _Bool hasQuiteUnread; // @synthesize hasQuiteUnread=_hasQuiteUnread;
@property(nonatomic) long long totalUnread; // @synthesize totalUnread=_totalUnread;
- (void).cxx_destruct;
- (id)getCompareTimeStringWithDate:(id)arg1;
- (void)clearCachedContacts:(id)arg1;
- (void)resortRecentContact;
- (_Bool)updateRecentContact:(id)arg1 withGroupInfo:(id)arg2 fromContactInfo:(id)arg3;
- (_Bool)updateRecentContact:(id)arg1 withAccountInfo:(id)arg2;
- (void)loadCachedData;
- (void)updateRecentChatRoomInfo:(id)arg1;
- (void)updateRecentGroupInfo:(id)arg1;
- (void)updateRecentCacheWithContactInfoList:(id)arg1;
- (_Bool)setStrangerSettingFor:(id)arg1 withSetting:(id)arg2;
- (id)getStrangerSettingFor:(id)arg1;
- (void)markALLChatRoomRead;
- (void)markAllStrangerRead;
- (void)updateNewFriendReadWithUids:(id)arg1;
- (void)updateNewFriendReadWithUid:(id)arg1;
- (void)updateAllNewFriendRead;
- (void)deleteMsgsWithMessageTypes:(id)arg1;
- (void)insertFindContactMsgsList:(id)arg1;
- (void)insertFindContactMsg:(id)arg1;
- (void)deleteMsgsWithUserID:(id)arg1;
- (id)queryLastMsgWithUserID:(id)arg1;
- (id)queryAllUserLastMsgs;
- (id)queryMsgsWithUserIDAndLimit:(id)arg1 limit:(long long)arg2;
- (id)queryMsgsWithUserID:(id)arg1;
- (void)clearAndReload;
- (id)queryRecentContactWithUserID:(id)arg1;
- (id)generateRecentGroups;
- (id)generateRecentGroupsDict;
- (id)generateRecentFriends;
- (id)generateRecentSessions;
- (void)queryLocalRecentFriendsWithCallback:(CDUnknownBlockType)arg1;
- (void)queryLocalRecentSessionsInfoWithCallback:(CDUnknownBlockType)arg1;
- (void)queryAllCachedRecent:(CDUnknownBlockType)arg1;
- (void)queryLocalRecentContactInfoWithCallback:(CDUnknownBlockType)arg1;
- (id)queryRecentContactWithBussinessIds:(id)arg1;
- (void)markAllUnusualContactsAsNormal;
- (void)markAllBlackedContactsNotBlacked;
- (void)deleteRecentContactWithUserType:(id)arg1;
- (id)queryRecentContactWithUserType:(id)arg1;
- (void)deleteAllRecent;
- (void)deleteRecentContactSyWithUserID:(id)arg1;
- (void)deleteRecentContactWithUserIDs:(id)arg1;
- (void)deleteRecentContactWithUserID:(id)arg1;
- (void)postRecentChangeOnMainThread:(id)arg1;
- (void)insertRecentContactList:(id)arg1;
- (void)insertRecentContact:(id)arg1;
- (id)queryDisplayInfoForUserIDs:(id)arg1;
- (id)queryDisplayInfoForUserID:(id)arg1;
- (id)queryFriendFromUserIds:(id)arg1;
- (id)queryInfoWithDetailForUserID:(id)arg1;
- (id)queryInfoForUserIDs:(id)arg1;
- (void)queryInfoForUserIDs:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)queryCacheInfoForUserIDs:(id)arg1;
- (id)queryCachedInfoForUserID:(id)arg1 cacheItemIfNotFound:(_Bool)arg2;
- (id)queryInfoForUserID:(id)arg1;
- (void)postBecomeFriendButNotFound:(id)arg1;
- (void)postMobileContactFinishUpdateNotification:(id)arg1;
- (void)postBecomeFriendNoti:(id)arg1;
- (void)postAPContactInfoChange:(id)arg1;
- (void)checkToFillPhoneAPContact:(id)arg1 withExistInfo:(id)arg2;
- (void)checkToFillAPContact:(id)arg1 withExistInfo:(id)arg2;
- (void)updateFriendStatus:(id)arg1 isMyFriend:(id)arg2;
- (void)updateFriendStatusAsFriends:(id)arg1;
- (void)insertMyFriendList:(id)arg1;
- (void)insertOrUpdateAPContactInfoFromMobileContact:(id)arg1 needClearAll:(_Bool)arg2;
- (void)insertOrUpdateAPContactInfoListSynchronizly:(id)arg1 fillItem:(_Bool)arg2;
- (void)insertOrUpdateAPContactInfoList:(id)arg1 fillItem:(_Bool)arg2;
- (void)insertOrUpdateAPContactInfo:(id)arg1 fillItem:(_Bool)arg2;
- (void)insertOrUpdateAPContactInfo:(id)arg1;
- (id)queryFriendsAndKnownMobileContacts;
- (id)queryRelatedAliPayContacts;
- (id)queryAllMobilePhoneAccounts;
- (void)clearCachedMobileInfo:(id)arg1;
- (id)clearAliPayMobileInfoByPhones:(id)arg1;
- (id)deleteContactInfos:(id)arg1;
- (id)queryMobilePhoneByPhones:(id)arg1;
- (id)queryMobileAccount;
- (id)queryUnusualAccounts;
- (id)queryBlackAccounts;
- (id)queryStartFriends;
- (id)queryAllFriendPrimaryKeys;
- (id)queryHasFriends;
- (id)queryAllMyFriends;
- (id)clearAllExposedAlipayAccountInfo;
- (id)deleteAllNoAliPayMobileInfo;
- (id)clearAllMobileInfo;
- (void)cleanMobileInfoInfQueue;
- (void)resetTimeCache:(id)arg1;
- (id)getSearchDictWithArguments:(id)arg1;
- (void)registerContactGlobeSearch;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

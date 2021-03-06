//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"

@class IQYQOSDataManager, IQYQiDanManager, IQYUserManager, IQYVCodecManager, NSMutableArray, NSString;

@interface AppDelegate_Extension : NSObject <IQYDataLoadManagerDelegate>
{
    _Bool _isForceInitPuma;
    _Bool _isInitPumaP2p;
    _Bool _isInitPumaPlayer;
    IQYUserManager *_userMgr;
    IQYQOSDataManager *_qosMgr;
    IQYQiDanManager *_qidanManager;
    IQYQOSDataManager *_qosStargMgr;
    NSMutableArray *_arrQdMgr;
    IQYVCodecManager *_vcodecManager;
}

+ (void)setupQYApm;
+ (void)cleanAllCacheFile;
+ (id)getPlatformCode;
+ (void)writeInChars:(char *)arg1 str:(id)arg2;
+ (void)initLivePlayerParamsStruct:(struct MctoLiveControllerParams_ *)arg1 withPlayerStruct:(struct MctoPlayerParams_ *)arg2;
+ (void)initMctoPlayerParamsStruct:(struct MctoPlayerParams_ *)arg1;
+ (void)initMctoPlayerP2PParamsStruct:(struct MctoPlayerP2PParams_ *)arg1;
+ (void)resetVipExpiredReminderFlag;
+ (id)getPlayerAdExportLogs;
+ (id)getPumaPlayerLogs;
+ (void)setUpQYPlayerInit;
+ (void)setRemoteNotificationTypes;
+ (void)addAppExtensionHotfixData;
+ (void)deleteAppExtensionData;
+ (void)addAppExtensionData;
+ (void)setDebugUrlString;
+ (id)getQYPlayerControllerVersion;
+ (id)getQYPlayerAVLibVersion;
+ (id)pumaHCDNVersion;
+ (id)pumaPlayerVersion;
+ (void)setPumaState:(id)arg1;
+ (void)uninitialP2P;
+ (void)uninitialPumaPlayer;
+ (void)writeLogToFile:(id)arg1;
+ (void)setupRemoteNotificationForIOS10AndLater;
+ (void)setupRemoteNotificationForIOS8AndLater;
+ (void)setupRemoteNotificationForIOS8Before;
+ (void)setupRemoteNotificationAndRegister;
+ (id)stringFromDate:(id)arg1;
+ (id)getLogPath;
+ (double)clearAdCache;
+ (double)clearWebviewCache;
+ (double)clearCache;
+ (void)upgradeApps;
+ (void)launchP2PTask;
+ (_Bool)needOpenP2p;
+ (void)setPumaAdSDKState;
+ (id)getCupicSDKVersion;
+ (void)initCupidSDK;
+ (_Bool)isJailBreakJudge;
+ (void)launchInitPumaPlayer;
+ (void)startIRStatistics;
+ (void)startMobileAppStatistics;
+ (void)startAppsFlyerStatisticsTracker;
+ (void)startAppsFlyerStatistics;
+ (void)registerWeiXin;
+ (id)sharedInstance;
@property(retain, nonatomic) IQYVCodecManager *vcodecManager; // @synthesize vcodecManager=_vcodecManager;
@property(retain, nonatomic) NSMutableArray *arrQdMgr; // @synthesize arrQdMgr=_arrQdMgr;
@property(retain, nonatomic) IQYQOSDataManager *qosStargMgr; // @synthesize qosStargMgr=_qosStargMgr;
@property(retain, nonatomic) IQYQiDanManager *qidanManager; // @synthesize qidanManager=_qidanManager;
@property(retain, nonatomic) IQYQOSDataManager *qosMgr; // @synthesize qosMgr=_qosMgr;
@property(nonatomic) _Bool isInitPumaPlayer; // @synthesize isInitPumaPlayer=_isInitPumaPlayer;
@property(nonatomic) _Bool isInitPumaP2p; // @synthesize isInitPumaP2p=_isInitPumaP2p;
@property(nonatomic) _Bool isForceInitPuma; // @synthesize isForceInitPuma=_isForceInitPuma;
@property(retain, nonatomic) IQYUserManager *userMgr; // @synthesize userMgr=_userMgr;
- (void)parsePlayerDecoderConfig;
- (void)QiXiuSwitchChanged;
- (void)updateAreaPara;
- (void)areaChanged;
- (void)QiDanManagerDidFinished:(id)arg1;
- (void)IOS8PushQidanRequest;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)requestRateListsForThisDevice;
- (void)sendQOSForThirdShare:(id)arg1;
- (void)sendStartQos:(int)arg1;
- (id)ppsFavoritesForQiyi;
- (id)ppsHistorysForQiyi;
- (void)upgradeLoginInfo;
- (void)upgradePlayHistoryAndFavors;
- (void)forcePumaPlayer:(long long)arg1;
- (void)uninitialP2P;
- (void)launchP2PTask;
- (void)initPumaP2p:(_Bool)arg1 appStartType:(long long)arg2;
- (void)uninitialPumaPlayer;
- (void)startlaunchInitPumaPlayer;
- (void)initPumaPlayer:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


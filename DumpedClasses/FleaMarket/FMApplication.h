//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMURLRouterAppDelegate.h"

@class FMCacheObject, FMSetting, NSDictionary, NSString, TBIUCache, UINavigationController, UIViewController;

@interface FMApplication : NSObject <FMURLRouterAppDelegate>
{
    FMCacheObject *_cacheObject;
    TBIUCache *_voiceCache;
    _Bool _isFromPushOrURL;
    FMSetting *_setting;
    NSDictionary *_remoteSetting;
}

+ (id)instance;
@property _Bool isFromPushOrURL; // @synthesize isFromPushOrURL=_isFromPushOrURL;
@property(nonatomic) __weak TBIUCache *voiceCache; // @synthesize voiceCache=_voiceCache;
@property(readonly) NSDictionary *remoteSetting; // @synthesize remoteSetting=_remoteSetting;
@property(readonly) FMSetting *setting; // @synthesize setting=_setting;
- (void).cxx_destruct;
- (void)urlRouter:(id)arg1 applicationOpenLoginWithResult:(CDUnknownBlockType)arg2;
- (void)urlRouter:(id)arg1 applicationOpenTabWithObject:(id)arg2;
- (id)applicationWebViewRouterOptions:(id)arg1;
- (id)applicationCurrentNavigationController:(id)arg1;
- (id)applicationCurrentController:(id)arg1;
- (id)getRemoteConfigWithKey:(id)arg1 defaultValue:(id)arg2;
- (id)getRemoteSetting:(id)arg1;
- (void)cleanDiskCache;
- (void)asyncSaveToPreference;
- (void)saveToPreference;
- (void)loadFromPreference;
- (void)requestRemoteConfig;
- (void)openRouterURL:(id)arg1;
- (void)handleURL:(id)arg1;
- (_Bool)applicationOpenURL:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)reachabilityReachableChangedHandler;
- (void)loginCenterLoginFailHandler;
- (void)loginCenterLoginSuccessHandler;
- (void)loginCenterLogoutHandler;
- (void)homeViewDidAppear;
@property(readonly, nonatomic) __weak UINavigationController *currentNavigationController;
@property(readonly, nonatomic) __weak UIViewController *currentViewController;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

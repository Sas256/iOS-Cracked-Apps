//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QYAPPDownloadADViewDelegate-Protocol.h"
#import "QYAdViewManagerDelegate-Protocol.h"
#import "QYClarityAdMangerDelegate-Protocol.h"
#import "QYCommonOverlayAdsManagerDelegate-Protocol.h"
#import "QYEpisodeAdMangerDelegate-Protocol.h"
#import "QYPauseAdsViewDelegate-Protocol.h"
#import "QYPreAdControlViewDelegate-Protocol.h"
#import "QYReadyButManagerDelegate-Protocol.h"

@class MRAdView, NSString, NSTimer, QYAPPDownloadADView, QYClarityAdManger, QYCommonOverlayAdsManager, QYEpisodeAdManger, QYOfflineCacheAdManager, QYPauseAdsView, QYPlayerViewController, QYPreAdControlView, QYReadyBuyManager;
@protocol QYAdManagerDelegate;

@interface QYAdManager : NSObject <QYCommonOverlayAdsManagerDelegate, QYPreAdControlViewDelegate, QYReadyButManagerDelegate, QYAdViewManagerDelegate, QYClarityAdMangerDelegate, QYEpisodeAdMangerDelegate, QYPauseAdsViewDelegate, QYAPPDownloadADViewDelegate>
{
    QYCommonOverlayAdsManager *_commonOverLayAdsManager;
    QYReadyBuyManager *_readyBuyManager;
    NSTimer *_pauseAdTimer;
    long long _requestNextPauseAdDuration;
    long long _currentTimerCount;
    _Bool _pauseLoadAdFailed;
    QYPauseAdsView *_tempPauseAdsView;
    int _currentPauseType;
    _Bool _isAppDownloadViewShowed;
    _Bool _needRetry;
    unsigned int _pauseAdId;
    id <QYAdManagerDelegate> _delegate;
    QYClarityAdManger *_clarityADManager;
    QYEpisodeAdManger *_episodeADManager;
    QYAPPDownloadADView *_appDownloadAdView;
    MRAdView *_mrAdView;
    NSString *_mrAdURL;
    NSString *_pauseAdUrl;
    QYPauseAdsView *_pauseAdView;
    QYPreAdControlView *_preAdControlView;
    QYPlayerViewController *_playerViewController;
    QYOfflineCacheAdManager *_cacheAdManager;
}

@property(retain, nonatomic) QYOfflineCacheAdManager *cacheAdManager; // @synthesize cacheAdManager=_cacheAdManager;
@property(nonatomic) __weak QYPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) QYPreAdControlView *preAdControlView; // @synthesize preAdControlView=_preAdControlView;
@property(nonatomic) _Bool needRetry; // @synthesize needRetry=_needRetry;
@property(retain, nonatomic) QYPauseAdsView *pauseAdView; // @synthesize pauseAdView=_pauseAdView;
@property(copy, nonatomic) NSString *pauseAdUrl; // @synthesize pauseAdUrl=_pauseAdUrl;
@property(nonatomic) unsigned int pauseAdId; // @synthesize pauseAdId=_pauseAdId;
@property(nonatomic) _Bool isAppDownloadViewShowed; // @synthesize isAppDownloadViewShowed=_isAppDownloadViewShowed;
@property(copy, nonatomic) NSString *mrAdURL; // @synthesize mrAdURL=_mrAdURL;
@property(retain, nonatomic) MRAdView *mrAdView; // @synthesize mrAdView=_mrAdView;
@property(retain, nonatomic) QYAPPDownloadADView *appDownloadAdView; // @synthesize appDownloadAdView=_appDownloadAdView;
@property(retain, nonatomic) QYEpisodeAdManger *episodeADManager; // @synthesize episodeADManager=_episodeADManager;
@property(retain, nonatomic) QYClarityAdManger *clarityADManager; // @synthesize clarityADManager=_clarityADManager;
@property(retain, nonatomic) QYReadyBuyManager *readyBuyManager; // @synthesize readyBuyManager=_readyBuyManager;
@property(retain, nonatomic) QYCommonOverlayAdsManager *commonOverLayAdsManager; // @synthesize commonOverLayAdsManager=_commonOverLayAdsManager;
@property(nonatomic) __weak id <QYAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeEpisodeAd;
- (void)sendCacheAdAction:(int)arg1 message:(id)arg2;
- (void)adManager:(id)arg1 adView:(id)arg2 jumpToUrl:(id)arg3 type:(int)arg4 message:(id)arg5;
- (id)adManager:(id)arg1 getAdsParentView:(id)arg2;
- (void)adManager:(id)arg1 adView:(id)arg2 sendPingBack:(int)arg3 message:(id)arg4;
- (void)adManager:(id)arg1 adView:(id)arg2 sendCreativePingBack:(int)arg3 index:(int)arg4 message:(id)arg5;
- (void)adManager:(id)arg1 adConflictFinish:(int)arg2 message:(id)arg3;
- (void)adManager:(id)arg1 adConflictBegin:(int)arg2 message:(id)arg3;
- (void)sendEpisodeADPingBack:(unsigned int)arg1 url:(id)arg2;
- (void)episodeAdManger:(id)arg1 updateEpisodeAdview:(_Bool)arg2;
- (void)clarityAdmanager:(id)arg1 updateClarityAdview:(id)arg2;
- (_Bool)isOpenInMainPlayerController;
- (_Bool)isPlayerShowBottomControl;
- (void)refreshPreAdView;
- (void)closeVR;
- (void)openVR;
- (float)getVolume;
- (void)creatPauseAdView:(id)arg1;
- (id)getEpisodeAdView:(_Bool)arg1;
- (id)getAdModel;
- (id)getClarityAdView;
- (id)getOfflineCacheAdata;
- (void)showCacheBanner:(id)arg1;
- (void)updateAdModel:(id)arg1 modelType:(int)arg2 templateType:(int)arg3;
- (void)commonOverLayPauseForClick;
- (void)resumeForType:(int)arg1;
- (void)pauseForType:(int)arg1;
- (void)closePauseView:(id)arg1;
- (void)clickPauseAdView:(id)arg1 clickUrl:(id)arg2 type:(int)arg3;
- (void)loadPauseViewFailed:(id)arg1;
- (void)pauseAdsViewLoad:(id)arg1;
- (void)creativePauseView:(id)arg1 loadCreativeH5Ad:(id)arg2;
- (void)pauseOrResumePauseAdTimer:(_Bool)arg1;
- (void)requestNextPauseAd;
- (void)releasePauseAdTimer;
- (void)startPauseAdTimer;
- (void)doPauseADView:(id)arg1 clickUrl:(id)arg2;
- (_Bool)isHasPauseAdView;
- (void)closePauseAdView;
- (void)showToastWithText:(id)arg1;
- (void)resumeCommonOverlay;
- (int)getAdFromTypeFromManger:(id)arg1 adView:(id)arg2 jumpType:(int)arg3;
- (id)getAdMangerFromJumpType:(int)arg1 adType:(int)arg2;
- (void)resumeAdForJumpType:(int)arg1 adType:(int)arg2 message:(id)arg3;
- (_Bool)isNullOrEmptyString:(id)arg1;
- (void)overlayManager:(id)arg1 overlayView:(id)arg2 clickType:(int)arg3 url:(id)arg4;
- (id)overlayManager:(id)arg1 getAdsParentView:(id)arg2;
- (void)overlayManager:(id)arg1 sendPingBack:(int)arg2 message:(id)arg3;
- (void)clickAdsToQiXiuWithUrl:(id)arg1 andBlockType:(id)arg2;
- (void)clickAdsToReadWithUrl:(id)arg1 type:(int)arg2;
- (void)fullPlayerPannelEvent:(int)arg1;
- (void)closeOfflineCacheAD;
- (void)adRollEnd:(int)arg1;
- (void)adRollBegin:(int)arg1;
- (void)handleConflict:(int)arg1 adDidFinish:(id)arg2;
- (void)handleConflict:(int)arg1 adDidShow:(id)arg2;
- (void)changePauseAdViewIsFull:(_Bool)arg1;
- (void)changeReadyBuyScreenMode:(int)arg1;
- (void)changeCommonOverlayScreenMode:(int)arg1;
- (void)changePreadControlView:(int)arg1;
- (void)changeAdsScreenMode:(int)arg1;
- (void)removeAllReadyBuyADS;
- (void)closeAdsForNextPlay;
- (void)closeAdsForChangeClarity;
- (void)closeCommonOverlayAdView;
- (_Bool)isShowAdWebView;
- (void)removeAppDownloadAdView;
- (void)cancelAppDownloadAd:(id)arg1;
- (void)playByCloseAppDownloadAd:(id)arg1;
- (_Bool)isShowReadyBuy;
- (void)removeReadyBuyBtn;
- (void)playbackTimeChanged:(double)arg1;
- (void)addView_point:(id)arg1;
- (void)showDetailMRAdViewWithURL:(id)arg1;
- (void)bottomAccessoryHide:(_Bool)arg1;
- (void)showAppStoreCenterWithUrl:(id)arg1 fromType:(int)arg2 showStatus:(id)arg3;
- (void)showAppStoreCenterWithUrl:(id)arg1 showStatus:(id)arg2;
- (_Bool)canDeviceJumpForAd:(int)arg1;
- (void)showDetailAdView;
- (void)becomeActive:(id)arg1;
- (void)resignActive:(id)arg1;
- (void)playerControl:(int)arg1 object:(id)arg2;
- (_Bool)isCanClickAds;
- (void)updateContentSound;
- (void)resetControlView;
- (_Bool)checkIsShowEpisodes:(id)arg1;
- (void)updateAdViewByDataSuccess;
- (_Bool)shouldReceivePreAdTouch;
- (_Bool)isCurrentAdVIP;
- (void)closeMRAdView;
- (void)updateAdTimeViewForMRAid:(_Bool)arg1;
- (_Bool)isMraidViewExist;
- (void)closeAdViewInMainThread;
- (void)removeMraidView;
- (void)createMraidAdViewWithURL:(id)arg1 delegate:(id)arg2 andSuperView:(id)arg3;
- (void)setTitle:(id)arg1;
- (void)callBackNextADInfo:(id)arg1;
- (void)advertise:(unsigned int)arg1 dataReady:(id)arg2;
- (void)callBackADInfo:(id)arg1;
- (void)setCurrentAd:(id)arg1;
- (void)closeAdsLogoView;
- (void)showAdsLogoView:(id)arg1;
- (void)removeAdsSubViewForAdsEnd;
- (void)updatePlayBtnState:(_Bool)arg1;
- (void)showPreAdSubView;
- (void)updateAdsView:(float)arg1;
- (void)updateAdsViewWithAdTime:(double)arg1 isCanClick:(_Bool)arg2;
- (void)updatePreAdViewsShowOrHidden;
- (void)createPlayerPreAdViewWithSuperView:(id)arg1 andFrame:(struct CGRect)arg2;
- (id)initWithPlayerViewController:(id)arg1;
- (void)closeSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


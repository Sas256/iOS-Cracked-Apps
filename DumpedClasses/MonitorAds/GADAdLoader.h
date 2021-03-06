//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdMediationDelegate-Protocol.h"
#import "GADSlotAdLoadDelegate-Protocol.h"
#import "GADSlotAdResponseDelegate-Protocol.h"
#import "GADSlotDelegate-Protocol.h"

@class GADAdLoaderConfiguration, GADSlot, NSDictionary, NSMutableArray, NSString, UIViewController;
@protocol GADAdLoaderDelegate, OS_dispatch_queue;

@interface GADAdLoader : NSObject <GADAdMediationDelegate, GADSlotAdLoadDelegate, GADSlotAdResponseDelegate, GADSlotDelegate>
{
    GADSlot *_slot;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSDictionary *_adClassRequestParameters;
    id <GADAdLoaderDelegate> _delegate;
    GADAdLoaderConfiguration *_adLoaderConfiguration;
    NSString *_adUnitID;
    UIViewController *_rootViewController;
    NSMutableArray *_appEventAdLoaders;
    NSMutableArray *_adPreprocessors;
    NSMutableArray *_nativeAds;
}

@property(readonly, nonatomic) NSMutableArray *nativeAds; // @synthesize nativeAds=_nativeAds;
@property(readonly, nonatomic) NSMutableArray *adPreprocessors; // @synthesize adPreprocessors=_adPreprocessors;
@property(readonly, nonatomic) NSMutableArray *appEventAdLoaders; // @synthesize appEventAdLoaders=_appEventAdLoaders;
@property(readonly, nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(retain, nonatomic) GADAdLoaderConfiguration *adLoaderConfiguration; // @synthesize adLoaderConfiguration=_adLoaderConfiguration;
@property(nonatomic) __weak id <GADAdLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nativeAdDidFinishLoadingAssets:(id)arg1;
- (void)nativeAdDidFailToLoadRequiredAssets:(id)arg1;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)slotFinishedLoadingAdContent:(id)arg1;
- (struct CGRect)bounds;
- (struct CGRect)frame;
- (BOOL)slot:(id)arg1 shouldProcessMediatedAdResponse:(id)arg2 error:(id *)arg3;
- (BOOL)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id *)arg3;
- (void)handleFailedRequestWithRequestError:(id)arg1;
- (void)loadRequest:(id)arg1;
@property(copy) NSDictionary *adClassRequestParameters;
- (id)init;
- (id)initWithAdUnitID:(id)arg1 rootViewController:(id)arg2 adTypes:(id)arg3 options:(id)arg4;
- (void)ad:(id)arg1 processMediatedAd:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)adLoaderConfigurationForAd:(id)arg1;
- (Class)connectorClassForAd:(id)arg1;
- (void)processMediatedNativeAd:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


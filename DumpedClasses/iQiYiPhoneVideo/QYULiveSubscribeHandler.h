//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"

@class IQYSubscriptionManager, NSString, QYBisonAlbum, QYUPhoneCardBaseCell;
@protocol IQYDataLoadManagerDelegate;

@interface QYULiveSubscribeHandler : NSObject <IQYDataLoadManagerDelegate>
{
    IQYSubscriptionManager *_subscriptionManager;
    QYBisonAlbum *_bisonAlbum;
    QYUPhoneCardBaseCell *_startCell;
    id <IQYDataLoadManagerDelegate> _delegate;
}

+ (void)openSetting;
+ (_Bool)isNotiPermissionEnabled;
+ (_Bool)hasSubscribedForCell:(id)arg1 withBisonAlbum:(id)arg2;
+ (_Bool)canOpenSettingApp;
+ (void)removeSubsribeHandlerForCell:(id)arg1 withBisonAlbum:(id)arg2;
+ (id)newSubscribeHandlerForCell:(id)arg1 withBisonAlbum:(id)arg2;
+ (id)subscribeHandlerForCell:(id)arg1 withBisonAlbum:(id)arg2;
+ (id)sucessAlbumsForCell:(id)arg1;
+ (id)sucessAlbumsForItem:(id)arg1;
+ (id)handlersDictForCell:(id)arg1;
@property(nonatomic) __weak id <IQYDataLoadManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) QYUPhoneCardBaseCell *startCell; // @synthesize startCell=_startCell;
@property(retain, nonatomic) QYBisonAlbum *bisonAlbum; // @synthesize bisonAlbum=_bisonAlbum;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)showFailToast;
- (void)showSuccessToast;
- (void)showToast:(id)arg1;
- (void)dataLoadManagerCanceled:(id)arg1;
- (void)dataLoadManagerFailed:(id)arg1;
- (id)currentTargetCell;
- (void)unsubscribe;
- (void)subscribe;
- (void)doSubscribe;
- (void)didBecomeActive;
- (void)showNotiEnableAlert;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


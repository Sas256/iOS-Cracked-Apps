//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBAnnouncerBase.h>

#import "FBProfileIntentActionEventListener-Protocol.h"

@class NSString;

@interface FBProfileIntentActionEventListenerAnnouncer : FBAnnouncerBase <FBProfileIntentActionEventListener>
{
}

- (void)actionBarDidTapIntentWithPersonId:(id)arg1 eventType:(id)arg2 intentType:(id)arg3 intentStatus:(id)arg4 isFromBanner:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBCompositeSectionComponent.h>

@class FBFriendCenterFriendsSearchBarListenerAnnouncer;

@interface FBFriendCenterFriendsSectionComponent : FBCompositeSectionComponent
{
    FBFriendCenterFriendsSearchBarListenerAnnouncer *_searchTermAnnouncer;
}

+ (id)initialState;
+ (id)newWithAnnouncer:(id)arg1 fetchStatusListener:(id)arg2 toolbox:(id)arg3;
@property(readonly, nonatomic) FBFriendCenterFriendsSearchBarListenerAnnouncer *searchTermAnnouncer; // @synthesize searchTermAnnouncer=_searchTermAnnouncer;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeButton;

@interface KTVKSongInviteCell : KFCommedTableViewCell
{
    unsigned long long _inviCurState;
    id <KTVKSongInviteCellDelegate> _delegate;
    KGThemeButton *_inviteBtn;
}

@property(retain, nonatomic) KGThemeButton *inviteBtn; // @synthesize inviteBtn=_inviteBtn;
@property(nonatomic) __weak id <KTVKSongInviteCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long inviCurState; // @synthesize inviCurState=_inviCurState;
- (void).cxx_destruct;
- (void)sendInvitationSucceedUpdateState;
- (void)clickedInviteKSongBtn:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

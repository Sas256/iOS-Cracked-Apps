//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class SIMUnreadCountView;

@interface SIMRoundButton : UIButton
{
    long long _type;
    SIMUnreadCountView *_unreadView;
}

@property(retain, nonatomic) SIMUnreadCountView *unreadView; // @synthesize unreadView=_unreadView;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateUnreadCount:(long long)arg1;
- (void)configUnreadView;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class RoomSongInfo, UIImageView;

@interface FXRoomShowView : UIView
{
    CDUnknownBlockType _closeBlock;
    RoomSongInfo *_roomSongInfo;
    UIImageView *_imageBackView;
    UIImageView *_micAniView;
}

@property(retain, nonatomic) UIImageView *micAniView; // @synthesize micAniView=_micAniView;
@property(retain, nonatomic) UIImageView *imageBackView; // @synthesize imageBackView=_imageBackView;
@property(retain, nonatomic) RoomSongInfo *roomSongInfo; // @synthesize roomSongInfo=_roomSongInfo;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelAction;
- (void)okDownAction;
- (void)okCanelAction;
- (void)okAction;
- (void)closeAndTodayNoMoreShow;
- (void)closeView;
- (id)initWithRoomSongInfo:(id)arg1;

@end

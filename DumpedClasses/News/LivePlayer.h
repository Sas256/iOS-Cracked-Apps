//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber, NSString, NSTimer, NSURL, TTMoviePlayerController, UILabel, UIView;

@interface LivePlayer : NSObject
{
    double lastSize;
    double lastCheckTime;
    NSString *serverIp;
    _Bool _debugMode;
    _Bool _playOnFeed;
    _Bool _vPPEnable;
    int _blockCounts;
    id <LivePlayerDelegate> _playerDelegate;
    CDUnknownBlockType _logBlock;
    CDUnknownBlockType _videoDataBlock;
    NSURL *_url;
    NSDate *_startPlayDate;
    NSDate *_startBlockDate;
    double _blockTime;
    double _playTime;
    NSNumber *_roomID;
    TTMoviePlayerController *_ttplayer;
    UIView *_view;
    UIView *_videoView;
    UIView *_debugView;
    NSTimer *_timer;
    UILabel *_stat;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UILabel *stat; // @synthesize stat=_stat;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *debugView; // @synthesize debugView=_debugView;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) _Bool vPPEnable; // @synthesize vPPEnable=_vPPEnable;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) TTMoviePlayerController *ttplayer; // @synthesize ttplayer=_ttplayer;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(readonly, nonatomic) double playTime; // @synthesize playTime=_playTime;
@property(readonly, nonatomic) int blockCounts; // @synthesize blockCounts=_blockCounts;
@property(readonly, nonatomic) double blockTime; // @synthesize blockTime=_blockTime;
@property(readonly, nonatomic) NSDate *startBlockDate; // @synthesize startBlockDate=_startBlockDate;
@property(readonly, nonatomic) NSDate *startPlayDate; // @synthesize startPlayDate=_startPlayDate;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool playOnFeed; // @synthesize playOnFeed=_playOnFeed;
@property(copy, nonatomic) CDUnknownBlockType videoDataBlock; // @synthesize videoDataBlock=_videoDataBlock;
@property(copy, nonatomic) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) __weak id <LivePlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
- (void).cxx_destruct;
- (double)getCurrentTime;
- (void)updateStat:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)updateDebugView:(_Bool)arg1;
- (void)onStopVideo:(id)arg1;
- (void)onPauseVideo:(id)arg1;
- (void)onPlayVideo:(id)arg1;
- (void)pr_playerGotErrorNotification:(id)arg1;
- (void)pr_applicationDidBecomActive;
- (void)pr_applicationWillResignActive;
- (void)pr_applicationWillEnterForeground;
- (void)pr_applicationDidEnterBackground;
- (void)addObservers;
- (void)handlePlayerNotify:(id)arg1;
- (void)loadStateChanged:(unsigned long long)arg1;
- (void)initPlayer;
- (_Bool)isPlaying;
- (void)stop;
- (void)start;
- (void)setPraentView:(id)arg1;
- (void)startForPreLoadWithURL:(id)arg1;
- (id)initWithURLForPreLoad:(id)arg1;
- (id)initWithURL:(id)arg1 with:(id)arg2;
- (void)dealloc;

@end


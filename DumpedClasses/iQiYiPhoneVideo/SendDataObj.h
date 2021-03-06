//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SendDataObj : NSObject
{
    _Bool _isFeedInHalfPlayer;
    _Bool _isInPlayerPaopaoTab;
    _Bool _isPingBack;
    int _webType;
    int _third_ShareType;
    NSString *_wx_TitleText;
    NSString *_wx_DescriptionText;
    id _wx_PicURL;
    NSString *_wx_Url;
    NSString *_wx_GifURL;
    NSString *_videoPath;
    NSString *_third_TvName;
    NSString *_third_webTitle;
    NSString *_third_Sources;
    NSString *_albumID;
    NSString *_third_URL;
    NSString *_third_ContentText;
    NSString *_third_PicURL;
    NSString *_third_Tvid;
    NSString *_cid;
    NSString *_r1;
    NSString *_feed_title;
    NSString *_command;
    NSString *_desForCommand;
    NSString *_platformName;
}

+ (id)makeShareDataForWXWith:(id)arg1 desctription:(id)arg2 url:(id)arg3 thumbImagePath:(id)arg4 ShareTypeFrom:(int)arg5;
+ (_Bool)isActiveShare:(id)arg1;
+ (_Bool)isVideoShare:(id)arg1;
@property(copy, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(nonatomic) _Bool isPingBack; // @synthesize isPingBack=_isPingBack;
@property(retain, nonatomic) NSString *desForCommand; // @synthesize desForCommand=_desForCommand;
@property(retain, nonatomic) NSString *command; // @synthesize command=_command;
@property(retain, nonatomic) NSString *feed_title; // @synthesize feed_title=_feed_title;
@property(nonatomic) _Bool isInPlayerPaopaoTab; // @synthesize isInPlayerPaopaoTab=_isInPlayerPaopaoTab;
@property(nonatomic) _Bool isFeedInHalfPlayer; // @synthesize isFeedInHalfPlayer=_isFeedInHalfPlayer;
@property(retain, nonatomic) NSString *r1; // @synthesize r1=_r1;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *third_Tvid; // @synthesize third_Tvid=_third_Tvid;
@property(retain, nonatomic) NSString *third_PicURL; // @synthesize third_PicURL=_third_PicURL;
@property(nonatomic) int third_ShareType; // @synthesize third_ShareType=_third_ShareType;
@property(retain, nonatomic) NSString *third_ContentText; // @synthesize third_ContentText=_third_ContentText;
@property(retain, nonatomic) NSString *third_URL; // @synthesize third_URL=_third_URL;
@property(retain, nonatomic) NSString *albumID; // @synthesize albumID=_albumID;
@property(retain, nonatomic) NSString *third_Sources; // @synthesize third_Sources=_third_Sources;
@property(retain, nonatomic) NSString *third_webTitle; // @synthesize third_webTitle=_third_webTitle;
@property(retain, nonatomic) NSString *third_TvName; // @synthesize third_TvName=_third_TvName;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *wx_GifURL; // @synthesize wx_GifURL=_wx_GifURL;
@property(retain, nonatomic) NSString *wx_Url; // @synthesize wx_Url=_wx_Url;
@property(retain, nonatomic) id wx_PicURL; // @synthesize wx_PicURL=_wx_PicURL;
@property(retain, nonatomic) NSString *wx_DescriptionText; // @synthesize wx_DescriptionText=_wx_DescriptionText;
@property(retain, nonatomic) NSString *wx_TitleText; // @synthesize wx_TitleText=_wx_TitleText;
@property(nonatomic) int webType; // @synthesize webType=_webType;
- (void).cxx_destruct;

@end


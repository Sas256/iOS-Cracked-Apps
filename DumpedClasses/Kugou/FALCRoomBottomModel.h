//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FALCRoomBottomModel : FAModel
{
    _Bool _isShowRedViwe;
    NSString *_icon;
    NSString *_gameName;
    NSString *_link;
    long long _type;
    NSString *_key;
    NSString *_taskName;
    long long _level;
    long long _guideSwitch;
    NSString *_guideIcon;
    NSString *_starsIcon;
    NSString *_guideLetters;
    NSString *_guideNotice;
    long long _showTime;
    long long _num;
}

@property(nonatomic) _Bool isShowRedViwe; // @synthesize isShowRedViwe=_isShowRedViwe;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(nonatomic) long long showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) NSString *guideNotice; // @synthesize guideNotice=_guideNotice;
@property(retain, nonatomic) NSString *guideLetters; // @synthesize guideLetters=_guideLetters;
@property(retain, nonatomic) NSString *starsIcon; // @synthesize starsIcon=_starsIcon;
@property(retain, nonatomic) NSString *guideIcon; // @synthesize guideIcon=_guideIcon;
@property(nonatomic) long long guideSwitch; // @synthesize guideSwitch=_guideSwitch;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *gameName; // @synthesize gameName=_gameName;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString, SBubbleConf, UIImage;

@interface NewDriverActModel : JSONModel
{
    long long _cardID;
    NSString *_iconUrl;
    UIImage *_iconImage;
    NSString *_title;
    long long _unreadCount;
    CDUnknownBlockType _clickBlock;
    SBubbleConf *_bubbleConf;
}

@property(retain, nonatomic) SBubbleConf *bubbleConf; // @synthesize bubbleConf=_bubbleConf;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) long long cardID; // @synthesize cardID=_cardID;
- (void).cxx_destruct;

@end

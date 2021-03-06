//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KQGChatRelationshipBean, NSString;

@interface KQChatBean : NSObject
{
    _Bool _isGChat;
    _Bool _isHideTime;
    _Bool _picIsOrigin;
    long long _identityType;
    long long _name_id;
    long long _messegeFrom;
    long long _dialogueType;
    NSString *_time;
    NSString *_iconUrl;
    unsigned long long _status;
    NSString *_nickName;
    NSString *_text;
    NSString *_speechUrl;
    NSString *_loacalSpeeckUrl;
    long long _speechTime;
    long long _speeckType;
    NSString *_picUrl;
    long long _picOriginSize;
    KQGChatRelationshipBean *_publicationBean;
    long long _myselfIdentityType;
    NSString *_content;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_locationUrl;
    long long _gender;
}

@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *locationUrl; // @synthesize locationUrl=_locationUrl;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long myselfIdentityType; // @synthesize myselfIdentityType=_myselfIdentityType;
@property(retain, nonatomic) KQGChatRelationshipBean *publicationBean; // @synthesize publicationBean=_publicationBean;
@property(nonatomic) long long picOriginSize; // @synthesize picOriginSize=_picOriginSize;
@property(nonatomic) _Bool picIsOrigin; // @synthesize picIsOrigin=_picIsOrigin;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) long long speeckType; // @synthesize speeckType=_speeckType;
@property(nonatomic) long long speechTime; // @synthesize speechTime=_speechTime;
@property(copy, nonatomic) NSString *loacalSpeeckUrl; // @synthesize loacalSpeeckUrl=_loacalSpeeckUrl;
@property(copy, nonatomic) NSString *speechUrl; // @synthesize speechUrl=_speechUrl;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) _Bool isHideTime; // @synthesize isHideTime=_isHideTime;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(nonatomic) long long dialogueType; // @synthesize dialogueType=_dialogueType;
@property(nonatomic) long long messegeFrom; // @synthesize messegeFrom=_messegeFrom;
@property(nonatomic) long long name_id; // @synthesize name_id=_name_id;
@property(nonatomic) long long identityType; // @synthesize identityType=_identityType;
@property(nonatomic) _Bool isGChat; // @synthesize isGChat=_isGChat;
- (void).cxx_destruct;

@end


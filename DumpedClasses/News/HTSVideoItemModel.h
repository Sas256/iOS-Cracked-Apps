//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class HTSVideoItemMarkModel, HTSVideoItemStatsModel, HTSVideoItemVideoModel, HTSVideoPlayUserModel, HTSVideoPrivateInfoModel, NSNumber, NSString;

@interface HTSVideoItemModel : MTLModel <MTLJSONSerializing>
{
    _Bool _userDigg;
    _Bool _allowShare;
    _Bool _allowComment;
    _Bool _allowDislike;
    NSNumber *_itemID;
    NSString *_text;
    NSNumber *_createTime;
    NSNumber *_mediaType;
    NSString *_shareURL;
    HTSVideoItemStatsModel *_itemStats;
    NSNumber *_status;
    HTSVideoPlayUserModel *_author;
    HTSVideoItemVideoModel *_video;
    NSString *_tips;
    NSString *_tipsURL;
    HTSVideoPrivateInfoModel *_privateInfo;
    HTSVideoItemMarkModel *_mark;
    NSString *_shareText;
    NSString *_shareTitle;
    NSString *_shareDescription;
    NSString *_location;
}

+ (id)userDiggJSONTransformer;
+ (id)videoJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)itemStatsJSONTransformer;
+ (id)privateInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(readonly, copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(readonly, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(readonly, nonatomic) HTSVideoItemMarkModel *mark; // @synthesize mark=_mark;
@property(readonly, nonatomic) HTSVideoPrivateInfoModel *privateInfo; // @synthesize privateInfo=_privateInfo;
@property(readonly, copy, nonatomic) NSString *tipsURL; // @synthesize tipsURL=_tipsURL;
@property(readonly, copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) _Bool allowDislike; // @synthesize allowDislike=_allowDislike;
@property(readonly, nonatomic) _Bool allowComment; // @synthesize allowComment=_allowComment;
@property(readonly, nonatomic) _Bool allowShare; // @synthesize allowShare=_allowShare;
@property(retain, nonatomic) HTSVideoItemVideoModel *video; // @synthesize video=_video;
@property(retain, nonatomic) HTSVideoPlayUserModel *author; // @synthesize author=_author;
@property(readonly, copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) HTSVideoItemStatsModel *itemStats; // @synthesize itemStats=_itemStats;
@property(readonly, copy, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(readonly, nonatomic) NSNumber *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool userDigg; // @synthesize userDigg=_userDigg;
@property(readonly, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

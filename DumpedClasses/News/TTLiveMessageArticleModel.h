//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTLiveMessageArticleModel : NSObject
{
    NSString *_articleId;
    NSString *_icon;
    NSString *_title;
    NSString *_sourceIcon;
    NSString *_sourceName;
}

@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSString *sourceIcon; // @synthesize sourceIcon=_sourceIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;

@end


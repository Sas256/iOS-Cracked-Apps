//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GMAccInfo : NSObject
{
    _Bool _isVImageHidden;
    _Bool _isFollowBtnHidden;
    NSString *_avatar;
    NSString *_nick;
    NSString *_identity;
}

@property(nonatomic) _Bool isFollowBtnHidden; // @synthesize isFollowBtnHidden=_isFollowBtnHidden;
@property(nonatomic) _Bool isVImageHidden; // @synthesize isVImageHidden=_isVImageHidden;
@property(copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMFishpondInfoUserDO : NSObject
{
    _Bool _admin;
    NSString *_clickName;
    NSString *_clickUrl;
    NSString *_iconUrl;
    NSString *_userId;
    NSString *_userNick;
}

@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *clickName; // @synthesize clickName=_clickName;
@property(nonatomic) _Bool admin; // @synthesize admin=_admin;
- (void).cxx_destruct;

@end

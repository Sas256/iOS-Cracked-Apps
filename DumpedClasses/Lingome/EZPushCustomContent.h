//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface EZPushCustomContent : JSONModel
{
    NSString *_contentResourceId;
    long long _type;
    NSString<Optional> *_uid;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *uid; // @synthesize uid=_uid;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *contentResourceId; // @synthesize contentResourceId=_contentResourceId;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol ANXBehavior <NSObject>
@property(copy, nonatomic) NSString *time;
@property(copy, nonatomic) NSString *param3;
@property(copy, nonatomic) NSString *param2;
@property(copy, nonatomic) NSString *param1;
@property(copy, nonatomic) NSString *lastView;
@property(copy, nonatomic) NSString *currentView;
@property(copy, nonatomic) NSString *behaviorTime;
@property(copy, nonatomic) NSString *behaviorCode;
@property(nonatomic) unsigned long long behaviorType;
@property(copy, nonatomic) NSString *userCaseID;

@optional
- (void)addRemark:(NSString *)arg1 forKey:(NSString *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XGStore : NSObject
{
}

+ (id)getInstance;
+ (void)load;
- (void)saveClientId:(id)arg1;
- (id)getSavedClientId;
- (void)saveDeviceTokenRetryNum:(id)arg1;
- (int)getDeviceTokenRetryNum;
- (void)saveDeviceTokenRegistered;
- (_Bool)ifDeviceTokenRegistered;
- (void)saveAppKey:(id)arg1;
- (id)getLocalAppKey;
- (void)delToken;
- (void)saveToken:(id)arg1;
- (id)getLocalToken;
- (id)init;

@end

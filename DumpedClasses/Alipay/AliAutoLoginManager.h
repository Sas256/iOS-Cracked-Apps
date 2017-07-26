//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AliAutoLoginManager : NSObject
{
}

+ (id)sharedManager;
- (id)currentNaviController;
- (id)autoLoginTaobaoData:(id)arg1;
- (double)autoLoginSyncExpireTime:(id)arg1;
- (void)exceedPhoneHandle:(id)arg1 callback:(CDUnknownBlockType)arg2 response:(id)arg3;
- (void)activeTaobaoNickHandle:(id)arg1 callback:(CDUnknownBlockType)arg2 response:(id)arg3;
- (void)bindPhoneHandle:(id)arg1 callback:(CDUnknownBlockType)arg2 response:(id)arg3;
- (id)executeAutologin:(id)arg1 params:(id)arg2;
- (id)requestDomains:(id)arg1;
- (void)showToast:(id)arg1 response:(id)arg2;
- (void)abnormalAccountHandle:(id)arg1 done:(CDUnknownBlockType)arg2 response:(id)arg3;
- (void)exceptionHandle:(id)arg1 done:(CDUnknownBlockType)arg2 response:(id)arg3;
- (_Bool)canUseCache:(id)arg1;
- (void)doAutoLogin:(id)arg1 done:(CDUnknownBlockType)arg2;
- (_Bool)canAutologin:(id)arg1;
- (id)autoLoginTaobaoSync:(id)arg1;
- (void)autoLoginTaobaoAsync:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)autoLoginSync:(id)arg1;
- (void)autoLoginAsync:(id)arg1 done:(CDUnknownBlockType)arg2;

@end

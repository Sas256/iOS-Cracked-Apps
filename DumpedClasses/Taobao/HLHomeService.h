//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ANMtopService.h"

@interface HLHomeService : ANMtopService
{
}

+ (void)filterColumnListModel:(id)arg1;
+ (void)subscribeLiveNotice:(unsigned long long)arg1 onOff:(_Bool)arg2 result:(CDUnknownBlockType)arg3;
+ (void)addFeedback:(id)arg1 feed:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)addFeedView:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)allowMagazinePush:(_Bool)arg1 result:(CDUnknownBlockType)arg2;
+ (void)subscribeOnMagazine:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;
+ (void)subscribe:(unsigned long long)arg1 bizType:(int)arg2 onOff:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
+ (void)voteCounter:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getSubscribeColumnList:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getFiveMinColumnListNew:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getFiveMinColumnList:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getColumnList:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getColumnList:(id)arg1 bizParam:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)updateColumnTabList:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getColumnTabList:(CDUnknownBlockType)arg1;

@end

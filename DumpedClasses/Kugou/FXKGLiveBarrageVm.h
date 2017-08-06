//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray;

@interface FXKGLiveBarrageVm : NSObject
{
    NSMutableArray *_barrageListPool;
    NSLock *_cacheLock;
}

@property(retain, nonatomic) NSLock *cacheLock; // @synthesize cacheLock=_cacheLock;
@property(retain, nonatomic) NSMutableArray *barrageListPool; // @synthesize barrageListPool=_barrageListPool;
- (void).cxx_destruct;
- (_Bool)isExsitMessageUser:(id)arg1;
- (_Bool)comparePriorityOfChatMessage:(id)arg1 SecondMsg:(id)arg2;
- (int)getGiftCountOfGiftMessage:(id)arg1;
- (_Bool)comparePriorityOfGiftMessage:(id)arg1 SecondMsg:(id)arg2;
- (_Bool)comparePriority:(id)arg1 SecondMsg:(id)arg2;
- (_Bool)isExsitSameMsg:(id)arg1;
- (void)updateBarrageStore:(id)arg1;
- (id)formatMsg:(id)arg1;
- (void)loadMsg:(id)arg1;
- (id)getCurrentBarrageData;
- (void)dealloc;
- (id)init;

@end

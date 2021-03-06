//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, TTForumPostImageCacheTask;

@interface TTForumPostImageCache : NSObject
{
    NSFileManager *_fileManager;
    NSString *_diskCachePath;
    TTForumPostImageCacheTask *_executingTask;
    NSMutableArray *_waitingTasks;
    NSObject<OS_dispatch_queue> *_compressQueue;
    long long _maxCacheAge;
    unsigned long long _maxCacheSize;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(nonatomic) long long maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *compressQueue; // @synthesize compressQueue=_compressQueue;
@property(retain, nonatomic) NSMutableArray *waitingTasks; // @synthesize waitingTasks=_waitingTasks;
@property(retain, nonatomic) TTForumPostImageCacheTask *executingTask; // @synthesize executingTask=_executingTask;
- (void).cxx_destruct;
- (void)cleanDisk;
- (id)_filePathWithName:(id)arg1;
- (id)_taskFromOriginalSource:(id)arg1;
- (void)deleteTask:(id)arg1;
- (void)deleteCacheSource:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)removeCacheSource:(id)arg1;
- (id)saveCacheSource:(id)arg1;
- (id)saveCacheWithAssets:(id)arg1;
- (void)queryFilePathWithSource:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)accountChanged:(id)arg1;
- (void)_compress;
- (void)_releaseWaiting;
- (id)init;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQECFilterProtocol-Protocol.h"

@class MQQMessageChecker, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface MQQECLocalFilter : NSObject <MQQECFilterProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_configKeywords;
    NSArray *_userKeywords;
    MQQMessageChecker *_messageChecker;
}

- (unsigned long long)filterWithIdentifier:(id)arg1 title:(id)arg2;
- (unsigned long long)filterGroup:(id)arg1;
- (void)filterGroups:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


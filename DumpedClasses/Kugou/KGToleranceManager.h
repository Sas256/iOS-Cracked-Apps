//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSTimer;

@interface KGToleranceManager : NSObject
{
    _Bool _isSimpedOnThisDevice;
    NSMutableDictionary *_trycatchedInfo;
    long long _totalSendCount;
    long long _lastSubThreadHash;
    NSTimer *_sendDumpInfoTimer;
    long long _countAMPCountInOneDuration;
}

+ (id)sharedInstance;
@property(nonatomic) long long countAMPCountInOneDuration; // @synthesize countAMPCountInOneDuration=_countAMPCountInOneDuration;
@property(retain, nonatomic) NSTimer *sendDumpInfoTimer; // @synthesize sendDumpInfoTimer=_sendDumpInfoTimer;
@property(nonatomic) long long lastSubThreadHash; // @synthesize lastSubThreadHash=_lastSubThreadHash;
@property(nonatomic) long long totalSendCount; // @synthesize totalSendCount=_totalSendCount;
@property(nonatomic) _Bool isSimpedOnThisDevice; // @synthesize isSimpedOnThisDevice=_isSimpedOnThisDevice;
@property(retain, nonatomic) NSMutableDictionary *trycatchedInfo; // @synthesize trycatchedInfo=_trycatchedInfo;
- (void).cxx_destruct;
- (void)sendFaultToleranceAPM:(id)arg1;
- (void)sendToKGSafeKitSever:(id)arg1 andBaseInfo:(id)arg2;
- (_Bool)chechIfCPUISFreeNow;
- (_Bool)checkShoudlPrintCallStack;
- (void)sendErrorWithInfoDic:(id)arg1 needSendApm:(_Bool)arg2;
- (void)sendErrorInfoBySafeKitBugInfoCollection:(id)arg1;
- (void)sendErrorInfoBySafeKitHooked:(id)arg1;
- (void)sendErrorByTryCatchManual:(id)arg1;
- (void)resetTimerCallUp;
- (void)setUPTimer;
- (void)handleMemoryWarning;
- (id)init;

@end


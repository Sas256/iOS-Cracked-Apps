//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DFCrashReport : NSObject
{
}

+ (void)uploadCrashReport;
+ (id)crashedViewId;
+ (_Bool)isCrashedLastTimeInBootup;
+ (_Bool)isCrashedLastTime;
+ (id)generateReadableMonitorLogWithThread:(unsigned int)arg1;
+ (id)generateMonitorLogWithThread:(unsigned int)arg1;
+ (void)hierarchiesFromView:(id)arg1 container:(id)arg2;
+ (_Bool)removePlusSignWithController:(id)arg1 container:(id)arg2;
+ (void)hierarchiesFromController:(id)arg1 container:(id)arg2;
+ (id)allAliveVc;

@end

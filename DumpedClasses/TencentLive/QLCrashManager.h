//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLCrashManager : NSObject
{
}

+ (id)sharedInstance;
- (void)recordCrashWithCrashType:(int)arg1;
- (void)handleAppDidFinishLaunchSecondPeriod;
- (void)handleAppDidFinishLaunch;
- (void)handleCrashLog:(id)arg1;
- (id)init;

@end

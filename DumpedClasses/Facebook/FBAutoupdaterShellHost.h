//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBAutoupdaterHost.h>

@class NSString;

@interface FBAutoupdaterShellHost : FBAutoupdaterHost
{
    NSString *_appliedUpdateSymlink;
    NSString *_updatesDirectory;
}

@property(copy, nonatomic) NSString *updatesDirectory; // @synthesize updatesDirectory=_updatesDirectory;
@property(copy, nonatomic) NSString *appliedUpdateSymlink; // @synthesize appliedUpdateSymlink=_appliedUpdateSymlink;
- (void).cxx_destruct;
- (_Bool)activateAppliedUpdate;
- (id)activeUpdatePath;

@end


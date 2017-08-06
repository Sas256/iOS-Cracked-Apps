//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SwarmManifestParser, SwarmServiceTable;

@interface SwarmFramework : NSObject
{
    NSString *_bundlePathWithAssets;
    NSMutableArray *_plugins;
    SwarmServiceTable *_serviceTable;
    SwarmManifestParser *_manifestParser;
}

+ (id)sharedInstance;
@property(retain) SwarmManifestParser *manifestParser; // @synthesize manifestParser=_manifestParser;
@property(retain) SwarmServiceTable *serviceTable; // @synthesize serviceTable=_serviceTable;
@property(retain) NSMutableArray *plugins; // @synthesize plugins=_plugins;
@property(copy, nonatomic) NSString *bundlePathWithAssets; // @synthesize bundlePathWithAssets=_bundlePathWithAssets;
- (void).cxx_destruct;
- (id)getServiceByProtocol:(id)arg1;
- (id)getPlugins;
- (void)stop;
- (void)startWithManifestPaths:(id)arg1;
- (void)start;
- (void)startWith:(id)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AutoPbModel.h"

@class NSString;

@interface CommParamReq_0x938 : AutoPbModel
{
    unsigned int _platform;
    NSString *_version;
}

@property(nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (id)getPropertyInfos;

@end


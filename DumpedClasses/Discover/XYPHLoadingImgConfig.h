//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHLoadingImgConfig : XYRKModel
{
    NSString *_url;
    NSString *_start;
    NSString *_version;
    NSString *_end;
}

+ (id)versionJSONTransformer;
+ (id)endJSONTransformer;
+ (id)startJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *end; // @synthesize end=_end;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *start; // @synthesize start=_start;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

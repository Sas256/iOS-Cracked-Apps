//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBARDetailMarkModel : TBJSONModel
{
    NSString *_markUrl;
    NSString *_markMd5;
    NSString *_markerDesc;
    NSArray *_markConf;
    NSString *_slamMarkerUrl;
    NSString *_slamMarkMd5;
    NSArray *_slamMarkConf;
}

+ (id)modelContainerClassMapDictioanry;
@property(copy, nonatomic) NSArray *slamMarkConf; // @synthesize slamMarkConf=_slamMarkConf;
@property(copy, nonatomic) NSString *slamMarkMd5; // @synthesize slamMarkMd5=_slamMarkMd5;
@property(copy, nonatomic) NSString *slamMarkerUrl; // @synthesize slamMarkerUrl=_slamMarkerUrl;
@property(copy, nonatomic) NSArray *markConf; // @synthesize markConf=_markConf;
@property(copy, nonatomic) NSString *markerDesc; // @synthesize markerDesc=_markerDesc;
@property(copy, nonatomic) NSString *markMd5; // @synthesize markMd5=_markMd5;
@property(copy, nonatomic) NSString *markUrl; // @synthesize markUrl=_markUrl;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface InBoundReq : JceObjectV2
{
    _Bool jcev2_p_4_o_onlyMarkers;
    double jcev2_p_0_r_minx;
    double jcev2_p_1_r_miny;
    double jcev2_p_2_r_maxx;
    double jcev2_p_3_r_maxy;
    NSString *jcev2_p_5_o_pf;
    NSString *jcev2_p_6_o_version;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=version, setter=setVersion:) NSString *jcev2_p_6_o_version; // @synthesize jcev2_p_6_o_version;
@property(retain, nonatomic, getter=pf, setter=setPf:) NSString *jcev2_p_5_o_pf; // @synthesize jcev2_p_5_o_pf;
@property(nonatomic, getter=onlyMarkers, setter=setOnlyMarkers:) _Bool jcev2_p_4_o_onlyMarkers; // @synthesize jcev2_p_4_o_onlyMarkers;
@property(nonatomic, getter=maxy, setter=setMaxy:) double jcev2_p_3_r_maxy; // @synthesize jcev2_p_3_r_maxy;
@property(nonatomic, getter=maxx, setter=setMaxx:) double jcev2_p_2_r_maxx; // @synthesize jcev2_p_2_r_maxx;
@property(nonatomic, getter=miny, setter=setMiny:) double jcev2_p_1_r_miny; // @synthesize jcev2_p_1_r_miny;
@property(nonatomic, getter=minx, setter=setMinx:) double jcev2_p_0_r_minx; // @synthesize jcev2_p_0_r_minx;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


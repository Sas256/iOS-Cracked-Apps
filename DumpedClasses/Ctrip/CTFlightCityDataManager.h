//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>;

@interface CTFlightCityDataManager : NSObject
{
    NSObject<OS_dispatch_queue> *searial_queue;
    NSDictionary *_dicFlightInlandCities;
    NSDictionary *_dicFlightIntCities;
    NSDictionary *_dicFlightBoardInlandCities;
    NSDictionary *_dicFlightBoardIntCities;
    NSDictionary *_dicFlightAttentionCities;
}

+ (id)getInstance;
@property(retain, nonatomic) NSDictionary *dicFlightAttentionCities; // @synthesize dicFlightAttentionCities=_dicFlightAttentionCities;
@property(retain, nonatomic) NSDictionary *dicFlightBoardIntCities; // @synthesize dicFlightBoardIntCities=_dicFlightBoardIntCities;
@property(retain, nonatomic) NSDictionary *dicFlightBoardInlandCities; // @synthesize dicFlightBoardInlandCities=_dicFlightBoardInlandCities;
@property(retain, nonatomic) NSDictionary *dicFlightIntCities; // @synthesize dicFlightIntCities=_dicFlightIntCities;
@property(retain, nonatomic) NSDictionary *dicFlightInlandCities; // @synthesize dicFlightInlandCities=_dicFlightInlandCities;
- (void).cxx_destruct;
- (void)clean;
- (void)getFlightCityDataByType:(int)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)getCityDataByTypeForFlightCheckin:(CDUnknownBlockType)arg1;
- (void)getCityDataByTypeForFlightChina:(CDUnknownBlockType)arg1;
- (void)getCityDataByTypeForFlightBoard:(CDUnknownBlockType)arg1;
- (void)getCityDataByTypeForFlight:(CDUnknownBlockType)arg1;
- (void)cityDataSynchronizeSuccessNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end

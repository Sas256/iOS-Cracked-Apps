//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelFavorOperateRequest : CTBusinessBean
{
    int _serviceVersion;
    int _cityId;
    int _hotelId;
    int _operateType;
    NSString *_checkInDate;
    NSString *_checkOutDate;
}

@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(nonatomic) int operateType; // @synthesize operateType=_operateType;
@property(nonatomic) int hotelId; // @synthesize hotelId=_hotelId;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

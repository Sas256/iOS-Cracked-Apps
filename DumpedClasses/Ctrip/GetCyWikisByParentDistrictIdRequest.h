//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@interface GetCyWikisByParentDistrictIdRequest : CTBusinessBean <NSCoding>
{
    int parentDistrictId;
    int sourceType;
}

@property(nonatomic) int sourceType; // @synthesize sourceType;
@property(nonatomic) int parentDistrictId; // @synthesize parentDistrictId;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

#import "NSCoding.h"

@class NSArray<Optional><ONECityGroupModel>, NSNumber<Optional>;

@interface ONECitysModel : TRBaseModel <NSCoding>
{
    NSNumber<Optional> *_version;
    NSArray<Optional><ONECityGroupModel> *_groups;
}

+ (id)restoreModelForKey:(id)arg1;
+ (void)storeModel:(id)arg1 forKey:(id)arg2;
+ (id)loadCitysModelWithKey:(id)arg1;
+ (void)saveCitysModel:(id)arg1 wiehKey:(id)arg2;
@property(retain, nonatomic) NSArray<Optional><ONECityGroupModel> *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSNumber<Optional> *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

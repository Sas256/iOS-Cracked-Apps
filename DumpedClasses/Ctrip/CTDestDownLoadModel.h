//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

#import "NSCopying.h"

@class NSString;

@interface CTDestDownLoadModel : CTJSONModel <NSCopying>
{
    _Bool _isNew;
    _Bool _needUpdate;
    int _cyDestId;
    int _goodCount;
    int _authorCount;
    int _parentDistrictId;
    float _progress;
    int _finishFileCount;
    int _totalFileCount;
    int _status;
    NSString *_name;
    NSString *_eName;
    NSString *_imgUrl;
    NSString *_wikiSize;
    NSString *_jsonHash;
    NSString *_jsonUrl;
    NSString *_zipUrl;
    NSString *_districtName;
    NSString *_parentDistrictName;
    double _finishDate;
}

@property(nonatomic) double finishDate; // @synthesize finishDate=_finishDate;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int totalFileCount; // @synthesize totalFileCount=_totalFileCount;
@property(nonatomic) int finishFileCount; // @synthesize finishFileCount=_finishFileCount;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *parentDistrictName; // @synthesize parentDistrictName=_parentDistrictName;
@property(nonatomic) int parentDistrictId; // @synthesize parentDistrictId=_parentDistrictId;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName=_districtName;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(copy, nonatomic) NSString *zipUrl; // @synthesize zipUrl=_zipUrl;
@property(copy, nonatomic) NSString *jsonUrl; // @synthesize jsonUrl=_jsonUrl;
@property(copy, nonatomic) NSString *jsonHash; // @synthesize jsonHash=_jsonHash;
@property(copy, nonatomic) NSString *wikiSize; // @synthesize wikiSize=_wikiSize;
@property(nonatomic) int authorCount; // @synthesize authorCount=_authorCount;
@property(nonatomic) int goodCount; // @synthesize goodCount=_goodCount;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *eName; // @synthesize eName=_eName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int cyDestId; // @synthesize cyDestId=_cyDestId;
- (void).cxx_destruct;
- (void)copyAllPropertyFrom:(id)arg1;
- (void)copyDownLoadedPropertyFrom:(id)arg1;
- (void)cleanDownLoadedProperty;
- (id)initWithCyWikiDataModel:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithH5Dictionary:(id)arg1;

@end


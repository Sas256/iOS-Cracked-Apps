//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FollowSingerVM, NSMutableArray;

@interface RecommendSingerVM : NSObject
{
    _Bool _hasNextPage;
    long long _pageIndex;
    long long _pageSize;
    NSMutableArray *_recommendArray;
    long long _recommendDataStatus;
    FollowSingerVM *_followSingerVM;
}

@property(retain, nonatomic) FollowSingerVM *followSingerVM; // @synthesize followSingerVM=_followSingerVM;
@property(nonatomic) long long recommendDataStatus; // @synthesize recommendDataStatus=_recommendDataStatus;
@property(retain, nonatomic) NSMutableArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (void)setFollowForRecommendArray:(CDUnknownBlockType)arg1;
- (void)loadDataRecommendNext:(CDUnknownBlockType)arg1;
- (void)loadDataRecommend:(CDUnknownBlockType)arg1;
- (void)fetchRecommendData:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

@end


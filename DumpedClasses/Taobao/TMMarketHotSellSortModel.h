//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray;

@interface TMMarketHotSellSortModel : TBJSONModel
{
    _Bool _hasMore;
    NSMutableArray *_styleList;
}

@property(retain, nonatomic) NSMutableArray *styleList; // @synthesize styleList=_styleList;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (void)addStyleList:(id)arg1;
- (id)appIds;
- (id)appIdsWithOffet:(long long)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSDate, NSIndexPath, NSMutableArray, NSString;

@interface QQDynamicSearchResultGroupModel : QQModel
{
    _Bool _isMore;
    _Bool _isNetReturn;
    unsigned long long _groupMask;
    NSString *_groupName;
    NSMutableArray *_resultItems;
    unsigned long long _totalResultCount;
    NSString *_moreUrl;
    NSString *_moreName;
    NSDate *_validDate;
    NSArray *_highlightWords;
    NSString *_searchVer;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) NSString *searchVer; // @synthesize searchVer=_searchVer;
@property(retain, nonatomic) NSArray *highlightWords; // @synthesize highlightWords=_highlightWords;
@property(nonatomic) _Bool isNetReturn; // @synthesize isNetReturn=_isNetReturn;
@property(nonatomic) _Bool isMore; // @synthesize isMore=_isMore;
@property(retain, nonatomic) NSDate *validDate; // @synthesize validDate=_validDate;
@property(copy, nonatomic) NSString *moreName; // @synthesize moreName=_moreName;
@property(copy, nonatomic) NSString *moreUrl; // @synthesize moreUrl=_moreUrl;
@property(nonatomic) unsigned long long totalResultCount; // @synthesize totalResultCount=_totalResultCount;
@property(retain, nonatomic) NSMutableArray *resultItems; // @synthesize resultItems=_resultItems;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) unsigned long long groupMask; // @synthesize groupMask=_groupMask;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, ResponseHead;

@interface HotelConditionSearchResponse : CTBusinessBean
{
    ResponseHead *_head;
    NSMutableArray *_categoryList;
}

@property(retain, nonatomic) NSMutableArray *categoryList; // @synthesize categoryList=_categoryList;
@property(retain, nonatomic) ResponseHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FALiveRoomMoreVM : NSObject
{
    unsigned long long _showNum;
    NSMutableArray *_moreConfigList;
}

@property(retain, nonatomic) NSMutableArray *moreConfigList; // @synthesize moreConfigList=_moreConfigList;
@property(nonatomic) unsigned long long showNum; // @synthesize showNum=_showNum;
- (void).cxx_destruct;
- (id)moreConfigAtIndex:(long long)arg1;
- (id)getMoreConfigList;
- (id)showTagImg;
- (_Bool)isShowTag;
- (_Bool)hasConfig;
- (id)init;

@end

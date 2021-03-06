//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiveRoomModel, NSNumber, SDImageCache;

@interface LiveRoomDiggMessageQueue : NSObject
{
    long long _diggCount;
    LiveRoomModel *_roomModel;
    SDImageCache *_imageCache;
    NSNumber *_diggColor;
}

+ (id)dispatchBarrierQueue;
@property(retain, nonatomic) NSNumber *diggColor; // @synthesize diggColor=_diggColor;
- (void).cxx_destruct;
- (void)receiveDiggMessage;
- (void)uploadDiggCount;
- (void)uploadDiggcountAutomatically;
- (id)initWithLiveRoomModel:(id)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FALiveStarMVHttpDAO : NSObject
{
}

- (id)getQueryRecordStatusWithStarUserId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)getCommentListByPlayTime:(long long)arg1 Page:(long long)arg2 PageSize:(long long)arg3 playTimeFrom:(long long)arg4 playTimeTo:(long long)arg5 succeed:(CDUnknownBlockType)arg6 fail:(CDUnknownBlockType)arg7;
- (id)getFocusStarMvWithKugouId:(unsigned long long)arg1 page:(int)arg2 pageSize:(int)arg3 succeed:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (id)getStarLastestMVWithStarUserId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)stopShootMVWithmvId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)saveMvWithmvId:(id)arg1 videoId:(id)arg2 title:(id)arg3 actorName:(id)arg4 actorKugouId:(long long)arg5 directorName:(id)arg6 directorKugouId:(long long)arg7 labelIds:(id)arg8 duration:(long long)arg9 hash:(id)arg10 size:(id)arg11 thumbUrl:(id)arg12 description:(id)arg13 succeed:(CDUnknownBlockType)arg14 fail:(CDUnknownBlockType)arg15;
- (id)getAvailableLabelWithSucceed:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
- (id)queryMvStatusWithVideoId:(id)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)getMVSupportStatusWithkugouId:(long long)arg1 commentIds:(id)arg2 succeed:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (id)supportMVCommentWithCommentId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)addCommentWithMVId:(long long)arg1 content:(id)arg2 playTime:(unsigned long long)arg3 replyComment:(id)arg4 succeed:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
- (id)getMVCommentListWithMVId:(long long)arg1 Page:(int)arg2 PageSize:(int)arg3 succeed:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (id)getPraiseStatusWithMVId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)praiseMVWithMvId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)deleteMVWithmMvId:(long long)arg1 type:(int)arg2 succeed:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (id)getMyMVs_newWithUserId:(long long)arg1 Page:(int)arg2 PageSize:(int)arg3 IsMyMVList:(_Bool)arg4 succeed:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
- (id)getMyMVsWithUserId:(long long)arg1 Page:(int)arg2 PageSize:(int)arg3 IsMyMVList:(_Bool)arg4 succeed:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;
- (id)getMVBaseListWithrankType:(long long)arg1 page:(long long)arg2 pageSize:(long long)arg3 succeed:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
- (id)getMVRecommendListWithPage:(long long)arg1 pageSize:(long long)arg2 succeed:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (id)getMVDetailsWithMvId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)mvTriggerPlayStatisWithMvId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)mvPlayStatisWithMvId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;

@end


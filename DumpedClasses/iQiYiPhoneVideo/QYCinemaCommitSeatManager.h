//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONDataManager.h"

@class QYCinemaCommitSeatRequest;

@interface QYCinemaCommitSeatManager : JSONDataManager
{
    QYCinemaCommitSeatRequest *_request;
    unsigned long long _dealEndTime;
    unsigned long long _dealStartTime;
    unsigned long long _requestEndTime;
}

@property(nonatomic) unsigned long long requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(nonatomic) unsigned long long dealStartTime; // @synthesize dealStartTime=_dealStartTime;
@property(nonatomic) unsigned long long dealEndTime; // @synthesize dealEndTime=_dealEndTime;
@property(retain, nonatomic) QYCinemaCommitSeatRequest *request; // @synthesize request=_request;
- (_Bool)shouldFetchRemote;
- (void)fetchLocalData;
- (void)fetchRemoteData;
- (_Bool)saveToLocal;
- (void)saveCacheData;
- (void)messageRequestDidFailed:(id)arg1;
- (void)messageRequestDidFinish:(id)arg1;
- (void)requestData;
- (void)cancel;
- (id)init;
- (void)dealloc;

@end


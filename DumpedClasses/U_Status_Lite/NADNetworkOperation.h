//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSMutableData, NSRecursiveLock, NSURLConnection, NSURLRequest;
@protocol NADResponseSerializer;

@interface NADNetworkOperation : NSOperation
{
    int _operationState;
    NSURLConnection *_connection;
    NSRecursiveLock *_lock;
    NSURLRequest *_request;
    NSMutableData *_responseData;
    NSError *_error;
    id _responseObject;
    id <NADResponseSerializer> _serializer;
}

+ (id)operationWithRequest:(id)arg1 responseSerializer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) int operationState; // @synthesize operationState=_operationState;
@property(retain, nonatomic) id <NADResponseSerializer> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)isConcurrent;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (void)cancel;
- (void)start;
- (void)finish;
- (void)registerCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end


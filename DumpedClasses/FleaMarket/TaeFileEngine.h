//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALBBMediaServiceProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, TFEUploadNotification;

@interface TaeFileEngine : NSObject <ALBBMediaServiceProtocol>
{
    _Bool _useSpdy;
    _Bool _debug;
    TFEUploadNotification *_globalNotification;
    NSObject<OS_dispatch_queue> *_httpRequestQueue;
    long long _currentEnvironment;
    id <TFETokenManager> _tokenManager;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain, nonatomic) id <TFETokenManager> tokenManager; // @synthesize tokenManager=_tokenManager;
@property(nonatomic) long long currentEnvironment; // @synthesize currentEnvironment=_currentEnvironment;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *httpRequestQueue; // @synthesize httpRequestQueue=_httpRequestQueue;
@property(retain, nonatomic) TFEUploadNotification *globalNotification; // @synthesize globalNotification=_globalNotification;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(nonatomic) _Bool useSpdy; // @synthesize useSpdy=_useSpdy;
- (void).cxx_destruct;
- (id)getImageComponent;
- (void)setTokenGenerator:(id)arg1;
- (id)version;
- (id)uploadByData:(id)arg1 space:(id)arg2 fileName:(id)arg3 dir:(id)arg4 progress:(CDUnknownBlockType)arg5 success:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7;
- (id)upload:(id)arg1 options:(id)arg2 notification:(id)arg3;
- (id)upload:(id)arg1 notification:(id)arg2;
- (void)cancelAllUploads;
- (void)cancelUploadBySession:(id)arg1;
- (void)cancelUploadByUniqueId:(id)arg1;
- (void)asyncExecute:(CDUnknownBlockType)arg1;
- (id)getTransferredURL:(id)arg1 options:(id)arg2;
- (id)logAndReturn:(id)arg1 error:(id)arg2;
- (id)transfer:(id)arg1;
- (id)getTransferedURL:(id)arg1 error:(id *)arg2;
- (id)asynLoad:(id)arg1 notifications:(id)arg2 options:(id)arg3;
- (id)asynLoad:(id)arg1 notifications:(id)arg2;
- (id)load:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)registerUrl:(id)arg1;
- (id)load:(id)arg1 error:(id *)arg2;
- (id)initWithDefault;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBLIDirectorProtocol.h"

@class NSDictionary, NSString, TBLIEventComponentController, TBLIVideoModel;

@interface TBLIInstance : NSObject <TBLIDirectorProtocol>
{
    _Bool _fullScreen;
    NSDictionary *_properties;
    NSString *_videoSource;
    NSString *_bizCode;
    NSString *_videoID;
    CDUnknownBlockType _onSuccess;
    CDUnknownBlockType _onShowView;
    TBLIVideoModel *_timeLineVideoModel;
    TBLIVideoModel *_notTimeLineVideoModel;
    TBLIEventComponentController *_eventComponentController;
    NSDictionary *_info;
    struct CGRect _frame;
}

+ (id)getVideoID:(id)arg1;
+ (id)getSDKVersion;
+ (void)registerComponentName:(id)arg1 withClass:(Class)arg2;
+ (void)registerEventAdapterWithClass:(id)arg1;
+ (void)registerCellSelectHandlerAdapterWithClass:(id)arg1;
+ (void)registerUserTrackAdapterWithClass:(id)arg1;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) TBLIEventComponentController *eventComponentController; // @synthesize eventComponentController=_eventComponentController;
@property(retain, nonatomic) TBLIVideoModel *notTimeLineVideoModel; // @synthesize notTimeLineVideoModel=_notTimeLineVideoModel;
@property(retain, nonatomic) TBLIVideoModel *timeLineVideoModel; // @synthesize timeLineVideoModel=_timeLineVideoModel;
@property(copy, nonatomic) CDUnknownBlockType onShowView; // @synthesize onShowView=_onShowView;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(copy, nonatomic) CDUnknownBlockType onSuccess; // @synthesize onSuccess=_onSuccess;
@property(retain, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(retain, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)receive:(id)arg1 error:(id)arg2 arg:(id)arg3;
- (id)getUTParamsForBaseUTParams:(id)arg1;
- (void)ringSearchUTFor2001:(id)arg1 extendParams:(id)arg2 comName:(id)arg3;
- (_Bool)iOS7;
- (void)openUrlAction:(id)arg1;
- (void)renderInteractiveView:(id)arg1 isFullScreen:(_Bool)arg2;
- (id)interactiveID;
- (void)destroy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

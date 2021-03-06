//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

#import "IEngineDispatchDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QQWebViewController;

@interface QQPublicAccountWebWhiteListMgr : QQGroupPropertyModel <IEngineDispatchDelegate>
{
    NSDictionary *_webParams;
    NSDictionary *_totalPublicAccountWhiteList;
    NSMutableArray *_webWhiteList;
    NSMutableArray *_serverWhiteList;
    NSMutableArray *_webRetBitmap;
    NSMutableArray *_realWhiteList;
    NSDictionary *_reportKeyList;
    QQWebViewController *_webViewController;
    unsigned long long _refuseSecond;
    double _lastRequestTime;
    unsigned long long _puin;
    unsigned long long _appId;
    NSMutableDictionary *_requestDictionary;
}

+ (id)instance;
@property(nonatomic) QQWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void)sendJsApiBaseReq:(unsigned long long)arg1 withParam:(id)arg2;
- (void)requestWhitList:(id)arg1;
- (unsigned long long)getAppId;
- (id)getReportVersion:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)mergeWebAndServerList;
- (_Bool)isPublicAccountArticleUrl:(id)arg1;
- (void)reportWebPBClick:(id)arg1 andParams:(id)arg2;
- (int)checkApiInWhiteListWithApi:(id)arg1 andUrl:(id)arg2;
- (void)clearStateWithUrl:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long appId; // @dynamic appId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double lastRequestTime; // @dynamic lastRequestTime;
@property(nonatomic) unsigned long long puin; // @dynamic puin;
@property(retain, nonatomic) NSMutableArray *realWhiteList; // @dynamic realWhiteList;
@property(nonatomic) unsigned long long refuseSecond; // @dynamic refuseSecond;
@property(retain, nonatomic) NSDictionary *reportKeyList; // @dynamic reportKeyList;
@property(retain, nonatomic) NSMutableDictionary *requestDictionary; // @dynamic requestDictionary;
@property(retain, nonatomic) NSMutableArray *serverWhiteList; // @dynamic serverWhiteList;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *totalPublicAccountWhiteList; // @dynamic totalPublicAccountWhiteList;
@property(retain, nonatomic) NSDictionary *webParams; // @dynamic webParams;
@property(retain, nonatomic) NSMutableArray *webRetBitmap; // @dynamic webRetBitmap;
@property(retain, nonatomic) NSString *webUrl; // @dynamic webUrl;
@property(retain, nonatomic) NSMutableArray *webWhiteList; // @dynamic webWhiteList;

@end


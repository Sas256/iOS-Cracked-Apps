//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, responseRecommendData;

@protocol QYProductRequestManagerDelegate <NSObject>

@optional
- (void)buyProductFinishWithResult:(int)arg1 andObject:(id)arg2;
- (void)postRecommendListShowPingbackRpage:(NSMutableDictionary *)arg1;
- (void)produceBuy_AfterLogin;
- (void)productRequest_Failed:(NSString *)arg1;
- (void)productRequest_Finish:(NSMutableArray *)arg1 orgineProductList:(NSMutableArray *)arg2;
- (void)productRequest_Recomment_Finish:(responseRecommendData *)arg1;
- (void)productRequest_Start;
@end


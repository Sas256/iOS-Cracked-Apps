//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRWanliuBaseRequest.h"

@interface TRWanliuLogCollectionReq : TRWanliuBaseRequest
{
}

+ (id)encodeString:(id)arg1;
+ (id)dataTojsonString:(id)arg1;
+ (id)getSharePublicLogWithEventId:(id)arg1 withChannel:(id)arg2 productId:(id)arg3 oid:(id)arg4;
+ (id)getCarLevel:(id)arg1;
+ (id)oknet_adapterWithPublicLog:(id)arg1 type:(id)arg2;
+ (id)oknet_adapterWithLogParam:(id)arg1 andOid:(id)arg2 lng:(id)arg3 lat:(id)arg4 log:(id)arg5 type:(int)arg6;
- (id)responseModelWithData:(id)arg1;
- (id)pathName;
- (id)methodName;
- (id)initWithPublicLog:(id)arg1 type:(id)arg2;
- (id)initWithLogParam:(id)arg1 andOid:(id)arg2 lng:(id)arg3 lat:(id)arg4 log:(id)arg5 type:(int)arg6;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMessageRequest.h"

@class NSString;

@interface QYCinemaOrderDelRequest : QYMessageRequest
{
    NSString *_orderId;
}

@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

@interface CTAddressSender : CTSender
{
}

+ (id)getInstance;
- (void)updateAddressList:(int)arg1 AddressModel:(id)arg2;
- (id)getAddressList;
- (id)sendDeleteAddressByInforId:(int)arg1;
- (id)sendEditAddress:(id)arg1 AddressType:(int)arg2;
- (id)sendAddAddress:(id)arg1 AddressType:(int)arg2;

@end


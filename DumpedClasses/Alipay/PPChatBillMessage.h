//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatMessage.h"

#import "NSCoding.h"
#import "PPChatActionSource.h"

@class NSArray, NSString;

@interface PPChatBillMessage : PPChatMessage <NSCoding, PPChatActionSource>
{
    NSString *_title;
    NSString *_detail;
    NSArray *_items;
    NSString *_actionType;
    NSString *_actionParam;
}

@property(retain, nonatomic) NSString *actionParam; // @synthesize actionParam=_actionParam;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)titleForHome;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

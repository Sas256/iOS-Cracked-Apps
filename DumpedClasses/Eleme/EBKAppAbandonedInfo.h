//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface EBKAppAbandonedInfo : NVMModel
{
    _Bool _isBandoned;
    NSString *_descriptionText;
    NSString *_scheme;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) _Bool isBandoned; // @synthesize isBandoned=_isBandoned;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSArray<Optional>, NSString<Optional>;

@interface DCNewSharePositionModel : TRBaseModel
{
    NSString<Optional> *_uploadFreq;
    NSString<Optional> *_isUpload;
    NSArray<Optional> *_shareInfo;
    NSString<Optional> *_eta_timeout;
    NSString<Optional> *_my_switch;
}

@property(copy, nonatomic) NSString<Optional> *my_switch; // @synthesize my_switch=_my_switch;
@property(copy, nonatomic) NSString<Optional> *eta_timeout; // @synthesize eta_timeout=_eta_timeout;
@property(retain, nonatomic) NSArray<Optional> *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSString<Optional> *isUpload; // @synthesize isUpload=_isUpload;
@property(copy, nonatomic) NSString<Optional> *uploadFreq; // @synthesize uploadFreq=_uploadFreq;
- (void).cxx_destruct;

@end


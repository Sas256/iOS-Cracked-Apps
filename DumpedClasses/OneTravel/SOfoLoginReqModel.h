//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOfoRequestModel.h"

@class NSNumber<Optional><RequestParam>, NSString<Optional><RequestParam>;

@interface SOfoLoginReqModel : SOfoRequestModel
{
    NSString<Optional><RequestParam> *_ott;
    NSNumber<Optional><RequestParam> *_source;
}

@property(copy, nonatomic) NSNumber<Optional><RequestParam> *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString<Optional><RequestParam> *ott; // @synthesize ott=_ott;
- (void).cxx_destruct;
- (id)responseName;
- (id)pathName;

@end

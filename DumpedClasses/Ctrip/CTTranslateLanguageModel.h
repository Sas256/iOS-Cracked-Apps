//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface CTTranslateLanguageModel : NSObject <NSCopying>
{
    NSString *_languageNameCN;
    NSString *_languageNameEN;
    NSString *_languageCode;
    NSString *_languageImageTranCode;
    NSString *_transCode;
    NSString *_speakLanaguageName;
}

@property(copy, nonatomic) NSString *speakLanaguageName; // @synthesize speakLanaguageName=_speakLanaguageName;
@property(copy, nonatomic) NSString *transCode; // @synthesize transCode=_transCode;
@property(copy, nonatomic) NSString *languageImageTranCode; // @synthesize languageImageTranCode=_languageImageTranCode;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *languageNameEN; // @synthesize languageNameEN=_languageNameEN;
@property(copy, nonatomic) NSString *languageNameCN; // @synthesize languageNameCN=_languageNameCN;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, ONEPassengerProfileModel, ONEUserCellModel;

@interface ONEUserCenterStore : NSObject
{
    CDUnknownBlockType _UserInfoblock;
    ONEPassengerProfileModel *_userProfileModel;
    ONEUserCellModel *_selectUserCellModle;
    NSArray *_IndustryArray;
    NSArray *_ageArray;
    NSArray *_sexArray;
    CDUnknownBlockType _nameBlock;
    CDUnknownBlockType _professionBlock;
    CDUnknownBlockType _companyBlock;
    CDUnknownBlockType _signatureBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType signatureBlock; // @synthesize signatureBlock=_signatureBlock;
@property(copy, nonatomic) CDUnknownBlockType companyBlock; // @synthesize companyBlock=_companyBlock;
@property(copy, nonatomic) CDUnknownBlockType professionBlock; // @synthesize professionBlock=_professionBlock;
@property(copy, nonatomic) CDUnknownBlockType nameBlock; // @synthesize nameBlock=_nameBlock;
@property(retain, nonatomic) NSArray *sexArray; // @synthesize sexArray=_sexArray;
@property(retain, nonatomic) NSArray *ageArray; // @synthesize ageArray=_ageArray;
@property(retain, nonatomic) NSArray *IndustryArray; // @synthesize IndustryArray=_IndustryArray;
@property(retain, nonatomic) ONEUserCellModel *selectUserCellModle; // @synthesize selectUserCellModle=_selectUserCellModle;
@property(retain, nonatomic) ONEPassengerProfileModel *userProfileModel; // @synthesize userProfileModel=_userProfileModel;
- (void).cxx_destruct;
- (void)updateGlobalLocalUserInfo:(id)arg1;
- (id)componentsSeparatedByString:(id)arg1 mode:(id)arg2;
- (_Bool)isNoEmpty:(id)arg1;
- (id)parsingDicData:(id)arg1 key:(id)arg2;
- (void)requestAgeListOrIndustry:(long long)arg1 isSuccess:(CDUnknownBlockType)arg2;
- (void)updateUserProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)aidUploadUserIconFilePath:(id)arg1 isSuccess:(CDUnknownBlockType)arg2;
- (void)aidUploadUserInfo:(id)arg1 isSuccess:(CDUnknownBlockType)arg2;
- (void)initSexArray;
- (id)requreUserInfoData;
- (void)initBasisData;
- (id)dictionaryWithUserInfo:(id)arg1;
- (id)errorWithString:(id)arg1;
- (id)errorWithResponseObject:(id)arg1;
- (void)submitUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)languageChange;
- (void)dealloc;
- (id)token;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, QQVipFunctionDownloadStatus;

@interface QQVipFunctionComicDBModel : NSObject
{
    NSString *_comicID;
    QQVipFunctionDownloadStatus *_comicStatus;
    NSMutableArray *_sectionDBModelsArray;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *comicID; // @dynamic comicID;
@property(retain, nonatomic) QQVipFunctionDownloadStatus *comicStatus; // @dynamic comicStatus;
@property(retain, nonatomic) NSMutableArray *sectionDBModelsArray; // @dynamic sectionDBModelsArray;

@end


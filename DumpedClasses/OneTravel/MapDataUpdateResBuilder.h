//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class MapDataUpdateRes;

@interface MapDataUpdateResBuilder : PBGeneratedMessageBuilder
{
    MapDataUpdateRes *resultMapDataUpdateRes;
}

@property(retain) MapDataUpdateRes *resultMapDataUpdateRes; // @synthesize resultMapDataUpdateRes;
- (void).cxx_destruct;
- (id)clearUpdateFiles;
- (id)setUpdateFilesArray:(id)arg1;
- (id)addUpdateFiles:(id)arg1;
- (id)updateFilesAtIndex:(unsigned long long)arg1;
- (id)updateFiles;
- (id)clearUpdateUrls;
- (id)setUpdateUrlsArray:(id)arg1;
- (id)addUpdateUrls:(id)arg1;
- (id)updateUrlsAtIndex:(unsigned long long)arg1;
- (id)updateUrls;
- (id)clearMsg;
- (id)setMsg:(id)arg1;
- (id)msg;
- (_Bool)hasMsg;
- (id)clearRet;
- (id)setRet:(int)arg1;
- (int)ret;
- (_Bool)hasRet;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;

@end

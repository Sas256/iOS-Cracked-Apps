//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMAssetItem.h"

@class ALAsset, NSString;

@interface NMAssetLibraryItem : NMAssetItem
{
    ALAsset *_asset;
    NSString *_identifier;
}

- (void).cxx_destruct;
- (double)duration;
- (id)date;
- (id)filePathURL;
- (void)makeInvalid;
- (_Bool)valid;
- (id)identifier;
- (long long)fileLength;
- (_Bool)isAPNG;
- (_Bool)isGif;
- (_Bool)isPhoto;
- (_Bool)isVideo;
- (void)getLargeImageThumbnailWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)saveOriginalImageToPath:(id)arg1;
- (id)getLargeImageThumbnail;
- (id)originalImage;
- (id)originalImageData;
- (id)fullScreenImage;
- (struct CGSize)dimensions;
- (id)thumbnail;
- (id)initWithAsset:(id)arg1;

@end

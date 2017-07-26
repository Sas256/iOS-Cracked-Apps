//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFlipImageView.h"

@class NSString, UIImageView;

@interface QQMaskImageView : QQFlipImageView
{
    UIImageView *_maskImage;
    int _cornerType;
    NSString *filePath;
}

- (void)handleGifDecodeNotification:(id)arg1;
- (void)asynLoadImage:(id)arg1;
- (void)setImageURL:(id)arg1 isGif:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)setCornerType:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 defaultImage:(id)arg2 maskImage:(id)arg3;

@end

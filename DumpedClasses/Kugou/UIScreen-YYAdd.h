//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScreen.h"

@interface UIScreen (YYAdd)
+ (double)screenScale;
@property(readonly, nonatomic) double pixelsPerInch;
@property(readonly, nonatomic) struct CGSize sizeInPixel;
- (struct CGRect)boundsForOrientation:(long long)arg1;
- (struct CGRect)currentBounds;
@end

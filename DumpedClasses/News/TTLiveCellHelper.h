//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTLiveCellHelper : NSObject
{
}

+ (void)dismissCellMenuIfNeeded;
+ (id)thumbImageWithSourceImage:(id)arg1;
+ (id)formattedTimeWithVideoDuration:(double)arg1;
+ (id)formattedSizeWithVideoFileSize:(long long)arg1;
+ (_Bool)supportCellBottomLoadingProgressViewWithMessage:(id)arg1;
+ (_Bool)shouldShowCellBottomLoadingProgressViewWithMessage:(id)arg1;
+ (double)labelWidthWithText:(id)arg1 fontSize:(double)arg2;
+ (double)adjustedContentViewWidthWithOriginWidth:(double)arg1 message:(id)arg2;
+ (double)heightOfNormalReplyedContentViewWithMessage:(id)arg1;
+ (struct CGSize)sizeOfNormalContentViewWithMessage:(id)arg1;
+ (struct CGSize)sizeOfMetaAudioViewWithMessage:(id)arg1;
+ (struct CGSize)adjustedSizeOfSourceMetaImageSize:(struct CGSize)arg1 isReplyedMsg:(_Bool)arg2;
+ (struct CGSize)adjustedSizeOfSourceMetaImageSize:(struct CGSize)arg1;
+ (struct CGSize)sizeOfTextViewWithMessage:(id)arg1;

@end


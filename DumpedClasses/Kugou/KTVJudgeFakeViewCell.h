//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVMakeJudgeView.h"

@class UIImageView, UIView;

@interface KTVJudgeFakeViewCell : KTVMakeJudgeView
{
    _Bool _isFake;
    long long _index;
    UIView *_fakeBgView;
    UIImageView *_fakeImageView;
}

@property(retain, nonatomic) UIImageView *fakeImageView; // @synthesize fakeImageView=_fakeImageView;
@property(retain, nonatomic) UIView *fakeBgView; // @synthesize fakeBgView=_fakeBgView;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isFake; // @synthesize isFake=_isFake;
- (void).cxx_destruct;
- (void)startMaskDropAnimationWithLeftImageUrlString:(id)arg1 leftUserNickName:(id)arg2 rightImageUrlString:(id)arg3 rightUserNickName:(id)arg4;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IQZUrlDownloaderDelegate.h"

@class NSDictionary, NSString, UIViewController;

@interface MQZQbossDownQzoneAdvView : UIView <IQZUrlDownloaderDelegate>
{
    NSDictionary *_paramDic;
    NSString *_title;
    _Bool *_isHasGetedQbossAdvCurrVer;
    id <MQZQbossDownQzoneAdvViewDelegate> _delegate;
    UIViewController *_parentQzoneViewController;
}

@property(nonatomic) __weak UIViewController *parentQzoneViewController; // @synthesize parentQzoneViewController=_parentQzoneViewController;
@property(nonatomic) __weak id <MQZQbossDownQzoneAdvViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showQbossDownQzoneAdvViewWithImgUrl:(id)arg1 WithTitle:(id)arg2 userData:(id)arg3 delegate:(id)arg4 parentViewController:(id)arg5 isHasShowQbossAdv:(_Bool *)arg6;
- (void)dismiss;
- (void)operationButtonClicked:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)startLoadImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


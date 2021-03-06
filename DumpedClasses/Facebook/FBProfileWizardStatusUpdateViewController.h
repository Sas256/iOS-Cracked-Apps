//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBProfileWizardViewController.h"

#import "FBProfileNuxStatusUpdateTapHandlerDelegate-Protocol.h"
#import "FBProfileWizardStatusUpdateViewDelegate-Protocol.h"

@class FBFeedInlineComposerController, FBProfileLifeEventComposerOpener, FBProfileWizardStatusUpdateTapHandler, FBProfileWizardStatusUpdateView, NSString;

@interface FBProfileWizardStatusUpdateViewController : FBProfileWizardViewController <FBProfileWizardStatusUpdateViewDelegate, FBProfileNuxStatusUpdateTapHandlerDelegate>
{
    FBProfileWizardStatusUpdateView *_statusUpdateView;
    FBProfileWizardStatusUpdateTapHandler *_tapHandler;
    FBFeedInlineComposerController *_feedInlineComposerController;
    FBProfileLifeEventComposerOpener *_lifeEventComposerOpener;
}

- (void).cxx_destruct;
- (id)feedInlineComposerController;
- (void)profileNuxOpenLifeEventComposerFromSourceView:(id)arg1 composerSourceType:(id)arg2 composerContentOrigin:(id)arg3;
- (void)profileNuxComposerCompleted;
- (void)goToNextStep;
- (void)didTapSkip;
- (_Bool)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(struct CGPoint)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithProfileWizardModel:(id)arg1 session:(id)arg2 currentStepIndex:(unsigned long long)arg3;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


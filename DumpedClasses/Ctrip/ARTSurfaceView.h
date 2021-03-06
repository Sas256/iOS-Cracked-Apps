//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ARTContainer.h"

@class NSString;

@interface ARTSurfaceView : UIView <ARTContainer>
{
}

- (void)reactSetInheritedBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)invalidate;
- (void)didUpdateReactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


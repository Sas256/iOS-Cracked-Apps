//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GMSIndoorBuilding, GMSIndoorState;

@interface GMSIndoorFocusManager : NSObject
{
    GMSIndoorBuilding *_focusedBuilding;
    GMSIndoorState *_indoorState;
    id <GMSIndoorFocusDelegate> _delegate;
}

@property(nonatomic) __weak id <GMSIndoorFocusDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GMSIndoorState *indoorState; // @synthesize indoorState=_indoorState;
@property(readonly, nonatomic) GMSIndoorBuilding *focusedBuilding; // @synthesize focusedBuilding=_focusedBuilding;
- (void).cxx_destruct;
- (struct Frustum2D)focusFrustumForCamera:(const reffed_ptr_329922e5 *)arg1;
- (void)setFocusedBuilding:(id)arg1;
- (void)updateViewportWithCamera:(const reffed_ptr_329922e5 *)arg1;
- (id)initWithIndoorState:(id)arg1;

@end

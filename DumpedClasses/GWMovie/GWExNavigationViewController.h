//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseNavigationViewController.h"

@interface GWExNavigationViewController : GWBaseNavigationViewController
{
    struct CGPoint startTouch;
    _Bool _isMoving;
}

@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
- (void)closeExWindow:(_Bool)arg1;
- (void)moveViewWithX_Ex:(float)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)paningGestureReceive:(id)arg1;

@end


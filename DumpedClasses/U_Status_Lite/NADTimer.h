//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol NADTimerDelegate;

@interface NADTimer : NSObject
{
    id <NADTimerDelegate> _delegate;
    SEL _callSelector;
    NSTimer *_tm;
}

@property(retain, nonatomic) NSTimer *tm; // @synthesize tm=_tm;
@property(nonatomic) SEL callSelector; // @synthesize callSelector=_callSelector;
@property(nonatomic) __weak id <NADTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isValid;
- (void)invalidate;
- (void)timerCallback;
- (void)startTimer:(SEL)arg1 time:(double)arg2;

@end


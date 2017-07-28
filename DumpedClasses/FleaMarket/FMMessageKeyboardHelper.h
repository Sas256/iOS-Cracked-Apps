//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FMMessageKeyboardHelper : NSObject
{
    double _keyboardWillShowDuration;
    unsigned long long _keyboardWillShowOption;
    double _keyboardWillHideDuration;
    unsigned long long _keyboardWillHideOption;
    struct CGRect _keyboardWillShowFrame;
    struct CGRect _keyboardWillHideFrame;
}

+ (id)sharedInstance;
@property(nonatomic) struct CGRect keyboardWillHideFrame; // @synthesize keyboardWillHideFrame=_keyboardWillHideFrame;
@property(nonatomic) unsigned long long keyboardWillHideOption; // @synthesize keyboardWillHideOption=_keyboardWillHideOption;
@property(nonatomic) double keyboardWillHideDuration; // @synthesize keyboardWillHideDuration=_keyboardWillHideDuration;
@property(nonatomic) struct CGRect keyboardWillShowFrame; // @synthesize keyboardWillShowFrame=_keyboardWillShowFrame;
@property(nonatomic) unsigned long long keyboardWillShowOption; // @synthesize keyboardWillShowOption=_keyboardWillShowOption;
@property(nonatomic) double keyboardWillShowDuration; // @synthesize keyboardWillShowDuration=_keyboardWillShowDuration;
- (unsigned long long)animtionOptionsForAnimationCure:(long long)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setup;
- (void)dealloc;
- (id)init;

@end

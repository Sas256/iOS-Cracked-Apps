//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CRNPlugin.h"

#import "CTBirthdayPickerDelegate.h"

@class NSString;

@interface CRNBirthdayPickerPlugin : CRNPlugin <CTBirthdayPickerDelegate>
{
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)birthdayPickerConfirmWithDate:(id)arg1 birthdayPicker:(id)arg2;
- (void)birthdayPickerCancel:(id)arg1;
- (void)callFunction:(id)arg1 parameters:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol BEEPhotoPickerDelegate <NSObject>

@optional
- (void)photoPickerControllerDidFinish:(id)arg1 assets:(NSArray *)arg2;
- (void)photoPickerControllerDidFinish:(id)arg1;
- (void)photoPickerControllerWillDismiss:(id)arg1;
- (void)photoPickerControllerDidCancel:(id)arg1 withError:(unsigned long long)arg2;
- (void)photoPickerControllerWillCancel:(id)arg1 withError:(unsigned long long)arg2;
- (void)photoPickerController:(id)arg1 processingAssets:(NSArray *)arg2 data:(NSArray *)arg3;
- (void)photoPickerController:(id)arg1 didFinishPickingAssets:(NSArray *)arg2 theOriginal:(_Bool)arg3 source:(unsigned long long)arg4;
- (void)photoPickerController:(id)arg1 didFinishPickingAssets:(NSArray *)arg2 theOriginal:(_Bool)arg3;
- (void)photoPickerController:(id)arg1 didFinishPickingAssetData:(NSArray *)arg2;
- (void)photoPickerController:(id)arg1 didUnpickAssets:(NSArray *)arg2;
- (void)photoPickerController:(id)arg1 didPickAssets:(NSArray *)arg2;
@end

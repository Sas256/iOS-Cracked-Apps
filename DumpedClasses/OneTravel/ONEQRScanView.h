//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AVCaptureMetadataOutputObjectsDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, UIColor;

@interface ONEQRScanView : UIView <AVCaptureMetadataOutputObjectsDelegate>
{
    _Bool _showScanLine;
    _Bool _showBorderLine;
    _Bool _showCornerLine;
    id <ONEQRScanDelegate> _delegate;
    UIView *_maskView;
    UIColor *_scanLineColor;
    UIColor *_cornerLineColor;
    UIColor *_borderLineColor;
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureMetadataOutput *_dataOutput;
    AVCaptureSession *_session;
    UIView *_middleView;
    UIView *_scanLine;
    AVCaptureVideoPreviewLayer *_previewLayer;
    struct CGRect _scanRect;
}

+ (_Bool)isCameraAuthStatusCorrect;
+ (_Bool)isRearCameraAvailable;
+ (_Bool)isFrontCameraAvailable;
+ (_Bool)isCameraAvailable;
+ (_Bool)statusCheck;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) UIView *scanLine; // @synthesize scanLine=_scanLine;
@property(retain, nonatomic) UIView *middleView; // @synthesize middleView=_middleView;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AVCaptureMetadataOutput *dataOutput; // @synthesize dataOutput=_dataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *deviceInput; // @synthesize deviceInput=_deviceInput;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
@property(nonatomic, getter=isShowCornerLine) _Bool showCornerLine; // @synthesize showCornerLine=_showCornerLine;
@property(nonatomic, getter=isShowBorderLine) _Bool showBorderLine; // @synthesize showBorderLine=_showBorderLine;
@property(nonatomic, getter=isShowScanLine) _Bool showScanLine; // @synthesize showScanLine=_showScanLine;
@property(retain, nonatomic) UIColor *borderLineColor; // @synthesize borderLineColor=_borderLineColor;
@property(retain, nonatomic) UIColor *cornerLineColor; // @synthesize cornerLineColor=_cornerLineColor;
@property(retain, nonatomic) UIColor *scanLineColor; // @synthesize scanLineColor=_scanLineColor;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) struct CGRect scanRect; // @synthesize scanRect=_scanRect;
@property(nonatomic) __weak id <ONEQRScanDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)addCornerLines;
- (void)addScanBorderLine;
- (void)removeScanLineAnimation;
- (void)addScanLineAnimation;
- (void)setupViews;
- (void)stopScanning;
- (void)startScanning;
- (void)showScanLine:(_Bool)arg1;
- (void)configCameraAndStart;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


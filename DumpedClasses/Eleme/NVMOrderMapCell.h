//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMOrderCell.h"

#import "MKMapViewDelegate.h"

@class EODNormalAnnotationView, MKMapView, NSString, NVMMapAnnotation, NVMOrderLocationInfo, NVMRiderLocationAnnotationView;

@interface NVMOrderMapCell : NVMOrderCell <MKMapViewDelegate>
{
    MKMapView *_mapView;
    NVMOrderLocationInfo *_locationInfo;
    NVMMapAnnotation *_riderAnnotation;
    NVMRiderLocationAnnotationView *_riderAnnotationView;
    NVMMapAnnotation *_myAnnotation;
    EODNormalAnnotationView *_myAnnotationView;
    NVMMapAnnotation *_restaurantAnnotation;
    EODNormalAnnotationView *_restaurantAnnotationView;
}

+ (double)heightForOrder:(id)arg1;
@property(retain, nonatomic) EODNormalAnnotationView *restaurantAnnotationView; // @synthesize restaurantAnnotationView=_restaurantAnnotationView;
@property(retain, nonatomic) NVMMapAnnotation *restaurantAnnotation; // @synthesize restaurantAnnotation=_restaurantAnnotation;
@property(retain, nonatomic) EODNormalAnnotationView *myAnnotationView; // @synthesize myAnnotationView=_myAnnotationView;
@property(retain, nonatomic) NVMMapAnnotation *myAnnotation; // @synthesize myAnnotation=_myAnnotation;
@property(retain, nonatomic) NVMRiderLocationAnnotationView *riderAnnotationView; // @synthesize riderAnnotationView=_riderAnnotationView;
@property(retain, nonatomic) NVMMapAnnotation *riderAnnotation; // @synthesize riderAnnotation=_riderAnnotation;
@property(retain, nonatomic) NVMOrderLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)addAnnotations;
- (void)updateBottomView;
- (void)addBottomView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


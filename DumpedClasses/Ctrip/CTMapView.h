//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTAnimationLoadingViewDelegate.h"
#import "CTLocationDelegate.h"
#import "CTMapBaseAnnotationViewDelegate.h"
#import "MKMapViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class CTAlertView, CTGeoAddress, CTMapAnnotation, MKMapView, NSArray, NSMutableArray, NSMutableData, NSString, UIButton, UILongPressGestureRecognizer;

@interface CTMapView : UIView <CTLocationDelegate, UIActionSheetDelegate, MKMapViewDelegate, CTAnimationLoadingViewDelegate, CTMapBaseAnnotationViewDelegate>
{
    _Bool isActiveLongPressGesture_;
    _Bool isCanceledRoute_;
    _Bool isLoading_;
    _Bool isShowLoadingView_;
    MKMapView *contentMap_;
    CTAlertView *locationAlertView_;
    UILongPressGestureRecognizer *longPressGesture_;
    NSMutableArray *annotationArray_;
    NSMutableArray *routePointArray_;
    NSMutableArray *routeLineModelArray_;
    NSMutableArray *circleModelArray_;
    NSMutableArray *routeLineArray_;
    NSMutableArray *circleArray_;
    NSMutableData *receiveData_;
    NSMutableArray *straightLineModelArray_;
    NSMutableArray *straightLineArray_;
    NSMutableArray *multiLineModelArray_;
    NSMutableArray *multiLineArray_;
    _Bool _disableAutoScrollMapToUserLocation;
    id <CTMapWidgetDelegate> delegate;
    unsigned long long _maxControlZoomLevel;
    CDUnknownBlockType _refreshUserLocationBlock;
    UIButton *_navigateButton;
    UIButton *_currentLocationButton;
    CTMapAnnotation *_selectedAnotation;
    CTGeoAddress *_currentGeoAddress;
    CTGeoAddress *_navigateFromGeoAddress;
    CTGeoAddress *_navigateDestinationGeoAddress;
}

@property(retain, nonatomic) CTGeoAddress *navigateDestinationGeoAddress; // @synthesize navigateDestinationGeoAddress=_navigateDestinationGeoAddress;
@property(retain, nonatomic) CTGeoAddress *navigateFromGeoAddress; // @synthesize navigateFromGeoAddress=_navigateFromGeoAddress;
@property(retain, nonatomic) CTGeoAddress *currentGeoAddress; // @synthesize currentGeoAddress=_currentGeoAddress;
@property(nonatomic) CTMapAnnotation *selectedAnotation; // @synthesize selectedAnotation=_selectedAnotation;
@property(retain, nonatomic) UIButton *currentLocationButton; // @synthesize currentLocationButton=_currentLocationButton;
@property(retain, nonatomic) UIButton *navigateButton; // @synthesize navigateButton=_navigateButton;
@property(copy, nonatomic) CDUnknownBlockType refreshUserLocationBlock; // @synthesize refreshUserLocationBlock=_refreshUserLocationBlock;
@property(nonatomic) unsigned long long maxControlZoomLevel; // @synthesize maxControlZoomLevel=_maxControlZoomLevel;
@property(nonatomic) _Bool disableAutoScrollMapToUserLocation; // @synthesize disableAutoScrollMapToUserLocation=_disableAutoScrollMapToUserLocation;
@property(nonatomic) _Bool isActiveLongPressGesture; // @synthesize isActiveLongPressGesture=isActiveLongPressGesture_;
@property(readonly, nonatomic) NSArray *multiLineModelArray; // @synthesize multiLineModelArray=multiLineModelArray_;
@property(readonly, nonatomic) NSArray *multiLineArray; // @synthesize multiLineArray=multiLineArray_;
@property(readonly, nonatomic) NSArray *straightLineModelArray; // @synthesize straightLineModelArray=straightLineModelArray_;
@property(readonly, nonatomic) NSArray *straightLineArray; // @synthesize straightLineArray=straightLineArray_;
@property(readonly, nonatomic) NSArray *circleArray; // @synthesize circleArray=circleArray_;
@property(readonly, nonatomic) NSArray *routeLineArray; // @synthesize routeLineArray=routeLineArray_;
@property(readonly, nonatomic) NSArray *circleModelArray; // @synthesize circleModelArray=circleModelArray_;
@property(readonly, nonatomic) NSArray *routeLineModelArray; // @synthesize routeLineModelArray=routeLineModelArray_;
@property(readonly, nonatomic) NSArray *routePointArray; // @synthesize routePointArray=routePointArray_;
@property(readonly, nonatomic) NSArray *annotationArray; // @synthesize annotationArray=annotationArray_;
@property(readonly, nonatomic) MKMapView *contentMap; // @synthesize contentMap=contentMap_;
@property(nonatomic) __weak id <CTMapWidgetDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)setRefreshUserLocationResultBlock:(CDUnknownBlockType)arg1;
- (void)clearRouteOverlay;
- (void)calculateRouteDistance:(struct CLLocationCoordinate2D)arg1 DestinationPointCoordinate:(struct CLLocationCoordinate2D)arg2 TransportType:(unsigned long long)arg3 result:(CDUnknownBlockType)arg4;
- (void)calculateRouteETA:(struct CLLocationCoordinate2D)arg1 DestinationPointCoordinate:(struct CLLocationCoordinate2D)arg2 TransportType:(unsigned long long)arg3 result:(CDUnknownBlockType)arg4;
- (void)drawWalkingRoute:(struct CLLocationCoordinate2D)arg1 DestinationPointCoordinate:(struct CLLocationCoordinate2D)arg2 edgePadding:(struct UIEdgeInsets)arg3 ifClearExistingDrawnRoutes:(_Bool)arg4;
- (void)drawDrivingRoute:(struct CLLocationCoordinate2D)arg1 DestinationPointCoordinate:(struct CLLocationCoordinate2D)arg2 edgePadding:(struct UIEdgeInsets)arg3 ifClearExistingDrawnRoutes:(_Bool)arg4;
- (id)getMapLegalView;
- (id)getMapLogoView;
- (double)getRadiusOfCurrentVisibleMap;
- (double)getVisibleMapHeight;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 extent:(double)arg2;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 extent:(double)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)setCustomeMapRegion:(CDStruct_b7cb895d)arg1;
- (void)setCustomeMapRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
- (void)setChinaMapRegion;
- (void)setChinaMapRegion:(_Bool)arg1;
- (void)zoomToFitMapAnnotationWithUserLoacation:(_Bool)arg1;
- (void)zoomToFitPOIMapAnnotationForAnnotation:(_Bool)arg1;
- (void)zoomToFitMapAnnotation:(_Bool)arg1;
- (void)removeAllSubViews;
- (void)removeAllMapAnnotations;
- (void)removeMapAnnotations:(id)arg1;
- (void)removeMapAnnotation:(id)arg1;
- (_Bool)isValidAnnotation:(struct CLLocationCoordinate2D)arg1;
- (void)addMapAnnotations:(id)arg1;
- (void)addMapAnnotation:(id)arg1;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)annotationViewSelected:(id)arg1;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didAddOverlayViews:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)afterCancelLoadingWithView:(id)arg1;
- (void)handleLongPressed:(id)arg1;
- (id)getPointsValue:(id)arg1;
- (CDStruct_02837cd9)mapRectForCoordinateRegion:(CDStruct_b7cb895d)arg1;
- (void)stopLoadingInView:(id)arg1 token:(id)arg2;
- (void)startLoadingInView:(id)arg1 tipWithText:(id)arg2 token:(id)arg3;
- (void)hideRefreshUserLocationLoadingView:(id)arg1;
- (void)refreshToShowUserLocationWithLoadingView:(CDUnknownBlockType)arg1;
- (void)refreshUserLocationWithLoadingView:(CDUnknownBlockType)arg1;
- (void)refreshNavigateButtonWithFrom:(id)arg1 toDestination:(id)arg2;
- (id)userLocation;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)callMapApp:(id)arg1;
- (id)naviApps;
- (_Bool)forceLoadGoogleMap;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showAppSelectActionSheet:(id)arg1;
- (void)selectNaviApp;
- (void)navigateAction;
@property(readonly, nonatomic) UIButton *refreshUserLocationButton;
@property(readonly, nonatomic) UIButton *navigationButton;
- (void)mapViewDidFailedToRefreshUserLocation:(id)arg1;
- (void)mapView:(id)arg1 didFinishedToRefereshUserLocation:(id)arg2;
- (void)refreshUserLocationAction;
- (void)initBaseView;
- (void)initBaseData;
- (void)awakeFromNib;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)_cth_zoomOutButton;
- (id)_cth_zoomInButton;
- (id)_cth_locationButton;
- (void)cth_refreshZoomButtonStatusWithZoomLevel:(unsigned long long)arg1;
- (void)cth_showCurrentLocationButton:(_Bool)arg1;
- (void)cth_showZoomButton:(_Bool)arg1;
- (void)_cth_moveToCurrentLocation;
- (void)_cth_refreshExpandButtons;
- (void)_cth_changeMapZoomLevel:(id)arg1;
- (id)_cth_createMaskWithFrame:(struct CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(struct CGSize)arg3;
- (void)btUnableState:(id)arg1;
- (void)btNormalState:(id)arg1;
- (void)setMaskWithView:(id)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(struct CGSize)arg3;
- (void)btMinusClicked;
- (void)btPlusClicked;
- (void)releaseBts;
- (_Bool)changeBtsState;
- (void)addBtsByMinusBtFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isAddPlusMinusBt; // @dynamic isAddPlusMinusBt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

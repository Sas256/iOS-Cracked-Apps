//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQSharkRequestDelegate-Protocol.h"

@class MQQWiFiSecurityRequest, NSString, NSTimer;
@protocol MQQWiFiTestSecurityDelegate;

@interface MQQWiFiTestSecurity : NSObject <MQQSharkRequestDelegate>
{
    NSTimer *_timer;
    id <MQQWiFiTestSecurityDelegate> _delegate;
    MQQWiFiSecurityRequest *_securityRequest;
    long long _securityType;
    NSString *_bssid;
    NSString *_ssid;
}

@property(retain, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(retain, nonatomic) NSString *bssid; // @synthesize bssid=_bssid;
@property(nonatomic) long long securityType; // @synthesize securityType=_securityType;
@property(retain, nonatomic) MQQWiFiSecurityRequest *securityRequest; // @synthesize securityRequest=_securityRequest;
@property(nonatomic) id <MQQWiFiTestSecurityDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)checkWiFiPassword;
- (void)timeUp;
- (void)stopTimer;
- (void)stopRequest;
- (void)cancelSecurityRequest;
- (void)startWiFiSecurityTestWithWifiInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AiLiaoNingAuthen, AirportWIFIAuthen, BaiMiAuthen, BsWiFiAuthen, BusYiLuwifiAuthen, CCWINetProviderMaCaoGo, CitibankAuthentication, FeiFanAuthen, FestivalWalkAuthentication, GongShangBankAuthen, GuangDaBankAuthen, HKAirFreeAuthentication, HaiDianWiFiAuthen, JiAnLuAuthentication, MCDChinaNetAuthen, MTRFreeAuthentication, MaiWaiDiAuthen, NSArray, RippletekAuthentication, SOSOWifiAuthen, SZAirportAuthen, SZCMFreeAuthen, SubwayAuthen, TreeBearWifiAuthen, UniqloFreeWiFiAuthen, WI2Authen, WIWifiAccount, WangXiangYuanAuthen, WiFiFreeAuthen, WoWiFiAuthen, XiBeiAuthen, YoshinoyaAuthen, ZCLAuthentication;

@interface CCWICommercial : NSObject
{
    _Bool _isConnected;
    NSArray *_wifiAccountArray;
    WIWifiAccount *_wifiAccount;
    WoWiFiAuthen *_authenticator;
    WiFiFreeAuthen *_wifiFree;
    SOSOWifiAuthen *_sosoWifiAuthen;
    BaiMiAuthen *_baimiAuthen;
    CitibankAuthentication *_citibankAuthen;
    ZCLAuthentication *_zclAuthen;
    RippletekAuthentication *_rippletekAuthen;
    JiAnLuAuthentication *_jiAnLuAuthen;
    FestivalWalkAuthentication *_festivalWalkAuthen;
    MTRFreeAuthentication *_mtrFreeAuthen;
    HKAirFreeAuthentication *_hkAirFreeAuthen;
    YoshinoyaAuthen *_yoshinoYaAnthen;
    MaiWaiDiAuthen *_maiwaidiAuthen;
    BsWiFiAuthen *_bsWiFiAuthen;
    CCWINetProviderMaCaoGo *_maVaoGoAuthen;
    WI2Authen *_wi2Auth;
    AirportWIFIAuthen *_airportAuthen;
    UniqloFreeWiFiAuthen *_uniqloAuthen;
    BusYiLuwifiAuthen *_yiluWifiAnthen;
    HaiDianWiFiAuthen *_haidianAuthen;
    MCDChinaNetAuthen *_mcdAuthen;
    SZAirportAuthen *_szAirportAuthen;
    WangXiangYuanAuthen *_wxyAuthen;
    TreeBearWifiAuthen *_treeBearAuthen;
    SubwayAuthen *_subwayAuthen;
    GuangDaBankAuthen *_guangdaBankAuthen;
    GongShangBankAuthen *_gongshangBankAuthen;
    XiBeiAuthen *_xibeiAuthen;
    AiLiaoNingAuthen *_aiLiaoNingAuthen;
    SZCMFreeAuthen *_szCMFreeAuthen;
    FeiFanAuthen *_feiFanAuthen;
}

@property(retain, nonatomic) WIWifiAccount *wifiAccount; // @synthesize wifiAccount=_wifiAccount;
@property(retain, nonatomic) NSArray *wifiAccountArray; // @synthesize wifiAccountArray=_wifiAccountArray;
@property(retain, nonatomic) FeiFanAuthen *feiFanAuthen; // @synthesize feiFanAuthen=_feiFanAuthen;
@property(retain, nonatomic) SZCMFreeAuthen *szCMFreeAuthen; // @synthesize szCMFreeAuthen=_szCMFreeAuthen;
@property(retain, nonatomic) AiLiaoNingAuthen *aiLiaoNingAuthen; // @synthesize aiLiaoNingAuthen=_aiLiaoNingAuthen;
@property(retain, nonatomic) XiBeiAuthen *xibeiAuthen; // @synthesize xibeiAuthen=_xibeiAuthen;
@property(retain, nonatomic) GongShangBankAuthen *gongshangBankAuthen; // @synthesize gongshangBankAuthen=_gongshangBankAuthen;
@property(retain, nonatomic) GuangDaBankAuthen *guangdaBankAuthen; // @synthesize guangdaBankAuthen=_guangdaBankAuthen;
@property(retain, nonatomic) SubwayAuthen *subwayAuthen; // @synthesize subwayAuthen=_subwayAuthen;
@property(retain, nonatomic) TreeBearWifiAuthen *treeBearAuthen; // @synthesize treeBearAuthen=_treeBearAuthen;
@property(retain, nonatomic) WangXiangYuanAuthen *wxyAuthen; // @synthesize wxyAuthen=_wxyAuthen;
@property(retain, nonatomic) SZAirportAuthen *szAirportAuthen; // @synthesize szAirportAuthen=_szAirportAuthen;
@property(retain, nonatomic) MCDChinaNetAuthen *mcdAuthen; // @synthesize mcdAuthen=_mcdAuthen;
@property(retain, nonatomic) HaiDianWiFiAuthen *haidianAuthen; // @synthesize haidianAuthen=_haidianAuthen;
@property(retain, nonatomic) BusYiLuwifiAuthen *yiluWifiAnthen; // @synthesize yiluWifiAnthen=_yiluWifiAnthen;
@property(retain, nonatomic) UniqloFreeWiFiAuthen *uniqloAuthen; // @synthesize uniqloAuthen=_uniqloAuthen;
@property(retain, nonatomic) AirportWIFIAuthen *airportAuthen; // @synthesize airportAuthen=_airportAuthen;
@property(retain, nonatomic) WI2Authen *wi2Auth; // @synthesize wi2Auth=_wi2Auth;
@property(retain, nonatomic) CCWINetProviderMaCaoGo *maVaoGoAuthen; // @synthesize maVaoGoAuthen=_maVaoGoAuthen;
@property(retain, nonatomic) BsWiFiAuthen *bsWiFiAuthen; // @synthesize bsWiFiAuthen=_bsWiFiAuthen;
@property(retain, nonatomic) MaiWaiDiAuthen *maiwaidiAuthen; // @synthesize maiwaidiAuthen=_maiwaidiAuthen;
@property(retain, nonatomic) YoshinoyaAuthen *yoshinoYaAnthen; // @synthesize yoshinoYaAnthen=_yoshinoYaAnthen;
@property(retain, nonatomic) HKAirFreeAuthentication *hkAirFreeAuthen; // @synthesize hkAirFreeAuthen=_hkAirFreeAuthen;
@property(retain, nonatomic) MTRFreeAuthentication *mtrFreeAuthen; // @synthesize mtrFreeAuthen=_mtrFreeAuthen;
@property(retain, nonatomic) FestivalWalkAuthentication *festivalWalkAuthen; // @synthesize festivalWalkAuthen=_festivalWalkAuthen;
@property(retain, nonatomic) JiAnLuAuthentication *jiAnLuAuthen; // @synthesize jiAnLuAuthen=_jiAnLuAuthen;
@property(retain, nonatomic) RippletekAuthentication *rippletekAuthen; // @synthesize rippletekAuthen=_rippletekAuthen;
@property(retain, nonatomic) ZCLAuthentication *zclAuthen; // @synthesize zclAuthen=_zclAuthen;
@property(retain, nonatomic) CitibankAuthentication *citibankAuthen; // @synthesize citibankAuthen=_citibankAuthen;
@property(retain, nonatomic) BaiMiAuthen *baimiAuthen; // @synthesize baimiAuthen=_baimiAuthen;
@property(retain, nonatomic) SOSOWifiAuthen *sosoWifiAuthen; // @synthesize sosoWifiAuthen=_sosoWifiAuthen;
@property(retain, nonatomic) WiFiFreeAuthen *wifiFree; // @synthesize wifiFree=_wifiFree;
@property(retain, nonatomic) WoWiFiAuthen *authenticator; // @synthesize authenticator=_authenticator;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void)disconnectNotificaSate:(id)arg1;
- (void)connectNotificaSate:(id)arg1;
- (void)reConnect:(id)arg1 seconds:(int)arg2 apid:(int)arg3;
- (void)disconnectApid:(int)arg1 error:(id)arg2;
- (_Bool)getServerAccount:(id)arg1 apid:(int)arg2 partnerarg:(id)arg3;
- (void)connectWithLocalAccount:(id)arg1 apid:(int)arg2 seconds:(int)arg3;
- (void)checkSMSWithError:(id)arg1 apid:(long long)arg2 ssid:(id)arg3;
- (void)smsConnect:(id)arg1 apid:(int)arg2 partnerarg:(id)arg3 ssid:(id)arg4 phoneNumber:(id)arg5 logic:(int)arg6;
- (id)undistinguishConnect:(id)arg1 partnerarg:(id)arg2 ssid:(id)arg3 phoneNumber:(id)arg4;
- (void)connect:(id)arg1 apid:(int)arg2 partnerarg:(id)arg3 seconds:(int)arg4;
- (id)init;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelRoomSectionAdapter.h"

#import "CTHotelBaseHouseTypeCellDelegate.h"
#import "CTHotelDetailPriceCalenderVCDelegate.h"
#import "CTHotelSubHouseTypeCellDelegate.h"

@class HotelBasicRoomViewModel, NSString;

@interface CTHotelFoldRoomTypeSectionAdapter : CTHotelRoomSectionAdapter <CTHotelDetailPriceCalenderVCDelegate, CTHotelBaseHouseTypeCellDelegate, CTHotelSubHouseTypeCellDelegate>
{
    id <CTHotelSectionAdapterDelegate> _delegate;
    HotelBasicRoomViewModel *_roomModel;
}

@property(retain, nonatomic) HotelBasicRoomViewModel *roomModel; // @synthesize roomModel=_roomModel;
@property(nonatomic) __weak id <CTHotelSectionAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFloatViewExpendGroup:(id)arg1 section:(unsigned long long)arg2;
- (void)priceCalendarDidSelectedDate:(id)arg1 checkOutDate:(id)arg2 roomInfo:(id)arg3 actionType:(long long)arg4;
- (void)dismiss:(id)arg1;
- (void)CTHotelSubHouseTypeCellShowRoom:(id)arg1;
- (void)CTHotelSubHouseTypeCellDayHasRoomPrice:(id)arg1;
- (void)CTHotelSubHouseTypeCellSubmitted:(id)arg1;
- (void)CTHotelBaseHouseTypeCellSelectedForExtendView:(id)arg1 indexPath:(id)arg2 needScroll:(_Bool)arg3 isInn:(_Bool)arg4;
- (void)CTHotelBaseHouseTypeCellSelectedForExtendView:(id)arg1 indexPath:(id)arg2 isInn:(_Bool)arg3;
- (void)CTHotelBaseHouseTypeCellSelectedForPopupView:(id)arg1 section:(unsigned long long)arg2;
- (void)ExtendGroupCell:(id)arg1 withSection:(unsigned long long)arg2 needScroll:(_Bool)arg3 isInn:(_Bool)arg4 isExpand:(_Bool)arg5;
- (void)ExtendGroupCell:(id)arg1 withSection:(unsigned long long)arg2 needScroll:(_Bool)arg3 isInn:(_Bool)arg4;
- (_Bool)isOpenMoreCell:(long long)arg1;
- (double)getCellHeight:(id)arg1;
- (void)didCellClick:(id)arg1 with:(id)arg2;
- (id)getCellView:(id)arg1;
- (unsigned long long)getCellCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

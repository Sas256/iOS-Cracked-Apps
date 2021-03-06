//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBGroupsTableSectionHeaderView, FBGroupsTableViewConfig, NSString, UIColor, UIImage;

@protocol FBGroupsInfoViewConfig <NSObject>
@property(retain, nonatomic) UIColor *tintColor;
@property(retain, nonatomic) UIColor *tableViewBackgroundColor;
@property(retain, nonatomic) UIColor *subtitleTextColor;
@property(retain, nonatomic) UIColor *separatorColor;
@property(retain, nonatomic) UIColor *sectionDividerColor;
@property(retain, nonatomic) UIColor *mediumGrayTextColor;
@property(retain, nonatomic) UIColor *footerSubtitleColor;
@property(retain, nonatomic) UIColor *dividerColor;
@property(retain, nonatomic) UIColor *disabledFieldBackgroundColor;
- (UIImage *)checkmarkImage;
- (FBGroupsTableViewConfig *)tableViewConfig;
- (FBGroupsTableSectionHeaderView *)sectionHeaderWithTitle:(NSString *)arg1 iconImage:(UIImage *)arg2;
@end


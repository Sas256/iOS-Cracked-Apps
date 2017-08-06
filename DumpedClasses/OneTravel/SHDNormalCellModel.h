//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEOperationCellModel.h"

@class NSString, UIImage;

@interface SHDNormalCellModel : ONEOperationCellModel
{
    _Bool _isSelected;
    _Bool _needSwitch;
    UIImage *_icon;
    NSString *_title;
    NSString *_defaultTitle;
    CDUnknownBlockType _switchBlock;
}

@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
@property(nonatomic) _Bool needSwitch; // @synthesize needSwitch=_needSwitch;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (double)heightForCell;

@end

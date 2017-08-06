//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSNumber, NSString, RACSubject, UILabel, UISwitch;

@interface SSendWordAdditionalCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UISwitch *_selectSwitch;
    RACSubject *_switchSubject;
    NSNumber *_switchStatus;
    NSString *_urlString;
}

@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, nonatomic) NSNumber *switchStatus; // @synthesize switchStatus=_switchStatus;
@property(readonly, nonatomic) RACSubject *switchSubject; // @synthesize switchSubject=_switchSubject;
@property(readonly, nonatomic) UISwitch *selectSwitch; // @synthesize selectSwitch=_selectSwitch;
@property(readonly, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateCellContent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

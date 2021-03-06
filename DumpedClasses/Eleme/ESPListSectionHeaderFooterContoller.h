//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListSupplementaryViewSource.h"

@class IGListSectionController, NSString;

@interface ESPListSectionHeaderFooterContoller : NSObject <IGListSupplementaryViewSource>
{
    Class _viewClass;
    IGListSectionController *_sectionController;
    NSString *_elementKind;
    CDUnknownBlockType _configureBlock;
    CDUnknownBlockType _sizeBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType sizeBlock; // @synthesize sizeBlock=_sizeBlock;
@property(readonly, nonatomic) CDUnknownBlockType configureBlock; // @synthesize configureBlock=_configureBlock;
@property(readonly, nonatomic) NSString *elementKind; // @synthesize elementKind=_elementKind;
@property(readonly, nonatomic) __weak IGListSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(readonly, nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
- (void).cxx_destruct;
- (struct CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (id)initWithHeaderClass:(Class)arg1 sectionContoller:(id)arg2 configBlock:(CDUnknownBlockType)arg3 sizeBlock:(CDUnknownBlockType)arg4;
- (id)initWithFooterClass:(Class)arg1 sectionContoller:(id)arg2 configBlock:(CDUnknownBlockType)arg3 sizeBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


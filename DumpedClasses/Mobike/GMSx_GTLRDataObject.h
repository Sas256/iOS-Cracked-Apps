//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_GTLRObject.h"

@class NSData, NSString;

@interface GMSx_GTLRDataObject : GMSx_GTLRObject
{
    NSData *_data;
    NSString *_contentType;
}

@property(copy) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

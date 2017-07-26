//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSData, NSString;

@interface BisVideo : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) int bitrate; // @dynamic bitrate;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSData *contentBytes; // @dynamic contentBytes;
@property(nonatomic) int duration; // @dynamic duration;
@property(retain, nonatomic) NSString *fileid; // @dynamic fileid;
@property(nonatomic) int fps; // @dynamic fps;
@property(readonly) _Bool hasBitrate; // @dynamic hasBitrate;
@property(readonly) _Bool hasContent; // @dynamic hasContent;
@property(readonly) _Bool hasContentBytes; // @dynamic hasContentBytes;
@property(readonly) _Bool hasDuration; // @dynamic hasDuration;
@property(readonly) _Bool hasFileid; // @dynamic hasFileid;
@property(readonly) _Bool hasFps; // @dynamic hasFps;
@property(readonly) _Bool hasHeight; // @dynamic hasHeight;
@property(readonly) _Bool hasSize; // @dynamic hasSize;
@property(readonly) _Bool hasWidth; // @dynamic hasWidth;
@property(nonatomic) int height; // @dynamic height;
@property(nonatomic) int size; // @dynamic size;
@property(nonatomic) int width; // @dynamic width;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface PlayFMProgramBean : NSObject <NSCopying>
{
    _Bool _isLive;
    NSString *_programTime;
    NSString *_programName;
}

@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(copy, nonatomic) NSString *programName; // @synthesize programName=_programName;
@property(copy, nonatomic) NSString *programTime; // @synthesize programTime=_programTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


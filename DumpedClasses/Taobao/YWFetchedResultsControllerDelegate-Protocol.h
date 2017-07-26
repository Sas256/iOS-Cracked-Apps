//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, YWFetchedResultsController;

@protocol YWFetchedResultsControllerDelegate <NSObject>
- (void)controllerDidResetContent:(YWFetchedResultsController *)arg1;
- (void)controllerDidChangeContent:(YWFetchedResultsController *)arg1;
- (void)controller:(YWFetchedResultsController *)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)controllerWillChangeContent:(YWFetchedResultsController *)arg1;

@optional
- (void)controller:(YWFetchedResultsController *)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
@end

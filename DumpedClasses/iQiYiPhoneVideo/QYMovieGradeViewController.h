//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMMovieCommonViewController.h"

#import "QYDataManagerDelegate-Protocol.h"
#import "QYMTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QYMTableView, QYMovieGradeCell, QYMovieGradeListData, QYMovieGradeManager;

@interface QYMovieGradeViewController : QYMMovieCommonViewController <QYDataManagerDelegate, QYMTableViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    QYMovieGradeManager *_gradeManager;
    QYMTableView *_gradeTableView;
    QYMovieGradeListData *_gradeListData;
    NSMutableArray *_iqiyiGradeArray;
    NSMutableArray *_otherGradeArray;
    NSMutableArray *_gradeArray;
    NSMutableArray *_sectionTitleArray;
    QYMovieGradeCell *_presentCell;
    NSString *_movieId;
}

@property(retain, nonatomic) NSString *movieId; // @synthesize movieId=_movieId;
@property(retain, nonatomic) QYMovieGradeCell *presentCell; // @synthesize presentCell=_presentCell;
@property(retain, nonatomic) NSMutableArray *sectionTitleArray; // @synthesize sectionTitleArray=_sectionTitleArray;
@property(retain, nonatomic) NSMutableArray *gradeArray; // @synthesize gradeArray=_gradeArray;
@property(retain, nonatomic) NSMutableArray *otherGradeArray; // @synthesize otherGradeArray=_otherGradeArray;
@property(retain, nonatomic) NSMutableArray *iqiyiGradeArray; // @synthesize iqiyiGradeArray=_iqiyiGradeArray;
@property(retain, nonatomic) QYMovieGradeListData *gradeListData; // @synthesize gradeListData=_gradeListData;
@property(retain, nonatomic) QYMTableView *gradeTableView; // @synthesize gradeTableView=_gradeTableView;
@property(retain, nonatomic) QYMovieGradeManager *gradeManager; // @synthesize gradeManager=_gradeManager;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initSubView;
- (void)convertListDataIntoGradeArray;
- (void)retryRequest;
- (void)dataManagerFailed:(id)arg1;
- (void)dataManagerFinished:(id)arg1;
- (void)requestGradeWithMovieId:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


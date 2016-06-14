/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAJobCoordinator : NSObject <PHAAnalysisStateObserverDelegate, PHADirtyChangeCoalescerDelegate, PHAJobCoalescerDelegate, PHAJobConstraintsObserverDelegate, PHAWorkerJobDelegate, PLPhotoAnalysisJobServiceProtocol> {
    PHAJobConstraintsObserver * _constraintsObserver;
    PHAWorkerJob * _currentBackgroundJob;
    PHAJobConstraints * _currentConstraints;
    PHAWorkerJob * _currentForegroundJob;
    <PHAJobCoordinatorDelegate> * _delegate;
    PHADirtyChangeCoalescer * _dirtyCoalescer;
    PHAWorkerHealthMonitor * _healthMonitor;
    PHAJobCoalescer * _jobCoalescer;
    PHAJobGenerator * _jobGenerator;
    NSObject<OS_dispatch_source> * _maintenanceTimer;
    PHAManager * _manager;
    double  _maxIntervalSinceLastJobReport;
    bool  _newConstraintsPending;
    int  _pendingAsyncTasksCount;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_os_transaction> * _runningJobTransaction;
    bool  _shouldIgnoreConstraintChanges;
    PHAAnalysisStateObserver * _stateObserver;
    NSMutableArray * _waitingForegroundJobs;
    PHAWorkerWarmer * _warmer;
    NSDictionary * _workersByType;
}

@property (nonatomic, readonly) PHAJobConstraintsObserver *constraintsObserver;
@property (nonatomic, retain) PHAWorkerJob *currentBackgroundJob;
@property (nonatomic, copy) PHAJobConstraints *currentConstraints;
@property (nonatomic, retain) PHAWorkerJob *currentForegroundJob;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PHAJobCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PHADirtyChangeCoalescer *dirtyCoalescer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHAWorkerHealthMonitor *healthMonitor;
@property (nonatomic, readonly) PHAJobCoalescer *jobCoalescer;
@property (nonatomic, readonly) PHAJobGenerator *jobGenerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *maintenanceTimer;
@property (nonatomic) PHAManager *manager;
@property (nonatomic) double maxIntervalSinceLastJobReport;
@property (nonatomic) bool newConstraintsPending;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isQuiescent, nonatomic, readonly) bool quiescent;
@property (nonatomic, retain) NSObject<OS_os_transaction> *runningJobTransaction;
@property (nonatomic) bool shouldIgnoreConstraintChanges;
@property (nonatomic, readonly) PHAAnalysisStateObserver *stateObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *waitingForegroundJobs;
@property (nonatomic, readonly) PHAWorkerWarmer *warmer;
@property (nonatomic, readonly) NSDictionary *workersByType;

- (void).cxx_destruct;
- (id)_defaultWorkersByType;
- (void)_dispatchTransactionAsyncWithName:(const char *)arg1 block:(id /* block */)arg2;
- (void)_inq_enforceTimeoutForJob:(id)arg1;
- (void)_inq_enqueueForegroundJob:(id)arg1;
- (void)_inq_handleJobFinished:(id)arg1;
- (void)_inq_handleNoMoreJobsExpected;
- (bool)_inq_isQuiescent;
- (void)_inq_launchJob:(id)arg1;
- (id)_inq_nextForegroundJobCanRunAutomatic:(bool)arg1 canRunUserFG:(bool)arg2 canRunImmediate:(bool)arg3;
- (id)_inq_runningJobs;
- (void)_inq_stopJob:(id)arg1 dueToChangedConstraints:(id)arg2;
- (void)_inq_timeoutJob:(id)arg1;
- (void)_installMaintenanceTimer;
- (void)_scheduleNextJob;
- (id)_workerForJob:(id)arg1;
- (void)analysisStateObserver:(id)arg1 didChangeAnalysisStateTo:(int)arg2 from:(int)arg3 assetIdentifier:(id)arg4 workerFlags:(int)arg5 workerType:(short)arg6;
- (void)coalescer:(id)arg1 didCoalesce:(id)arg2 forWorkerType:(short)arg3;
- (id)constraintsObserver;
- (id)currentBackgroundJob;
- (id)currentConstraints;
- (id)currentForegroundJob;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didFinishJob:(id)arg1;
- (id)dirtyCoalescer;
- (void)enforceTimeouts;
- (void)enqueueForegroundJob:(id)arg1;
- (id)healthMonitor;
- (id)initWithManager:(id)arg1;
- (id)initWithManager:(id)arg1 initialConstraints:(id)arg2 additionalWorkersByType:(id)arg3;
- (bool)isQuiescent;
- (id)jobCoalescer;
- (void)jobCoalescer:(id)arg1 didProduceJob:(id)arg2;
- (void)jobConstraintsObserver:(id)arg1 constraintsDidChange:(id)arg2;
- (id)jobGenerator;
- (id)maintenanceTimer;
- (id)manager;
- (double)maxIntervalSinceLastJobReport;
- (bool)newConstraintsPending;
- (id)photoLibrary;
- (id)queue;
- (id)runningJobTransaction;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)setCurrentBackgroundJob:(id)arg1;
- (void)setCurrentConstraints:(id)arg1;
- (void)setCurrentForegroundJob:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)setManager:(id)arg1;
- (void)setMaxIntervalSinceLastJobReport:(double)arg1;
- (void)setNewConstraintsPending:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setRunningJobTransaction:(id)arg1;
- (void)setShouldIgnoreConstraintChanges:(bool)arg1;
- (bool)shouldIgnoreConstraintChanges;
- (id)stateObserver;
- (id)statusAsDictionary;
- (id)waitingForegroundJobs;
- (id)warmer;
- (id)workersByType;

@end

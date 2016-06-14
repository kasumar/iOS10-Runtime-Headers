/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuery : NSObject <HKQueryClient> {
    id /* block */  _activationHandler;
    NSObject<OS_dispatch_queue> * _activationQueue;
    NSUUID * _activationUUID;
    int  _batchCount;
    NSObject<OS_dispatch_queue> * _clientQueue;
    double  _collectionInterval;
    <HKQueryDelegate> * _delegate;
    NSMutableArray * _deletedObjects;
    _HKFilter * _filter;
    bool  _hasBeenExecuted;
    HKObjectType * _objectType;
    NSPredicate * _predicate;
    bool  _receivedInitialResults;
    NSMutableArray * _sampleObjects;
    int  _samplesDeliveredBeforeSuspend;
    <NSXPCProxyCreating> * _serverProxy;
}

@property (nonatomic, readonly) NSUUID *activationUUID;
@property (setter=_setBatchCount:, nonatomic) int batchCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (getter=_collectionInterval, setter=_setCollectionInterval:, nonatomic) double collectionInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HKQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_filter, nonatomic, retain) _HKFilter *filter;
@property (nonatomic, readonly) bool hasBeenExecuted;
@property (readonly) unsigned long long hash;
@property (readonly) HKObjectType *objectType;
@property (readonly) NSPredicate *predicate;
@property (getter=_hasReceivedInitialResults, nonatomic, readonly) bool receivedInitialResults;
@property (readonly) HKSampleType *sampleType;
@property (nonatomic, retain) <NSXPCProxyCreating> *serverProxy;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_clientInterfaceProtocol;
+ (void)_configureClientInterface:(id)arg1;
+ (id)_predicateForObjectsFromAppleWatches;
+ (Class)_queryServerDataObjectClass;
+ (id)_serverInterfaceProtocol;
+ (id)clientInterface;
+ (id)predicateForActivityCachesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)predicateForActivitySummariesBetweenStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)predicateForActivitySummaryWithDateComponents:(id)arg1;
+ (id)predicateForCategorySamplesWithOperatorType:(unsigned long long)arg1 value:(long long)arg2;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)predicateForObjectsFromDevices:(id)arg1;
+ (id)predicateForObjectsFromSource:(id)arg1;
+ (id)predicateForObjectsFromSourceRevisions:(id)arg1;
+ (id)predicateForObjectsFromSources:(id)arg1;
+ (id)predicateForObjectsFromWorkout:(id)arg1;
+ (id)predicateForObjectsWithDeviceProperty:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3;
+ (id)predicateForObjectsWithNoCorrelation;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)predicateForQuantitySamplesWithOperatorType:(unsigned long long)arg1 quantity:(id)arg2;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 options:(unsigned long long)arg3;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 duration:(double)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalDistance:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned long long)arg1 totalEnergyBurned:(id)arg2;
+ (id)predicateForWorkoutsWithWorkoutActivityType:(unsigned long long)arg1;
+ (id)serverInterface;
+ (bool)shouldApplyPredicateForObjectType:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)_activationQueue_activationHandler;
- (void)_client_receivedInitialResults;
- (double)_collectionInterval;
- (void)_dispatchAsyncToResourceQueue:(id /* block */)arg1;
- (void)_dispatchSyncToResourceQueue:(id /* block */)arg1;
- (void)_dispatchToClientForUUID:(id)arg1 block:(id /* block */)arg2;
- (id)_filter;
- (bool)_hasReceivedInitialResults;
- (id)_initWithDataType:(id)arg1 predicate:(id)arg2;
- (id)_predicateFilterClasses;
- (void)_queue_activateWithServer:(id)arg1 isReactivation:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (void)_queue_deactivate;
- (void)_queue_deliverErrorAndDeactivate:(id)arg1;
- (id /* block */)_queue_errorHandler;
- (void)_queue_requestServerProxyWithUUID:(id)arg1 server:(id)arg2 handler:(id /* block */)arg3;
- (bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (bool)_requiresValidSampleType;
- (int)_samplesDeliveredBeforeSuspend;
- (void)_setActivationHandler:(id /* block */)arg1;
- (void)_setBatchCount:(int)arg1;
- (void)_setCollectionInterval:(double)arg1;
- (void)_setSamplesDeliveredBeforeSuspend:(int)arg1;
- (bool)_shouldStayAliveAfterInitialResults;
- (void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg1;
- (void)activateWithClientQueue:(id)arg1 healthStore:(id)arg2 delegate:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)activationUUID;
- (int)batchCount;
- (id)clientQueue;
- (void)dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2;
- (void)deactivate;
- (id)delegate;
- (void)deliverActivityMoveStatistics:(id)arg1 exerciseStatistics:(id)arg2 standHoursInfo:(id)arg3 workouts:(id)arg4 forQuery:(id)arg5;
- (void)deliverCurrentActivityCache:(id)arg1 moveStatistics:(id)arg2 exerciseStatistics:(id)arg3 standHoursInfo:(id)arg4 queryUUID:(id)arg5;
- (void)deliverError:(id)arg1 forQuery:(id)arg2;
- (void)deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (void)deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)deliverResetValuesByType:(id)arg1 forQuery:(id)arg2;
- (void)deliverResultsResetWithAnchor:(id)arg1 final:(bool)arg2 forQuery:(id)arg3;
- (void)deliverSampleBatch:(id)arg1 deletedBatch:(id)arg2 final:(bool)arg3 anchor:(id)arg4 forQuery:(id)arg5;
- (void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4;
- (void)deliverSources:(id)arg1 forQuery:(id)arg2;
- (void)deliverStatistics:(id)arg1 forQuery:(id)arg2;
- (void)deliverStatisticsBatch:(id)arg1 initialDelivery:(bool)arg2 finalBatch:(bool)arg3 anchor:(id)arg4 forQuery:(id)arg5;
- (void)deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (void)deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (void)deliverUpdatedValuesByType:(id)arg1 forQuery:(id)arg2;
- (void)deliverValuesByType:(id)arg1 forQuery:(id)arg2;
- (bool)hasBeenExecuted;
- (id)init;
- (id)objectType;
- (id)predicate;
- (void)reactivateWithServer:(id)arg1;
- (void)resetStatisticsForQuery:(id)arg1;
- (id)sampleType;
- (id)serverProxy;
- (void)setClientQueue:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setServerProxy:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_queryServerClass;
+ (bool)hd_requiresPrivateEntitlements;

@end

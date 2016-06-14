/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDefinitionAlertManager : NSObject <HDAchievementAssetObserver, HDHealthDaemonReadyObserver> {
    <HDAchievementDefinitionAlertNotifier> * _alertNotifier;
    HDBackgroundTaskScheduler * _backgroundTaskScheduler;
    NSDate * _dateOverride;
    NSArray * _overriddenDefinitions;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _waitingToRun;
}

@property (nonatomic, retain) NSDate *dateOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *overriddenDefinitions;
@property (readonly) Class superclass;

+ (void)_clearBookkeepingKeyValuesWithProfile:(id)arg1;
+ (id)_definitionIdentifiersInAlertedState:(unsigned long long)arg1 amongDefinitions:(id)arg2 withProfile:(id)arg3 error:(id*)arg4;
+ (id)_findDefinitionsToAlertWithProfile:(id)arg1 currentDate:(id)arg2 amongDefinitions:(id)arg3 getExpiredDefinitions:(id*)arg4;
+ (id)_findNextDefinitionToScheduleAmongDefinitions:(id)arg1 withCurrentDate:(id)arg2;

- (void).cxx_destruct;
- (void)_definitionsAlertTaskFired;
- (bool)_queue_markDefinitions:(id)arg1 asAlertedState:(unsigned long long)arg2;
- (void)_queue_markDefinitionsAvailable:(id)arg1;
- (void)_queue_rescheduleNewAchievementAlertsWithDefinitions:(id)arg1;
- (void)_synthesizeAlert;
- (void)achievementDefinitionsDidChangeToDefinitions:(id)arg1;
- (void)clearBookkeepingKeyValues;
- (void)daemonReady:(id)arg1;
- (id)dateOverride;
- (void)dealloc;
- (id)definitionIdentifiersInAlertedState:(unsigned long long)arg1 withError:(id*)arg2;
- (id)initWithProfile:(id)arg1 backgroundTaskScheduler:(id)arg2 alertNotifier:(id)arg3;
- (bool)markDefinitionIdentifiers:(id)arg1 asAlertedState:(unsigned long long)arg2 withProfile:(id)arg3 error:(id*)arg4;
- (bool)markDefinitionIdentifiersAvailable:(id)arg1 withProfile:(id)arg2 error:(id*)arg3;
- (id)overriddenDefinitions;
- (void)setDateOverride:(id)arg1;
- (void)setOverriddenDefinitions:(id)arg1;

@end

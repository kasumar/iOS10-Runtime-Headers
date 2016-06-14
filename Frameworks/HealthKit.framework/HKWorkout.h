/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkout : HKSample <HDCoding> {
    double  _duration;
    HKQuantity * _goal;
    unsigned long long  _goalType;
    bool  _isWatchWorkout;
    HKQuantity * _totalBasalEnergyBurned;
    HKQuantity * _totalDistance;
    HKQuantity * _totalEnergyBurned;
    unsigned long long  _workoutActivityType;
    NSArray * _workoutEvents;
}

@property (nonatomic) long long anchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration;
@property (getter=_goal, setter=_setGoal:, nonatomic, retain) HKQuantity *goal;
@property (getter=_goalType, setter=_setGoalType:, nonatomic) unsigned long long goalType;
@property (readonly) unsigned long long hash;
@property (getter=_isWatchWorkout, setter=_setIsWatchWorkout:, nonatomic) bool isWatchWorkout;
@property (readonly) Class superclass;
@property (getter=_totalBasalEnergyBurned, setter=_setTotalBasalEnergyBurned:, nonatomic, retain) HKQuantity *totalBasalEnergyBurned;
@property (readonly) HKQuantity *totalDistance;
@property (readonly) HKQuantity *totalEnergyBurned;
@property (readonly) unsigned long long workoutActivityType;
@property (readonly, copy) NSArray *workoutEvents;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_activityTypeMappings;
+ (id)_allWorkoutTypeNames;
+ (bool)_isConcreteObjectClass;
+ (id)_stringFromWorkoutActivityType:(unsigned long long)arg1;
+ (unsigned long long)_workoutActivityTypeFromString:(id)arg1;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12 config:(id /* block */)arg13;
+ (bool)supportsSecureCoding;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;

- (void).cxx_destruct;
- (id)_deepCopy;
- (void)_enumerateActiveTimePeriods:(id /* block */)arg1;
- (void)_enumerateTimePeriodsWithBlock:(id /* block */)arg1;
- (id)_goal;
- (double)_goalInCanonicalUnit;
- (unsigned long long)_goalType;
- (bool)_isWatchWorkout;
- (void)_setDuration:(double)arg1;
- (void)_setGoal:(id)arg1;
- (void)_setGoalType:(unsigned long long)arg1;
- (void)_setIsWatchWorkout:(bool)arg1;
- (void)_setTotalBasalEnergyBurned:(id)arg1;
- (void)_setTotalDistance:(id)arg1;
- (void)_setTotalEnergyBurned:(id)arg1;
- (void)_setWorkoutActivityType:(unsigned long long)arg1;
- (void)_setWorkoutEvents:(id)arg1;
- (id)_totalBasalEnergyBurned;
- (double)_totalBasalEnergyBurnedInCanonicalUnit;
- (double)_totalDistanceInCanonicalUnit;
- (double)_totalEnergyBurnedInCanonicalUnit;
- (id)_validateConfiguration;
- (id)_validateWorkoutEvents:(id)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (long long)hk_integerValue;
- (id)initWithCoder:(id)arg1;
- (id)totalDistance;
- (id)totalEnergyBurned;
- (unsigned long long)workoutActivityType;
- (id)workoutEvents;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (long long)anchor;
- (id)codableRepresentationForSync;
- (id)codableWorkoutEvents;
- (bool)hd_insertRelatedDataWithProfile:(id)arg1 database:(id)arg2 entityPersistentID:(id)arg3 error:(id*)arg4;
- (void)setAnchor:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)hkui_localizedActivityTypeName;

@end

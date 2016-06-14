/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAchievementState : NSObject {
    long long  _activitySummaryIndexToday;
    NSCalendar * _calendar;
    long long  _firstCheckedActivitySummaryIndex;
    long long  _lastCheckedActivitySummaryIndex;
    NSDate * _now;
    NSDate * _startOfToday;
    NSDate * _startOfYesterday;
}

@property (nonatomic) long long activitySummaryIndexToday;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic) long long firstCheckedActivitySummaryIndex;
@property (nonatomic) long long lastCheckedActivitySummaryIndex;
@property (nonatomic, readonly) NSDate *now;
@property (nonatomic, readonly) NSDate *startOfToday;
@property (nonatomic, readonly) NSDate *startOfYesterday;

- (void).cxx_destruct;
- (long long)activitySummaryIndexToday;
- (id)calendar;
- (long long)firstCheckedActivitySummaryIndex;
- (id)initWithCalendar:(id)arg1 now:(id)arg2;
- (long long)lastCheckedActivitySummaryIndex;
- (id)now;
- (void)setActivitySummaryIndexToday:(long long)arg1;
- (void)setFirstCheckedActivitySummaryIndex:(long long)arg1;
- (void)setLastCheckedActivitySummaryIndex:(long long)arg1;
- (id)startOfToday;
- (id)startOfYesterday;

@end

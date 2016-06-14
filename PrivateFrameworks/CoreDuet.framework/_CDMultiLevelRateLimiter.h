/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDMultiLevelRateLimiter : NSObject <_CDRateLimiting> {
    NSMutableArray * _balances;
    NSDate * _lastRecorded;
    NSArray * _maxCounts;
    long long  _numberOfRateLimitPolicies;
    NSMutableArray * _periodStart;
    NSArray * _periods;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSDate *lastRecorded;
@property (nonatomic, readonly) long long numOfRateLimitPolicies;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)credit;
- (bool)debited;
- (id)description;
- (id)init;
- (id)initWithPeriodToCountMap:(id)arg1;
- (id)lastRecorded;
- (long long)numOfRateLimitPolicies;
- (void)recordTimeAndRefillIfNeededRaw;

@end

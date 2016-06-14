/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNObservable : NSObject <CNObservable> {
    NSString * _pipelineDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *debugPipelineDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)combineLatest:(id)arg1;
+ (id)concatenate:(id)arg1;
+ (id)emptyObservable;
+ (id)forkJoin:(id)arg1 scheduler:(id)arg2;
+ (id)merge:(id)arg1;
+ (id)merge:(id)arg1 schedulerProvider:(id)arg2;
+ (id)neverObservable;
+ (id)observableForKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3;
+ (id)observableOnDarwinNotificationCenterWithName:(id)arg1;
+ (id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2;
+ (id)observableOnNotificationCenter:(id)arg1 withName:(id)arg2 object:(id)arg3;
+ (id)observableWithAbsoluteTimestamps:(id)arg1 schedulerProvider:(id)arg2;
+ (id)observableWithBlock:(id /* block */)arg1;
+ (id)observableWithError:(id)arg1;
+ (id)observableWithFuture:(id)arg1;
+ (id)observableWithFutures:(id)arg1;
+ (id)observableWithFutures:(id)arg1 schedulerProvider:(id)arg2;
+ (id)observableWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4;
+ (id)observableWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4 delay:(id /* block */)arg5 scheduler:(id)arg6;
+ (id)observableWithInitialState:(id)arg1 condition:(id /* block */)arg2 nextState:(id /* block */)arg3 resultSelector:(id /* block */)arg4 scheduler:(id)arg5;
+ (id)observableWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)observableWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 interval:(double)arg2 scheduler:(id)arg3;
+ (id)observableWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scheduler:(id)arg2;
+ (id)observableWithRelativeTimestamps:(id)arg1 schedulerProvider:(id)arg2;
+ (id)observableWithResult:(id)arg1;
+ (id)observableWithResults:(id)arg1;
+ (id)observableWithResults:(id)arg1 interval:(double)arg2 scheduler:(id)arg3;
+ (id)observableWithResults:(id)arg1 scheduler:(id)arg2;
+ (id)observableWithTimeInterval:(double)arg1 scheduler:(id)arg2;
+ (id)progressiveForkJoin:(id)arg1 scheduler:(id)arg2;
+ (void)sendNextTimestampFromQueue:(id)arg1 toObserver:(id)arg2 untilCanceled:(id)arg3 scheduler:(id)arg4;
+ (id)timerWithDelay:(double)arg1;
+ (id)timerWithDelay:(double)arg1 scheduler:(id)arg2;

- (void).cxx_destruct;
- (id)allObjects:(id*)arg1;
- (id)any:(id /* block */)arg1;
- (id)buffer:(unsigned long long)arg1;
- (id)buffer:(unsigned long long)arg1 interval:(double)arg2;
- (id)buffer:(unsigned long long)arg1 interval:(double)arg2 scheduler:(id)arg3;
- (id)bufferWithInterval:(double)arg1;
- (id)bufferWithInterval:(double)arg1 scheduler:(id)arg2;
- (id)concatMap:(id /* block */)arg1;
- (id)concatMap:(id /* block */)arg1 schedulerProvider:(id)arg2;
- (id)debugDescription;
- (id)debugPipelineDescription;
- (id)delay:(double)arg1 scheduler:(id)arg2;
- (id)delaySubscription:(double)arg1 scheduler:(id)arg2;
- (id)dematerialize;
- (id)distinct;
- (id)distinctUntilChanged;
- (id)doOnCancel:(id /* block */)arg1;
- (id)doOnCompletion:(id /* block */)arg1;
- (id)doOnError:(id /* block */)arg1;
- (id)doOnNext:(id /* block */)arg1;
- (id)doOnSubscribe:(id /* block */)arg1;
- (id)doOnTerminate:(id /* block */)arg1;
- (id)filter:(id /* block */)arg1;
- (id)flatMap:(id /* block */)arg1;
- (id)flatMap:(id /* block */)arg1 schedulerProvider:(id)arg2;
- (id)ignoreElements;
- (id)map:(id /* block */)arg1;
- (id)materialize;
- (id)observeOn:(id)arg1;
- (id)onEmpty:(id)arg1;
- (id)onError:(id)arg1;
- (id)onErrorHandler:(id /* block */)arg1;
- (id)pipelineDescription:(id)arg1;
- (id)pipelineDescriptionWithFormat:(id)arg1;
- (id)pipelineDescriptionWithOperation:(id)arg1 onObservable:(id)arg2;
- (id)publish;
- (id)sample:(double)arg1;
- (id)sample:(double)arg1 scheduler:(id)arg2;
- (id)sampleWithObservable:(id)arg1;
- (id)scan:(id /* block */)arg1;
- (id)scan:(id /* block */)arg1 seed:(id)arg2;
- (id)skip:(unsigned long long)arg1;
- (id)skipLast:(unsigned long long)arg1;
- (id)startWith:(id)arg1;
- (id)startWith:(id)arg1 scheduler:(id)arg2;
- (id)subscribe:(id)arg1;
- (id)subscribeOn:(id)arg1;
- (id)switch;
- (id)switchMap:(id /* block */)arg1;
- (id)take:(unsigned long long)arg1;
- (id)takeLast:(unsigned long long)arg1;
- (id)throttle:(double)arg1 schedulerProvider:(id)arg2;
- (id)throttleFirst:(double)arg1 scheduler:(id)arg2;
- (id)timeInterval;
- (id)timeIntervalWithScheduler:(id)arg1;
- (id)timeoutAfterDelay:(double)arg1 alternateObservable:(id)arg2 schedule:(id)arg3;
- (id)timestampWithScheduler:(id)arg1;
- (id)toArray;
- (id)using:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete

- (id)activityIndicatingObservableWithActivityDidStartHandler:(id /* block */)arg1 activityDidStopHandler:(id /* block */)arg2;
- (id)autocompleteTimeoutAfterDelay:(double)arg1 doOnTimeout:(id /* block */)arg2 scheduler:(id)arg3;
- (id)localObservableWithScheduler:(id)arg1;
- (id)localObservableWithScheduler:(id)arg1 doOnTimeout:(id /* block */)arg2;
- (id)networkObservableWithActivityDidStartHandler:(id /* block */)arg1 activityDidStopHandler:(id /* block */)arg2 timeoutDelay:(double)arg3 subscriptionDelay:(double)arg4 scheduler:(id)arg5;

@end

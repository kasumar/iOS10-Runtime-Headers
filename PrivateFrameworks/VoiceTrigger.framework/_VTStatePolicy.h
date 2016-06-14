/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTStatePolicy : NSObject {
    id /* block */  _callback;
    NSMutableSet * _dependentOnMe;
    NSMutableSet * _dependentUpon;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)addDependent:(id)arg1;
- (bool)dependenciesSatisfied;
- (void)dependencyUpdated:(id)arg1;
- (void)dependsOn:(id)arg1;
- (id)initWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (bool)isEnabled;
- (void)notify;
- (void)reload;

@end

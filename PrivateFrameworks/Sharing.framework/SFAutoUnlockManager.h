/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAutoUnlockManager : NSObject <SFUnlockClientProtocol> {
    <SFAutoUnlockManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _useFakeSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAutoUnlockManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property bool useFakeSession;

+ (bool)autoUnlockSupported;

- (void).cxx_destruct;
- (void)addDeviceWithName:(id)arg1 modelIdentifier:(id)arg2;
- (void)attemptAutoUnlock;
- (void)autoUnlockStateWithCompletionHandler:(id /* block */)arg1;
- (void)beganAttemptWithDevice:(id)arg1;
- (void)beginFakeAutoUnlockSession;
- (void)cancelAutoUnlock;
- (void)completedUnlockWithDevice:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (void)disableAutoUnlockForDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(id /* block */)arg1;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2;
- (void)enableAutoUnlockWithDevice:(id)arg1 passcode:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)enabledDevice:(id)arg1;
- (void)endFakeAutoUnlockSession;
- (void)failedToEnableDevice:(id)arg1 error:(id)arg2;
- (void)failedUnlockWithError:(id)arg1;
- (id)init;
- (void)keyDeviceLocked:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfAttemptError:(id)arg1;
- (void)onDelegateQueue_notifyDelegateOfEnableError:(id)arg1 device:(id)arg2;
- (void)removeAllDevices;
- (void)removeDeviceWithName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setUseFakeSession:(bool)arg1;
- (bool)useFakeSession;

@end

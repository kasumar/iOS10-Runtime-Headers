/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDiagnostics : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)_ensureXPCStarted;
- (void)_getVersionWithCompletion:(id /* block */)arg1;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_logControl:(id)arg1 completion:(id /* block */)arg2;
- (void)_show:(id)arg1 completion:(id /* block */)arg2;
- (void)bluetoothUserInteraction;
- (void)dealloc;
- (void)diagnosticBLEModeWithCompletion:(id /* block */)arg1;
- (void)diagnosticControl:(id)arg1 completion:(id /* block */)arg2;
- (id)dispatchQueue;
- (void)getVersionWithCompletion:(id /* block */)arg1;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)logControl:(id)arg1 completion:(id /* block */)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)show:(id)arg1 completion:(id /* block */)arg2;
- (void)unlockTestClientWithDevice:(id)arg1;
- (void)unlockTestServer;

@end

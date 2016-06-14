/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYInitialSyncStateObserver : NSObject <PSYSyncStateObserverInterface> {
    NSXPCConnection * _connection;
    <PSYInitialSyncStateObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _init;
    NSMutableDictionary * _initialSyncStateCache;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _syncStateCache;
    NSMutableDictionary * _syncStateEntryCache;
}

@property (readonly, copy) NSString *debugDescription;
@property <PSYInitialSyncStateObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectionInvalidated;
- (void)_notifyCanRetryFailedRequests;
- (void)_querySyncState;
- (void)_queue_initializeIfNotInitialized;
- (void)_queue_updateSyncStates:(id)arg1 notifyDelegateOfChanges:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (oneway void)didUpdateSyncForPairingID:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)requestInitialSyncStateForPairingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requestSyncStateForPairingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (id)syncProviderWithErrorHandler:(id /* block */)arg1;

@end

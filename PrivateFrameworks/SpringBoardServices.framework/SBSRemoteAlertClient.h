/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteAlertClient : FBSSystemServiceFacilityClient {
    NSObject<OS_dispatch_queue> * _handleObserverQueue;
    NSMutableDictionary * _portToDeathWatcherMap;
    NSMutableDictionary * _portToHandleMap;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *handleObserverQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_queue_addHandleForToken:(id)arg1;
- (void)_queue_removeHandleForTokenStore:(id)arg1 withErrorCode:(long long)arg2 underlyingError:(id)arg3;
- (void)dealloc;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)handleObserverQueue;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;
- (id)queue;
- (void)queue_activateRemoteAlertForHandle:(id)arg1 withOptions:(id)arg2;
- (void)queue_invalidateRemoteAlertForHandle:(id)arg1;
- (void)queue_lookupHandlesForRemoteAlertWithConfiguration:(id)arg1 creatingIfNone:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)queue_newHandleForRemoteAlertWithConfiguration:(id)arg1;

@end

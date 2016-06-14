/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIDSMessageTransport : HMDRemoteMessageTransport <IDSServiceDelegate> {
    NSMutableDictionary * _destinationAddress;
    NSMutableDictionary * _pendingResponseTimers;
    NSMutableDictionary * _pendingResponses;
    NSMutableDictionary * _pendingSentMessages;
    NSMutableDictionary * _receivedResponses;
    NSMutableDictionary * _requestedCapabilities;
    IDSService * _service;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *destinationAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *pendingResponseTimers;
@property (nonatomic, readonly) NSMutableDictionary *pendingResponses;
@property (nonatomic, readonly) NSMutableDictionary *pendingSentMessages;
@property (nonatomic, readonly) NSMutableDictionary *receivedResponses;
@property (nonatomic, readonly) NSMutableDictionary *requestedCapabilities;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_pendingResponseTimeoutFor:(id)arg1;
- (void)_removePendingResponseTimerForTransaction:(id)arg1;
- (void)_removePendingResponseTransaction:(id)arg1;
- (void)_restartPendingResponseTimerFor:(id)arg1 withReducedFactor:(unsigned long long)arg2;
- (void)_startPendingResponseTimer:(id)arg1 responseTimeout:(double)arg2 identifier:(id)arg3;
- (bool)canSendMessage:(id)arg1;
- (id)destinationAddress;
- (id)initWithAccountRegistry:(id)arg1;
- (id)pendingResponseTimers;
- (id)pendingResponses;
- (id)pendingSentMessages;
- (long long)qualityOfService;
- (id)receivedResponses;
- (id)requestedCapabilities;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sendMessage:(id)arg1 destination:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)start;
- (id)workQueue;

@end

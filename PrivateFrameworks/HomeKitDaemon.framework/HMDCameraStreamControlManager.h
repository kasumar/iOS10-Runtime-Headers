/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraStreamControlManager : NSObject <HMFLogging> {
    HMDAccessory * _accessory;
    <HMDCameraStreamControlManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _logID;
    NSString * _sessionID;
    NSNumber * _slotIdentifier;
    HMDService * _streamManagementService;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraStreamControlManagerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, retain) NSNumber *slotIdentifier;
@property (nonatomic, readonly) HMDService *streamManagementService;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callStreamNegotiated:(id)arg1;
- (void)_callStreamReconfigured;
- (void)_callStreamRemoteConnectionSetup;
- (void)_callStreamStarted;
- (void)_callStreamStopped;
- (void)_cleanUpStreamSession;
- (void)_reportError:(id)arg1;
- (void)_reportErrorCode:(long long)arg1;
- (id)accessory;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithSessionID:(id)arg1 streamSnapshotHandler:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 accessory:(id)arg5 streamManagementService:(id)arg6;
- (id)logID;
- (id)logIdentifier;
- (id)managerProtocol;
- (id)sessionID;
- (void)setSlotIdentifier:(id)arg1;
- (id)slotIdentifier;
- (id)streamManagementService;
- (id)streamSnapshotHandler;
- (id)workQueue;

@end

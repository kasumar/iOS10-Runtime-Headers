/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraIDSSessionHandler : NSObject <HMDCameraRemoteStreamProtocol, HMFLogging, IDSServiceDelegate> {
    IDSSession * _idsSession;
    IDSService * _idsStreamService;
    NSString * _sessionID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSSession *idsSession;
@property (nonatomic, readonly) IDSService *idsStreamService;
@property (nonatomic, readonly) NSString *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_reset;
- (id)idsSession;
- (id)idsStreamService;
- (id)initWithSessionID:(id)arg1;
- (id)logIdentifier;
- (void)reset;
- (id)sessionID;
- (void)setIdsSession:(id)arg1;
- (void)startKeepAlive;
- (id)workQueue;

@end

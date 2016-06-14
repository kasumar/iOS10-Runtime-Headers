/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserNotificationNoPrompt : NSObject <BRCUserNotifier>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)close;
- (void)moveToFront;
- (void)showCompletionFallbackWithUserReplyBlock:(id /* block */)arg1;
- (void)showErrorApplicationNotInstalledForShareMetadata:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showErrorApplicationNotInstalledForShareURL:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showErrorApplicationProfileDisabledForShareURL:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showErrorDeviceOfflineForShareURL:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showErrorItemIsNoLongerSharedForShareURL:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showErrorParticipantLimitReachedForShareURL:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showErrorSetupiCloudForShareURL:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showErrorTurnOniCloudDriveForShareURL:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showErroriCloudNotReachableForShareURL:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showGenericErrorForURL:(id)arg1 userReplyBlock:(id /* block */)arg2;
- (void)showShareConnectingUndeterminedProgressWithUserCancelReplyBlock:(id /* block */)arg1;
- (void)showShareDownloadingUndeterminedProgressWithUserCancelReplyBlock:(id /* block */)arg1;
- (void)showShareOpenDialogForShareMetadata:(id)arg1 session:(id)arg2 userReplyBlock:(id /* block */)arg3;
- (void)showShareOpenDialogForShareURL:(id)arg1 shareMetadata:(id)arg2 userReplyBlock:(id /* block */)arg3;
- (void)updateUndeterminedProgressCancelBlock:(id /* block */)arg1;

@end

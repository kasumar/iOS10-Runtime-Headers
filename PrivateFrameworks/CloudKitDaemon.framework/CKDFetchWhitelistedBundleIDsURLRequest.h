/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchWhitelistedBundleIDsURLRequest : CKDURLRequest {
    id /* block */  _bundleIDsFetchedBlock;
}

@property (nonatomic, copy) id /* block */ bundleIDsFetchedBlock;

- (void).cxx_destruct;
- (id /* block */)bundleIDsFetchedBlock;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (bool)requiresTokenRegistration;
- (void)setBundleIDsFetchedBlock:(id /* block */)arg1;
- (id)sourceApplicationBundleIdentifier;

@end

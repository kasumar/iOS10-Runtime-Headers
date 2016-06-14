/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetExplorerReviewScreenViewController : UIViewController <PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider> {
    PUAssetExplorerReviewScreenActionManager * __actionManager;
    PUBrowsingSession * __browsingSession;
    PUAssetsDataSourceManager * __clientDataSourceManager;
    PUMediaProvider * __clientMediaProvider;
    UIAlertController * __failedReviewAssetRequestAlertController;
    PUActivityProgressController * __requestProgressController;
    <PUReviewAssetProvider> * __reviewAssetProvider;
    NSMutableDictionary * __reviewAssetRequestsByUUID;
    PUAssetExplorerReviewScreenAssetsDataSourceManager * __reviewDataSourceManager;
    PUJoiningMediaProvider * __reviewMediaProvider;
    unsigned long long  __sourceType;
    NSMutableDictionary * __substituteAssetsByUUID;
    <PUAssetExplorerReviewScreenViewControllerDelegate> * _delegate;
    NSSet * _initialDisabledLivePhotoAssetUUIDs;
    NSIndexPath * _initialIndexPath;
    NSSet * _initialSelectedAssetUUIDs;
}

@property (nonatomic, readonly) PUAssetExplorerReviewScreenActionManager *_actionManager;
@property (nonatomic, readonly) PUBrowsingSession *_browsingSession;
@property (nonatomic, readonly) PUAssetsDataSourceManager *_clientDataSourceManager;
@property (nonatomic, readonly) PUMediaProvider *_clientMediaProvider;
@property (setter=_setFailedReviewAssetRequestAlertController:, nonatomic, retain) UIAlertController *_failedReviewAssetRequestAlertController;
@property (setter=_setRequestProgressController:, nonatomic, retain) PUActivityProgressController *_requestProgressController;
@property (nonatomic, readonly) <PUReviewAssetProvider> *_reviewAssetProvider;
@property (nonatomic, readonly) NSMutableDictionary *_reviewAssetRequestsByUUID;
@property (nonatomic, readonly) PUAssetExplorerReviewScreenAssetsDataSourceManager *_reviewDataSourceManager;
@property (nonatomic, readonly) PUJoiningMediaProvider *_reviewMediaProvider;
@property (nonatomic, readonly) unsigned long long _sourceType;
@property (nonatomic, readonly) NSMutableDictionary *_substituteAssetsByUUID;
@property (nonatomic, readonly) PUAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUAssetExplorerReviewScreenViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *initialDisabledLivePhotoAssetUUIDs;
@property (nonatomic, readonly, copy) NSIndexPath *initialIndexPath;
@property (nonatomic, readonly, copy) NSSet *initialSelectedAssetUUIDs;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionManager;
- (id)_browsingSession;
- (void)_cancelReviewAssetRequestForAssetUUID:(id)arg1;
- (void)_cancelReviewAssetRequests;
- (id)_clientDataSourceManager;
- (id)_clientMediaProvider;
- (id)_createBrowsingSessionIfNecessary;
- (id)_createProgressControllerForRemainingRequests:(id)arg1;
- (id)_createReviewAssetRequestForAsset:(id)arg1;
- (void)_deleteAllLinkedFiles;
- (id)_failedReviewAssetRequestAlertController;
- (id)_getSelectedSubstituteAssetsAndRemoveFilesForUnneededAssets;
- (void)_handleFailedReviewAssetRequestAlertControllerDismissal;
- (void)_handleProgressControllerCanceled:(id)arg1;
- (void)_handleReviewAssetRequest:(id)arg1 completedWithSuccess:(bool)arg2 canceled:(bool)arg3 error:(id)arg4 reviewAsset:(id)arg5;
- (void)_performCancelAction;
- (void)_performDoneAction;
- (void)_performRetakeAction;
- (id)_remainingReviewAssetRequests;
- (id)_requestProgressController;
- (void)_requestReviewAssetForAsset:(id)arg1;
- (id)_reviewAssetProvider;
- (id)_reviewAssetRequestForAssetUUID:(id)arg1;
- (id)_reviewAssetRequestsByUUID;
- (id)_reviewDataSourceManager;
- (id)_reviewMediaProvider;
- (void)_setFailedReviewAssetRequestAlertController:(id)arg1;
- (void)_setRequestProgressController:(id)arg1;
- (void)_setSubstituteAsset:(id)arg1;
- (void)_showFailedReviewAssetRequestAlert;
- (unsigned long long)_sourceType;
- (id)_substituteAssetForUUID:(id)arg1;
- (id)_substituteAssetsByUUID;
- (void)_tearDownProgressController;
- (void)_updateForCompletedReviewAssetRequest:(id)arg1;
- (void)_updateWithSubstituteAsset:(id)arg1 shouldSelect:(bool)arg2;
- (bool)assetExplorerReviewScreenActionManager:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenActionManager:(id)arg1 didPressSelectForAsset:(id)arg2;
- (bool)assetExplorerReviewScreenActionManager:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenActionManagerDidPressCancel:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressDone:(id)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressRetake:(id)arg1;
- (id)dataSourceManager;
- (id)delegate;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 reviewAssetProvider:(id)arg3 initialIndexPath:(id)arg4 initialSelectedAssetUUIDs:(id)arg5 initialDisabledLivePhotoAssetUUIDs:(id)arg6 sourceType:(unsigned long long)arg7;
- (id)initialDisabledLivePhotoAssetUUIDs;
- (id)initialIndexPath;
- (id)initialSelectedAssetUUIDs;
- (void)loadView;
- (id)mediaProvider;
- (void)photoEditController:(id)arg1 didFinishEditingSessionForAsset:(id)arg2 completed:(bool)arg3;
- (void)photoMarkupController:(id)arg1 didFinishWithSavedAsset:(id)arg2;
- (id)reviewAssetProviderRequestForDisplayAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)videoEditViewController:(id)arg1 didFinishEditingSessionForAsset:(id)arg2 completed:(bool)arg3;

@end

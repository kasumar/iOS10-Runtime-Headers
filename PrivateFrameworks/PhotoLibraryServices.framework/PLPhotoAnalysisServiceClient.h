/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoAnalysisServiceClient : NSObject {
    NSDictionary * _cachedRequestContextDictionary;
    NSURL * _libraryURL;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)defaultClient;

- (void).cxx_destruct;
- (void)dispatchBlockWithoutBoost:(id /* block */)arg1;
- (id)dumpAnalysisStatusError:(id*)arg1;
- (id)faceClusteringInformation:(unsigned long long)arg1 error:(id*)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(id /* block */)arg1;
- (void)generateMemoriesWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithLibraryURL:(id)arg1;
- (void)invalidate;
- (id)localizedLabelForSceneIdentifier:(unsigned int)arg1 error:(id*)arg2;
- (void)notifyPhotoLibraryOpened;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (bool)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)performFaceProcessingOnSRGBImageData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bitmapInfo:(unsigned int)arg5 error:(id*)arg6;
- (id)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (void)rebuildGraphWithProgress:(id)arg1 reply:(id /* block */)arg2;
- (bool)reclusterFacesWithThreshold:(id)arg1 error:(id*)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id*)arg3;
- (id)requestAllSocialGroupsForFaceCollectionIdentifier:(id)arg1 withError:(id*)arg2;
- (id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetCollectionsRelatedToFaceCollectionIdentifiers:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetsForFaceCollectionIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestContextDictionary;
- (id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5;
- (id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5;
- (id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id*)arg3;
- (id)requestExportGraphForPurpose:(id)arg1 error:(id*)arg2;
- (void)requestGraphRebuildFractionCompletedWithReply:(id /* block */)arg1;
- (id)requestGraphStatistic:(id*)arg1;
- (id)requestGraphStatus:(id*)arg1;
- (bool)requestInvalidatePersistentCaches:(id*)arg1;
- (bool)requestInvalidateTransientCaches:(id*)arg1;
- (bool)requestIsShowingHolidayCalendarEvents:(id*)arg1;
- (id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id*)arg3;
- (id)requestMetadataSnapshotFolderCreation:(id*)arg1;
- (bool)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id*)arg4;
- (id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 error:(id*)arg5;
- (id)requestRelatedDebugInformationBetweenMomentForLocalIdentifier:(id)arg1 andRelatedMomentForLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 error:(id*)arg5;
- (id)requestRelatedMomentsForFaceCollectionIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)requestSetShowHolidayCalendarEvents:(bool)arg1 error:(id*)arg2;
- (void)requestSnapshotServiceForMomentWithLocalIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(id /* block */)arg6;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (id)requestSocialGroupsForFaceCollectionIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestSortedArrayOfFaceCollectionIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id*)arg3;
- (bool)resetFaceClusteringState:(id*)arg1;
- (bool)resetFaceDetectionState:(id*)arg1;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(id /* block */)arg4;
- (bool)scheduleFaceProcessingOnAssetsWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setupXpcConnection;
- (id)suggestedFacesForFacesWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)suggestedFacesForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedFaceLocalIdentifiers:(id)arg2 toBeRejectedFaceLocalIdentifiers:(id)arg3 error:(id*)arg4;
- (id)suggestedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end

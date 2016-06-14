/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResourcePrefetchManager : NSObject {
    PLCloudPhotoLibraryManager * _cplManager;
    long long  _defaultPrefetchMode;
    bool  _enqueuedAutomaticPrefetch;
    NSMutableSet * _inflightResources;
    NSDate * _lastPrefetchDate;
    PLPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)_orderedPrefetchConditionStringsOnAssets;
+ (id)_originalResourceTypes;

- (id)_assetPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
- (bool)_canPrefetch;
- (void)_forceAutomaticPrefetchDueToSettingsChange;
- (void)_handlePrefetchError:(id)arg1 forPLCloudResource:(id)arg2;
- (id)_identifierForResourceDownload:(id)arg1;
- (void)_incrementPrefetchCountForPLCloudResources:(id)arg1;
- (id)_irisConditionString;
- (id)_lastCompletePrefetchDate;
- (id)_masterPredicateForCPLResourceType:(unsigned long long)arg1 additionalAssetConditions:(id)arg2 additionalResourcePredicates:(id)arg3;
- (id)_memoriesToPrefetch;
- (id)_missingLocalOriginalConditionString;
- (id)_missingThumbnailConditionString;
- (id)_predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
- (id)_predicateForMaxFilesize:(long long)arg1;
- (id)_predicateForResourceCreatedAfterDate:(id)arg1;
- (id)_predicatesForNonThumbnails;
- (id)_predicatesForThumbnails;
- (void)_prefetchResources:(id)arg1 shouldAutoPefetchNextBatch:(bool)arg2;
- (void)_reloadDefaultDownload;
- (void)_reloadDownloadOriginalsSetting;
- (id)_resourcePredicateForCPLResourceType:(unsigned long long)arg1 additionalResourcePredicates:(id)arg2;
- (id)_resourcePredicatesToPrefetchForMemory:(id)arg1;
- (void)_resourcesToPrefetchWithPredicates:(id)arg1 budget:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_resourcesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (bool)_shouldPrefetchMemoryMovieCuratedAssets;
- (void)_startPrefetchNextBatch;
- (void)_writeDownloadFinishedMarkerIfNeeded;
- (void)dealloc;
- (long long)diskSpaceBudgetForNonThumbnails;
- (long long)diskSpaceBudgetForThumbnails;
- (id)init;
- (id)initWithCPLManager:(id)arg1;
- (void)prefetchResource:(unsigned long long)arg1 forAssetsWithObjectIDs:(id)arg2;
- (void)prefetchResourcesWithPredicates:(id)arg1;
- (id)prefetchStatusForDebug:(bool)arg1;
- (void)startAutomaticPrefetch;

@end

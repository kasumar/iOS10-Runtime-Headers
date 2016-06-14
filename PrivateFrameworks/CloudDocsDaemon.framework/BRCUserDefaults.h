/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserDefaults : NSObject {
    NSMutableDictionary * _cache;
    NSString * _clientZoneIdentifier;
    BRCUserDefaults * _globalUserDefault;
    NSDictionary * _serverContainerConfigurationDict;
}

@property (nonatomic, readonly) double accessTimeDeltaInHighUrgency;
@property (nonatomic, readonly) double accessTimeDeltaInLowUrgency;
@property (nonatomic, readonly) double accessTimeDeltaInMedUrgency;
@property (nonatomic, readonly) double accessTimeDeltaInVeryHighUrgency;
@property (nonatomic, readonly) double activeDownloadSizeRefreshInterval;
@property (nonatomic, readonly) unsigned long long aliasDeletionBatchSize;
@property (nonatomic, readonly) NSDictionary *appLibraryAliasRemovalThrottleParams;
@property (nonatomic, readonly) NSDictionary *appLibraryResetThrottleParams;
@property (nonatomic, readonly) NSDictionary *appLibraryScanThrottleParams;
@property (nonatomic, readonly) NSDictionary *applyThrottleParams;
@property (nonatomic, readonly) double appsFetchPacerDelay;
@property (nonatomic, readonly) unsigned long long availableQuotaComfortSize;
@property (nonatomic, readonly) NSSet *blacklistPCSPrep;
@property (nonatomic, readonly) NSSet *blacklistedPackageExtensions;
@property (nonatomic, readonly) NSSet *blacklistedThumbnailExtensions;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *cacheDeletePushXPCActivity;
@property (nonatomic, readonly) double cacheDeleteRecomputeInterval;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *configurationUpdateXPCActivity;
@property (nonatomic, readonly) unsigned long long copyShareIDsBatchSize;
@property (nonatomic, readonly) double dbBatchDelay;
@property (nonatomic, readonly) int dbBatchSize;
@property (nonatomic, readonly) bool dbProfiled;
@property (nonatomic, readonly) bool dbTraced;
@property (nonatomic, readonly) double defaultTimeDeltaForEviction;
@property (nonatomic, readonly) bool destroyiWorkShares;
@property (nonatomic, readonly) double diskSpaceCheckInterval;
@property (nonatomic, readonly) unsigned long long diskSpaceRequiredToReturnToGreedyState;
@property (nonatomic, readonly) double documentAccessHighPriorityInterval;
@property (nonatomic, readonly) unsigned long long downloadBatchCount;
@property (nonatomic, readonly) unsigned long long downloadBatchRecordsCount;
@property (nonatomic, readonly) NSDictionary *downloadThrottleParams;
@property (nonatomic, readonly) unsigned long long downloadWillRetryProgressMaxCount;
@property (nonatomic, readonly) bool forceBatchFailureWhenReceivingAssetTokenExpiration;
@property (nonatomic, readonly) double forceForegroundGracePeriod;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *forcedSyncXPCActivity;
@property (nonatomic, readonly) double foregroundGracePeriod;
@property (nonatomic, readonly) double fseventsLatency;
@property (nonatomic, readonly) double fseventsResetBackoff;
@property (nonatomic, readonly) double graveyardAgeDeltaInLowUrgency;
@property (nonatomic, readonly) double graveyardAgeDeltaInMedUrgency;
@property (nonatomic, readonly) double inactiveIntervalForGlobalDownloads;
@property (nonatomic, readonly) double intervalToWaitBeforeShowingAdditionalDescription;
@property (nonatomic, readonly) unsigned int logoutTimeout;
@property (nonatomic, readonly) NSDictionary *lostItemThrottleParams;
@property (nonatomic, readonly) unsigned long long maxNumberOfFilesInAFolder;
@property (nonatomic, readonly) unsigned long long maxRecentDocumentCount;
@property (nonatomic, readonly) unsigned int maxRecordCountInClientZoneModifyRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRecordCountInFetchRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRecordCountInModifyRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRecordCountInQuerySharedRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRelativePathDepth;
@property (nonatomic, readonly) unsigned int maxSyncPathDepth;
@property (nonatomic, readonly) unsigned long long maxTotalFilesCount;
@property (nonatomic, readonly) unsigned long long maxXattrBlobSize;
@property (nonatomic, readonly) unsigned long long maximumAccountSizeToBeAlwaysGreedy;
@property (nonatomic, readonly) double maximumDocumentAgeToBeGreedy;
@property (nonatomic, readonly) NSDictionary *migrationThrottleParams;
@property (nonatomic, readonly) long long minAutomaticallyEvictableFilesize;
@property (nonatomic, readonly) long long minFileSizeForGraveyard;
@property (nonatomic, readonly) long long minFileSizeForThumbnailTransfer;
@property (nonatomic, readonly) long long minimalSizeToShowAdditionalDescription;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToBeFunctional;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToBeGreedy;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToDownload;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToDownloadUserInitiated;
@property (nonatomic, readonly) float modifyRecordsCountAdditiveIncreaseFraction;
@property (nonatomic, readonly) float modifyRecordsCountMultiplicativeDecrease;
@property (nonatomic, readonly) NSSet *nonAutoEvictableExtensions;
@property (nonatomic, readonly) unsigned long long notifBatchSize;
@property (nonatomic, readonly) unsigned long long notifGatherUpTo;
@property (nonatomic, readonly) unsigned long long notifOverflowLimit;
@property (nonatomic, readonly) bool nsurlsessiondEnabled;
@property (nonatomic, readonly) bool onlyTreatCaughtUpAsConsistent;
@property (nonatomic, readonly) NSDictionary *operationFailureThrottleParams;
@property (nonatomic, readonly) double packageExtensionPlistWriteInterval;
@property (nonatomic, readonly) NSSet *packageExtensions;
@property (nonatomic, readonly) unsigned long long pcsChainingBatchSize;
@property (nonatomic, readonly) unsigned long long pcsChainingMaxPathDepth;
@property (nonatomic, readonly) double periodicSyncTimeInterval;
@property (nonatomic, readonly) unsigned int publishURLTimeout;
@property (nonatomic, readonly) double purgePacerInterval;
@property (nonatomic, readonly) double quotaFetchPacerDelay;
@property (nonatomic, readonly) double readerIOsCancelDelay;
@property (nonatomic, readonly) double readerLostItemBackoff;
@property (nonatomic, readonly) unsigned long long readerMarkChildrenLostBatchSize;
@property (nonatomic, readonly) int readerMaxConcurrentIOs;
@property (nonatomic, readonly) double readerPackageProcessingDelay;
@property (nonatomic, readonly) int readerScanBatchSize;
@property (nonatomic, readonly) NSDictionary *readerThrottleParams;
@property (nonatomic, readonly) float relativeDiskSpaceRequiredToReturnToGreedyState;
@property (nonatomic, readonly) NSString *serverConfigurationURL;
@property (nonatomic, readonly) bool sessionZombiesEnabled;
@property (nonatomic, readonly) NSSet *shareableExtensions;
@property (nonatomic, readonly) unsigned long long sharedDBSyncDownBatchRecordsCount;
@property (nonatomic, readonly) unsigned long long sharedDbSyncDownCoalesceNanoseconds;
@property (nonatomic, readonly) double shortcutServicePacerInterval;
@property (nonatomic, readonly) bool shouldAppLibraryBeGreedy;
@property (nonatomic, readonly) bool shouldDisplayUploadNotification;
@property (nonatomic, readonly) bool shouldFetchAllChanges;
@property (nonatomic, readonly) bool shouldPreparePCSMigration;
@property (nonatomic, readonly) bool skipServerSideThrottling;
@property (nonatomic, readonly) unsigned long long spotlightIndexerBatchSize;
@property (nonatomic, readonly) NSDictionary *spotlightIndexerFailureThrottleParams;
@property (nonatomic, readonly) unsigned long long spotlightIndexerMaxHierarchyDepth;
@property (nonatomic, readonly) double spotlightIndexerPacerInterval;
@property (nonatomic, readonly) bool spotlightIndexingEnabled;
@property (nonatomic, readonly) unsigned short stageDirectoryUmask;
@property (nonatomic, readonly) unsigned short stageFileUmask;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *stageGCXPCActivity;
@property (nonatomic, readonly) unsigned short stageInPackageDirectoryUmask;
@property (nonatomic, readonly) unsigned short stageInPackageFileUmask;
@property (nonatomic, readonly) unsigned long long statementCacheMaxCountForClientTruth;
@property (nonatomic, readonly) unsigned long long statementCacheMaxCountForServerTruth;
@property (nonatomic, readonly) NSDictionary *syncClientZoneThrottleParams;
@property (nonatomic, readonly) BRCSyncOperationThrottleParams *syncDownThrottle;
@property (nonatomic, readonly) NSArray *syncThrottles;
@property (nonatomic, readonly) float syncUpDailyBudget;
@property (nonatomic, readonly) float syncUpDataCreateCost;
@property (nonatomic, readonly) float syncUpDataDeleteCost;
@property (nonatomic, readonly) float syncUpDataEditCost;
@property (nonatomic, readonly) float syncUpDocumentCreateCost;
@property (nonatomic, readonly) float syncUpDocumentDeleteCost;
@property (nonatomic, readonly) float syncUpDocumentEditCost;
@property (nonatomic, readonly) float syncUpHourlyBudget;
@property (nonatomic, readonly) float syncUpInitialItemCost;
@property (nonatomic, readonly) float syncUpMinimalBudget;
@property (nonatomic, readonly) float syncUpMinutelyBudget;
@property (nonatomic, readonly) float syncUpStructureCreateCost;
@property (nonatomic, readonly) float syncUpStructureDeleteCost;
@property (nonatomic, readonly) float syncUpStructureEditCost;
@property (nonatomic, readonly) BRCSyncOperationThrottleParams *syncUpThrottle;
@property (nonatomic, readonly) double systemLowDiskLatency;
@property (nonatomic, readonly) double systemPowerLatency;
@property (nonatomic, readonly) double systemReachabilityLatency;
@property (nonatomic, readonly) unsigned int thumbnailTransferQueueWidth;
@property (nonatomic, readonly) int transferQueueMaxConcurrentOperations;
@property (nonatomic, readonly) int transferQueueMinBatchSize;
@property (nonatomic, readonly) int transferQueueMinConcurrentOperations;
@property (nonatomic, readonly) double transferQueueTransferBudget;
@property (nonatomic, readonly) unsigned int treeEnumeratorBatchSize;
@property (nonatomic, readonly) unsigned long long uploadBatchCount;
@property (nonatomic, readonly) unsigned long long uploadBatchRecordsCount;
@property (nonatomic, readonly) long long uploadMaxFileSize;
@property (nonatomic, readonly) long long uploadMaxInPkgFileSize;
@property (nonatomic, readonly) NSDictionary *uploadThrottleParams;
@property (nonatomic, readonly) int writerApplyBatchSize;
@property (nonatomic, readonly) double writerIOsCancelDelay;
@property (nonatomic, readonly) int writerMaxConcurrentIOs;
@property (nonatomic, readonly) unsigned long long zoneHealthReportedRecordNamesCount;
@property (nonatomic, readonly) unsigned long long zoneHealthSyncDownBatchRecordsCount;

+ (id)_userDefaultsManager;
+ (id)defaultsForAppLibraryIdentifier:(id)arg1;
+ (id)defaultsForAppLibraryName:(id)arg1;
+ (id)defaultsForMetadataContainer;
+ (void)loadCachedServerConfigFromDB:(id)arg1;
+ (void)reset;
+ (void)saveServerConfigToDB:(id)arg1;
+ (void)setServerConfigurationURL:(id)arg1 whenLoaded:(id /* block */)arg2;

- (void).cxx_destruct;
- (float)_defaultSyncUpDailyBudget;
- (float)_defaultSyncUpHourlyBudget;
- (float)_defaultSyncUpMinutelyBudget;
- (id)_extensionSetForKey:(id)arg1 startingWithExtensions:(id)arg2;
- (unsigned short)_umaskForKey:(id)arg1;
- (double)accessTimeDeltaInHighUrgency;
- (double)accessTimeDeltaInLowUrgency;
- (double)accessTimeDeltaInMedUrgency;
- (double)accessTimeDeltaInVeryHighUrgency;
- (double)activeDownloadSizeRefreshInterval;
- (unsigned long long)aliasDeletionBatchSize;
- (id)appLibraryAliasRemovalThrottleParams;
- (id)appLibraryResetThrottleParams;
- (id)appLibraryScanThrottleParams;
- (id)applyThrottleParams;
- (double)appsFetchPacerDelay;
- (unsigned long long)availableQuotaComfortSize;
- (id)blacklistPCSPrep;
- (id)blacklistedPackageExtensions;
- (id)blacklistedThumbnailExtensions;
- (bool)boolForKey:(id)arg1 byDefault:(bool)arg2;
- (bool)boolForKey:(id)arg1 inheritFromGlobal:(bool)arg2 byDefault:(bool)arg3;
- (id)cacheDeletePushXPCActivity;
- (double)cacheDeleteRecomputeInterval;
- (id)configurationUpdateXPCActivity;
- (unsigned long long)copyShareIDsBatchSize;
- (double)dbBatchDelay;
- (int)dbBatchSize;
- (bool)dbProfiled;
- (bool)dbTraced;
- (double)defaultTimeDeltaForEviction;
- (bool)destroyiWorkShares;
- (double)diskSpaceCheckInterval;
- (unsigned long long)diskSpaceRequiredToReturnToGreedyState;
- (double)documentAccessHighPriorityInterval;
- (double)doubleForKey:(id)arg1 min:(double)arg2 max:(double)arg3 byDefault:(double)arg4;
- (unsigned long long)downloadBatchCount;
- (unsigned long long)downloadBatchRecordsCount;
- (id)downloadThrottleParams;
- (unsigned long long)downloadWillRetryProgressMaxCount;
- (float)floatForKey:(id)arg1 inheritFromGlobal:(bool)arg2 min:(float)arg3 max:(float)arg4 byDefault:(float)arg5;
- (float)floatForKey:(id)arg1 min:(float)arg2 max:(float)arg3 byDefault:(float)arg4;
- (bool)forceBatchFailureWhenReceivingAssetTokenExpiration;
- (double)forceForegroundGracePeriod;
- (id)forcedSyncXPCActivity;
- (double)foregroundGracePeriod;
- (double)fseventsLatency;
- (double)fseventsResetBackoff;
- (double)graveyardAgeDeltaInLowUrgency;
- (double)graveyardAgeDeltaInMedUrgency;
- (double)inactiveIntervalForGlobalDownloads;
- (id)initAsGlobalWithServerConfiguration:(id)arg1;
- (id)initWithServerConfiguration:(id)arg1 globalUserDefaults:(id)arg2 clientZoneIdentifier:(id)arg3;
- (int)intForKey:(id)arg1 min:(int)arg2 max:(int)arg3 byDefault:(int)arg4;
- (double)intervalToWaitBeforeShowingAdditionalDescription;
- (unsigned int)logoutTimeout;
- (id)lostItemThrottleParams;
- (unsigned long long)maxNumberOfFilesInAFolder;
- (unsigned long long)maxRecentDocumentCount;
- (unsigned int)maxRecordCountInClientZoneModifyRecordsOperation;
- (unsigned int)maxRecordCountInFetchRecordsOperation;
- (unsigned int)maxRecordCountInModifyRecordsOperation;
- (unsigned int)maxRecordCountInQuerySharedRecordsOperation;
- (unsigned int)maxRelativePathDepth;
- (unsigned int)maxSyncPathDepth;
- (unsigned long long)maxTotalFilesCount;
- (unsigned long long)maxXattrBlobSize;
- (unsigned long long)maximumAccountSizeToBeAlwaysGreedy;
- (double)maximumDocumentAgeToBeGreedy;
- (id)migrationThrottleParams;
- (long long)minAutomaticallyEvictableFilesize;
- (long long)minFileSizeForGraveyard;
- (long long)minFileSizeForThumbnailTransfer;
- (long long)minimalSizeToShowAdditionalDescription;
- (unsigned long long)minimumDiskSpaceRequiredToBeFunctional;
- (unsigned long long)minimumDiskSpaceRequiredToBeGreedy;
- (unsigned long long)minimumDiskSpaceRequiredToDownload;
- (unsigned long long)minimumDiskSpaceRequiredToDownloadUserInitiated;
- (float)modifyRecordsCountAdditiveIncreaseFraction;
- (float)modifyRecordsCountMultiplicativeDecrease;
- (id)nonAutoEvictableExtensions;
- (unsigned long long)notifBatchSize;
- (unsigned long long)notifGatherUpTo;
- (unsigned long long)notifOverflowLimit;
- (bool)nsurlsessiondEnabled;
- (id)objectForKey:(id)arg1 inheritFromGlobal:(bool)arg2 validateWithBlock:(id /* block */)arg3;
- (bool)onlyTreatCaughtUpAsConsistent;
- (id)operationFailureThrottleParams;
- (double)packageExtensionPlistWriteInterval;
- (id)packageExtensions;
- (unsigned long long)pcsChainingBatchSize;
- (unsigned long long)pcsChainingMaxPathDepth;
- (double)periodicSyncTimeInterval;
- (unsigned int)publishURLTimeout;
- (double)purgePacerInterval;
- (double)quotaFetchPacerDelay;
- (double)readerIOsCancelDelay;
- (double)readerLostItemBackoff;
- (unsigned long long)readerMarkChildrenLostBatchSize;
- (int)readerMaxConcurrentIOs;
- (double)readerPackageProcessingDelay;
- (int)readerScanBatchSize;
- (id)readerThrottleParams;
- (float)relativeDiskSpaceRequiredToReturnToGreedyState;
- (id)serverConfigurationURL;
- (bool)sessionZombiesEnabled;
- (id)shareableExtensions;
- (unsigned long long)sharedDBSyncDownBatchRecordsCount;
- (unsigned long long)sharedDbSyncDownCoalesceNanoseconds;
- (double)shortcutServicePacerInterval;
- (bool)shouldAppLibraryBeGreedy;
- (bool)shouldDisplayUploadNotification;
- (bool)shouldFetchAllChanges;
- (bool)shouldPreparePCSMigration;
- (bool)skipServerSideThrottling;
- (unsigned long long)spotlightIndexerBatchSize;
- (id)spotlightIndexerFailureThrottleParams;
- (unsigned long long)spotlightIndexerMaxHierarchyDepth;
- (double)spotlightIndexerPacerInterval;
- (bool)spotlightIndexingEnabled;
- (unsigned short)stageDirectoryUmask;
- (unsigned short)stageFileUmask;
- (id)stageGCXPCActivity;
- (unsigned short)stageInPackageDirectoryUmask;
- (unsigned short)stageInPackageFileUmask;
- (unsigned long long)statementCacheMaxCountForClientTruth;
- (unsigned long long)statementCacheMaxCountForServerTruth;
- (id)syncClientZoneThrottleParams;
- (id)syncDownThrottle;
- (id)syncThrottles;
- (float)syncUpDailyBudget;
- (float)syncUpDataCreateCost;
- (float)syncUpDataDeleteCost;
- (float)syncUpDataEditCost;
- (float)syncUpDocumentCreateCost;
- (float)syncUpDocumentDeleteCost;
- (float)syncUpDocumentEditCost;
- (float)syncUpHourlyBudget;
- (float)syncUpInitialItemCost;
- (float)syncUpMinimalBudget;
- (float)syncUpMinutelyBudget;
- (float)syncUpStructureCreateCost;
- (float)syncUpStructureDeleteCost;
- (float)syncUpStructureEditCost;
- (id)syncUpThrottle;
- (double)systemLowDiskLatency;
- (double)systemPowerLatency;
- (double)systemReachabilityLatency;
- (unsigned int)thumbnailTransferQueueWidth;
- (int)transferQueueMaxConcurrentOperations;
- (int)transferQueueMinBatchSize;
- (int)transferQueueMinConcurrentOperations;
- (double)transferQueueTransferBudget;
- (unsigned int)treeEnumeratorBatchSize;
- (unsigned int)unsignedIntForKey:(id)arg1 min:(unsigned int)arg2 max:(unsigned int)arg3 byDefault:(unsigned int)arg4;
- (unsigned long long)unsignedLongLongForKey:(id)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3 byDefault:(unsigned long long)arg4;
- (unsigned long long)uploadBatchCount;
- (unsigned long long)uploadBatchRecordsCount;
- (long long)uploadMaxFileSize;
- (long long)uploadMaxInPkgFileSize;
- (id)uploadThrottleParams;
- (int)writerApplyBatchSize;
- (double)writerIOsCancelDelay;
- (int)writerMaxConcurrentIOs;
- (id)xpcActivityDictionaryForKey:(id)arg1 byDefault:(id)arg2;
- (unsigned long long)zoneHealthReportedRecordNamesCount;
- (unsigned long long)zoneHealthSyncDownBatchRecordsCount;

@end

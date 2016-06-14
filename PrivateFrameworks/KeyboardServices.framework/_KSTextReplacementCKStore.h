/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementCKStore : NSObject <_KSTextReplacementStoreProtocol, _KSTextReplacementSyncProtocol> {
    _KSCloudKitManager * _cloudKitManager;
    _KSTextReplacementCoreDataStore * _coreDataStore;
    NSObject<OS_dispatch_queue> * _dataQueue;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic, retain) _KSCloudKitManager *cloudKitManager;
@property (nonatomic, retain) _KSTextReplacementCoreDataStore *coreDataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isMigrationCompleted;

- (void).cxx_destruct;
- (void)accountDidChange:(id)arg1;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)checkForCoreDataUniqueRecordNameCleanup;
- (id)cloudEntriesFromLocalEntries:(id)arg1;
- (id)cloudKitManager;
- (id)cloudRecordIDsForLocalEntries:(id)arg1;
- (id)coreDataStore;
- (void)dealloc;
- (id)initWithDirectoryPath:(id)arg1;
- (id)localEntriesFromCloudEntries:(id)arg1;
- (void)pullAllData;
- (void)pullRemoteDataWithCompletionHandler:(id /* block */)arg1;
- (void)pushAllLocalData;
- (void)pushMigrationStatusToCloud;
- (void)queryCloudIfFirstPullOrAccountChanged;
- (id)queryDeletedEntries;
- (void)queryMigrationStatusOnCloudWithCallback:(id /* block */)arg1;
- (void)queryTextReplacementsWithCallback:(id /* block */)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(id /* block */)arg2;
- (id)queryUpdatedLocalEntries;
- (void)removeAllEntries;
- (void)requestSyncShouldPull:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (void)setCloudKitManager:(id)arg1;
- (void)setCoreDataStore:(id)arg1;
- (id)textReplacementEntries;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementCoreDataStore : NSObject {
    NSString * _directoryPath;
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSObject<OS_dispatch_queue> * _queueMOC;
    NSObject<OS_dispatch_queue> * _queuePSC;
}

@property (nonatomic, retain) NSString *directoryPath;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)localCloudEntryFromMocObject:(id)arg1;

- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;
- (void)deleteTextReplacementsFromLocalStoreWithNames:(id)arg1;
- (void)deleteTextReplacementsWithPredicate:(id)arg1;
- (id)directoryPath;
- (void)fetchAndMergeTextReplacementEntry:(id)arg1 context:(id)arg2;
- (id)fetchTextReplacementEntry:(id)arg1 context:(id)arg2;
- (id)fetchTextReplacementWithUniqueName:(id)arg1 context:(id)arg2;
- (id)init;
- (id)initWithDirectoryPath:(id)arg1;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (void)markDeletesForTextReplacementEntries:(id)arg1;
- (id)persistentStoreCoordinator;
- (id)queryEntriesWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (id)queryManagedObjectsWithPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (void)recordTextReplacementEntries:(id)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setManagedObjectModel:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (id)textReplacementEntriesWithLimit:(unsigned long long)arg1;

@end

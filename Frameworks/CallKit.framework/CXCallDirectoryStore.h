/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryStore : NSObject {
    CXDatabase * _database;
    NSURL * _temporaryDatabaseURL;
}

@property (nonatomic, retain) CXDatabase *database;
@property (nonatomic, retain) NSURL *temporaryDatabaseURL;

+ (id)databaseTemplateURL;
+ (id)databaseURLUsingTemporaryDirectory:(bool)arg1 error:(id*)arg2;
+ (bool)initializeDatabaseIfNecessaryWithURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_containsBlockingEntryWithSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (id)_firstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (id)_firstIdentificationEntryForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (long long)_idForEmailAddress:(id)arg1 error:(id*)arg2;
- (long long)_idForPhoneNumber:(id)arg1 error:(id*)arg2;
- (id)_identificationEntriesForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (bool)_parseFirstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(id /* block */)arg3 error:(id*)arg4;
- (bool)_parseIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(id /* block */)arg3 error:(id*)arg4;
- (id)_sqlBindingsForPrioritizedExtensionIdentifiers:(id)arg1 withPriorityOffset:(long long)arg2;
- (id)_sqlCaseMappingPlaceholderStringWithKeyColumnName:(id)arg1 defaultValue:(id)arg2 numberOfPairs:(unsigned long long)arg3;
- (id)_sqlStringListPlaceholderStringWithNumberOfEntries:(long long)arg1;
- (id)_sqlValuesListPlaceholderStringWithNumberOfEntries:(long long)arg1 entryString:(id)arg2;
- (id)_storeIdentificationEntryWithExtensionBundleID:(id)arg1 localizedLabel:(id)arg2;
- (bool)addBlockingEntriesWithPhoneNumbers:(id)arg1 extensionID:(long long)arg2 error:(id*)arg3;
- (bool)addBlockingEntryWithPhoneNumber:(id)arg1 extensionID:(long long)arg2 error:(id*)arg3;
- (long long)addExtensionWithIdentifier:(id)arg1 error:(id*)arg2;
- (long long)addExtensionWithIdentifier:(id)arg1 priority:(long long)arg2 error:(id*)arg3;
- (bool)addIdentificationEntriesWithPhoneNumbers:(id)arg1 labels:(id)arg2 extensionID:(long long)arg3 error:(id*)arg4;
- (bool)addIdentificationEntryWithEmailAddress:(id)arg1 labelID:(long long)arg2 extensionID:(long long)arg3 error:(id*)arg4;
- (bool)addIdentificationEntryWithPhoneNumber:(id)arg1 labelID:(long long)arg2 extensionID:(long long)arg3 error:(id*)arg4;
- (long long)addLabel:(id)arg1 error:(id*)arg2;
- (bool)containsBlockingEntryWithEmailAddress:(id)arg1 error:(id*)arg2;
- (bool)containsBlockingEntryWithPhoneNumber:(id)arg1 error:(id*)arg2;
- (bool)containsBlockingEntryWithPhoneNumberInArray:(id)arg1 error:(id*)arg2;
- (bool)containsExtensionWithIdentifier:(id)arg1 priority:(long long*)arg2 error:(id*)arg3;
- (id)database;
- (void)dealloc;
- (id)description;
- (id)firstIdentificationEntriesForEmailAddresses:(id)arg1 error:(id*)arg2;
- (id)firstIdentificationEntriesForPhoneNumbers:(id)arg1 error:(id*)arg2;
- (id)firstIdentificationEntryForEmailAddress:(id)arg1 error:(id*)arg2;
- (id)firstIdentificationEntryForPhoneNumber:(id)arg1 error:(id*)arg2;
- (long long)idForLabel:(id)arg1 error:(id*)arg2;
- (id)identificationEntriesForEmailAddress:(id)arg1 error:(id*)arg2;
- (id)identificationEntriesForPhoneNumber:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initForReadingAndWritingWithError:(id*)arg1;
- (id)initForReadingWithError:(id*)arg1;
- (id)initReadOnly:(bool)arg1 temporary:(bool)arg2 error:(id*)arg3;
- (bool)performTransactionWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (id)prioritizedExtensionIdentifiersWithError:(id*)arg1;
- (bool)removeExtensionWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)setDatabase:(id)arg1;
- (bool)setPrioritizedExtensionIdentifiers:(id)arg1 error:(id*)arg2;
- (void)setTemporaryDatabaseURL:(id)arg1;
- (id)temporaryDatabaseURL;
- (bool)vacuumWithError:(id*)arg1;

@end

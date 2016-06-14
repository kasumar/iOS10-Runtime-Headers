/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSourceEntity : HDHealthEntity

+ (id)_allSourcesByIDWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)_insertDeletedSourceWithUUID:(id)arg1 modificationDate:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)_insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(id)arg4 isCurrentDevice:(id)arg5 productType:(id)arg6 deleted:(bool)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 database:(id)arg10 error:(id*)arg11;
+ (id)_predicateForAppleWatchSource;
+ (id)_predicateForLocalDeviceSource;
+ (id)_predicateForNotDeletedSourceWithPredicate:(id)arg1;
+ (id)_predicateForSourceWithBundleIdentifier:(id)arg1;
+ (id)_predicateForSourceWithUUID:(id)arg1;
+ (id)_sourceWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)_sourceWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)allSourcesByIDWithProfile:(id)arg1 error:(id*)arg2;
+ (id)allWatchSourcesByIDWithProfile:(id)arg1 error:(id*)arg2;
+ (id)columnsDefinition;
+ (id)createNonUniqueIndicesForColumns;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)insertCodableSource:(id)arg1 provenance:(long long)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
+ (id)insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(bool)arg5 productType:(id)arg6 modificationDate:(id)arg7 provenance:(long long)arg8 healthDatabase:(id)arg9 error:(id*)arg10;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id*)arg2;
+ (id)sourceForLocalDeviceWithHealthDatabase:(id)arg1 error:(id*)arg2;
+ (id)sourceWithBundleIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)sourceWithBundleIdentifier:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)sourceWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3;
+ (id)sourceWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;

- (id)codableSourceWithEncoder:(id)arg1 error:(id*)arg2;
- (bool)deleteSourceWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)setBundleIdentifier:(id)arg1 UUID:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;
- (bool)setName:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
- (id)sourceBundleIdentifierInHealthDatabase:(id)arg1 error:(id*)arg2;
- (id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id*)arg2;
- (id)sourceWithProfile:(id)arg1 error:(id*)arg2;

@end

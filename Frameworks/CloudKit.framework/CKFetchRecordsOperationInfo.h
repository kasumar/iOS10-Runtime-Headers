/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    unsigned long long  _URLOptions;
    NSSet * _assetFieldNamesToPublishURLs;
    NSArray * _desiredKeys;
    NSDictionary * _desiredPackageFileIndices;
    bool  _isFetchCurrentUserOperation;
    NSArray * _recordIDs;
    NSDictionary * _recordIDsToETags;
    NSDictionary * _recordIDsToVersionETags;
    unsigned long long  _requestedTTL;
    bool  _shouldFetchAssetContent;
    bool  _shouldFetchAssetContentInMemory;
    NSDictionary * _signaturesOfAssetsByRecordIDAndKey;
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic, retain) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic, retain) NSArray *desiredKeys;
@property (nonatomic, retain) NSDictionary *desiredPackageFileIndices;
@property (nonatomic) bool isFetchCurrentUserOperation;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, retain) NSDictionary *recordIDsToETags;
@property (nonatomic, retain) NSDictionary *recordIDsToVersionETags;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) bool shouldFetchAssetContent;
@property (nonatomic) bool shouldFetchAssetContentInMemory;
@property (nonatomic, retain) NSDictionary *signaturesOfAssetsByRecordIDAndKey;
@property (nonatomic, retain) NSDictionary *webSharingIdentityDataByRecordID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)URLOptions;
- (id)assetFieldNamesToPublishURLs;
- (id)desiredKeys;
- (id)desiredPackageFileIndices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFetchCurrentUserOperation;
- (id)recordIDs;
- (id)recordIDsToETags;
- (id)recordIDsToVersionETags;
- (unsigned long long)requestedTTL;
- (void)setAssetFieldNamesToPublishURLs:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setDesiredPackageFileIndices:(id)arg1;
- (void)setIsFetchCurrentUserOperation:(bool)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordIDsToETags:(id)arg1;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (void)setSignaturesOfAssetsByRecordIDAndKey:(id)arg1;
- (void)setURLOptions:(unsigned long long)arg1;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (bool)shouldFetchAssetContentInMemory;
- (id)signaturesOfAssetsByRecordIDAndKey;
- (id)webSharingIdentityDataByRecordID;

@end

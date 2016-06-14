/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSaveOperationState : NSObject {
    NSMapTable * _newDataStorages;
    NSHashTable * _remoteData;
    int  _sampleID;
    long long  _updateType;
}

@property (nonatomic, readonly) bool hasRemoteData;
@property (nonatomic, readonly) bool preserveDocumentUUID;
@property (nonatomic) int sampleID;
@property (nonatomic, readonly) bool shouldUpdate;
@property (nonatomic, readonly) long long updateType;

- (void).cxx_destruct;
- (void)addNewStorage:(id)arg1 forData:(id)arg2;
- (void)addRemoteData:(id)arg1;
- (void)enumerateDatasAndStoragesUsingBlock:(id /* block */)arg1;
- (bool)hasNewStorageForData:(id)arg1;
- (bool)hasRemoteData;
- (id)init;
- (id)initWithUpdateType:(long long)arg1;
- (bool)preserveDocumentUUID;
- (int)sampleID;
- (void)setSampleID:(int)arg1;
- (bool)shouldUpdate;
- (long long)updateType;

@end

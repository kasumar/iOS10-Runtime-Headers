/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMessageCacheManager : NSObject {
    NSString * _adaptorId;
    int  _currentRetrivedLogMessageRetryCount;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    void * _databaseQueueIdentityKey;
    void * _databaseQueueIdentityValue;
    bool  _encryptionEnabled;
    bool  _fromLogFrameworkAdaptor;
    struct sqlite3 { } * _logMessageCacheDatabase;
    long long  _logMessageCacheEndIterator;
    NSString * _logMessageCacheFilePath;
    long long  _logMessageCacheIterator;
    bool  _logMessageCacheTransactionPending;
    NSObject<OS_dispatch_source> * _logMessageCacheTransactionTimer;
    long long  _maxNumberOfLogMessageAllowedInCache;
    long long  _pendingLogMessageCount;
    NSMutableArray * _retrivedLogMessageCacheIds;
}

@property (readonly) int currentRetrivedLogMessageRetryCount;
@property (nonatomic) bool encryptionEnabled;
@property (nonatomic) NSDate *oldestLogMessageInCache;

- (void)_addRetryCountColumnToTable;
- (void)_beginLogMessageCacheTransaction;
- (void)_cleanupLogMessageCacheDatabase;
- (void)_commitLogMessageCacheTransaction;
- (void)_createTables;
- (void)_deleteAllExpiredLogMessages:(double)arg1;
- (void)_deleteExpiredLogMessageCacheDBFile:(double)arg1;
- (void)_executeSQL:(id)arg1;
- (long long)_getNumberOfLogMessagesInCache;
- (id)_groupIDOfNextPendingLogMessage;
- (bool)_logMessageCacheFileExists;
- (void)_migrateDatabaseIfNeeded;
- (void)_openCreateLogMessageCacheDBFile;
- (void)_openLogMessageCacheDBFile;
- (long long)_queryLogMessageCacheDBUserVersion;
- (id)_retrieveBatchOfLogMessagesLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (long long)_retrieveEndLogMessageCacheIterator;
- (void)_setLogMessageCacheDBJournalMode;
- (void)_startLogMessageCacheTransactionTimer;
- (void)_stopLogMessageCacheTransactionTimer;
- (void)_updateLogMessageCacheDBUserVersion;
- (bool)_usingInMemoryLogMessageCacheFile;
- (void)beginLogMessageCacheTransaction;
- (void)closeLogMessageCache;
- (void)commitLogMessageCacheTransaction;
- (int)currentRetrivedLogMessageRetryCount;
- (void)dealloc;
- (bool)encryptionEnabled;
- (id)initWithLogMessageCacheFilePath:(id)arg1 maxNumberOfLogMessagesAllowedInCache:(long long)arg2 adaptorId:(id)arg3 fromLogFrameworkAdaptor:(bool)arg4;
- (void)insertLogMessageIntoCache:(id)arg1;
- (bool)isLogMessageCacheEmpty;
- (id)oldestLogMessageInCache;
- (void)openLogMessageCache;
- (void)purgeCurrentlyRetrievedLogMessagesFromCache;
- (void)purgeExpiredLogMessagesFromCache:(double)arg1;
- (void)resetLogMessageCacheIterator;
- (id)retrieveFirstBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (id)retrieveNextBatchOfLogMessagesWithLimitCount:(long long)arg1 limitSize:(long long)arg2;
- (void)setEncryptionEnabled:(bool)arg1;
- (void)setOldestLogMessageInCache:(id)arg1;
- (void)updateCurrentlyRetrievedLogMessagesRetryCount;

@end

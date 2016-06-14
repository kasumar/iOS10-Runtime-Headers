/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAAccount : NSObject {
    NSArray * _appIdsForPasswordPrompt;
    ACAccount * _backingAccountInfo;
    NSString * _clientToken;
    NSMapTable * _consumers;
    NSMutableDictionary * _dataclassPropertyURLsByDataclass;
    bool  _hasInitted;
    bool  _isValidating;
    unsigned long long  _lastQueryStartedTime;
    NSMutableArray * _pendingQueries;
    NSObject<OS_dispatch_queue> * _pendingQueryQueue;
    bool  _shouldFailAllTasks;
    bool  _shouldUseOpportunisticSockets;
    NSString * _sourceApplicationBundleIdentifier;
    DAStatusReport * _statusReport;
    struct __CFURLStorageSession { } * _storageSession;
    DATaskManager * _taskManager;
    DATrustHandler * _trustHandler;
    bool  _wasUserInitiated;
}

@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSArray *appIdsForPasswordPrompt;
@property (nonatomic, readonly) ACAccount *backingAccountInfo;
@property (nonatomic, readonly) NSString *changeTrackingID;
@property (nonatomic, readonly, copy) NSString *clientToken;
@property (setter=setDAAccountVersion:, nonatomic) int daAccountVersion;
@property (nonatomic, retain) NSMutableDictionary *dataclassPropertyURLsByDataclass;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (nonatomic, readonly) long long enabledDataclassesBitmask;
@property (nonatomic, retain) NSData *encryptionIdentityPersistentReference;
@property (nonatomic, copy) NSString *host;
@property (nonatomic, readonly, copy) NSData *identityPersist;
@property (nonatomic, readonly) bool isChildAccount;
@property (nonatomic) bool isValidating;
@property (nonatomic, readonly) int keychainAccessibilityType;
@property (nonatomic) unsigned long long lastQueryStartedTime;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) NSMutableArray *pendingQueries;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pendingQueryQueue;
@property (nonatomic, readonly, copy) NSString *persistentUUID;
@property (nonatomic) long long port;
@property (nonatomic, copy) NSString *principalPath;
@property (nonatomic, copy) NSURL *principalURL;
@property (nonatomic, readonly) NSString *scheduleIdentifier;
@property (nonatomic, readonly, copy) NSString *scheme;
@property (nonatomic, readonly) NSSet *serverComplianceClasses;
@property (nonatomic, readonly) NSString *serverRoot;
@property (nonatomic, readonly) bool shouldAutodiscoverAccountProperties;
@property (nonatomic) bool shouldDoInitialAutodiscovery;
@property (nonatomic, readonly) bool shouldFailAllTasks;
@property (nonatomic) bool shouldUseOpportunisticSockets;
@property (nonatomic, retain) NSData *signingIdentityPersistentReference;
@property (nonatomic, copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) DAStatusReport *statusReport;
@property (nonatomic, readonly) DATaskManager *taskManager;
@property (nonatomic, retain) DATrustHandler *trustHandler;
@property (nonatomic) bool useSSL;
@property (nonatomic, copy) NSString *user;
@property (nonatomic, readonly) NSString *userAgentHeader;
@property (nonatomic, copy) NSString *username;
@property (nonatomic) bool wasUserInitiated;

+ (id)_leafAccountTypes;
+ (id)daAccountSubclassWithBackingAccountInfo:(id)arg1;
+ (id)oneshotListOfAccountIDs;
+ (void)reacquireClientRestrictions:(id)arg1;

- (void).cxx_destruct;
- (void)_dequeueQuery;
- (bool)_isIdentityManagedByProfile;
- (void)_reallyCancelAllSearchQueries;
- (void)_reallyCancelPendingSearchQuery:(id)arg1;
- (void)_reallyCancelSearchQuery:(id)arg1;
- (void)_reallyPerformSearchQuery:(id)arg1;
- (bool)_reallySearchQueriesRunning;
- (void)_setPersistentUUID:(id)arg1;
- (void)_webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)accountBoolPropertyForKey:(id)arg1;
- (bool)accountContainsEmailAddress:(id)arg1;
- (id)accountDescription;
- (void)accountDidChangeFromOldAccountInfo:(id)arg1;
- (bool)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1;
- (id)accountID;
- (int)accountIntPropertyForKey:(id)arg1;
- (id)accountPropertyForKey:(id)arg1;
- (id)accountTypeIdentifier;
- (id)addUsernameToURL:(id)arg1;
- (id)additionalHeaderValues;
- (id)appIdsForPasswordPrompt;
- (bool)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (id)backingAccountInfo;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2;
- (void)cancelAllSearchQueries;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (void)cancelDownloadingInstance:(id)arg1 error:(id)arg2;
- (void)cancelSearchQuery:(id)arg1;
- (void)cancelShareResponseInstance:(id)arg1 error:(id)arg2;
- (id)changeTrackingID;
- (void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2;
- (void)cleanupAccountFiles;
- (id)clientToken;
- (void)clientTokenRequestedByServer;
- (id)consumerForTask:(id)arg1;
- (id)contactsFolders;
- (struct __CFURLStorageSession { }*)copyStorageSession;
- (id)customConnectionProperties;
- (int)daAccountVersion;
- (id)dataclassProperties;
- (id)dataclassPropertyURLsByDataclass;
- (void)dealloc;
- (id)defaultContactsFolder;
- (id)defaultContainerIdentifierForDADataclass:(long long)arg1;
- (id)defaultEventsFolder;
- (id)defaultNotesFolder;
- (id)defaultToDosFolder;
- (id)deletedItemsFolder;
- (id)description;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (id)displayName;
- (id)domainOnly;
- (id)draftsFolder;
- (void)dropAssertionsAndRenewCredentialsWithHandler:(id /* block */)arg1;
- (id)emailAddress;
- (id)emailAddresses;
- (long long)enabledDataclassesBitmask;
- (bool)enabledForAnyDADataclasses:(long long)arg1;
- (bool)enabledForDADataclass:(long long)arg1;
- (id)encryptionIdentityPersistentReference;
- (id)eventsFolders;
- (id)exceptionsDict;
- (struct __CFData { }*)exceptionsForDigest:(id)arg1;
- (id)getAppleIDSession;
- (id)getPendingQueryQueue;
- (void)getRootFolderWithConsumer:(id)arg1;
- (bool)handleCertificateError:(id)arg1;
- (bool)handleTrustChallenge:(id)arg1;
- (void)handleValidationError:(id)arg1 completion:(id /* block */)arg2;
- (id)host;
- (id)hostFromDataclassPropertiesForDataclass:(id)arg1;
- (id)identityPersist;
- (id)inboxFolder;
- (void)ingestBackingAccountInfoProperties;
- (id)initWithBackingAccountInfo:(id)arg1;
- (bool)isActiveSyncAccount;
- (bool)isBookmarkDAVAccount;
- (bool)isCalDAVAccount;
- (bool)isCalDAVChildAccount;
- (bool)isCardDAVAccount;
- (bool)isChildAccount;
- (bool)isDisabled;
- (bool)isEnabledForDataclass:(id)arg1;
- (bool)isEqualToAccount:(id)arg1;
- (bool)isGoogleAccount;
- (bool)isHotmailAccount;
- (bool)isLDAPAccount;
- (bool)isSubscribedCalendarAccount;
- (bool)isValidating;
- (int)keychainAccessibilityType;
- (unsigned long long)lastQueryStartedTime;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (bool)monitorFolderWithID:(id)arg1;
- (bool)monitorFoldersWithIDs:(id)arg1;
- (id)notesFolders;
- (id)oauth2Token;
- (id)oauthInfoProvider;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)onBehalfOfBundleIdentifier;
- (id)password;
- (id)passwordWithExpected:(bool)arg1;
- (id)pendingQueries;
- (id)pendingQueryQueue;
- (id)performCalendarDirectorySearchForTerms:(id)arg1 recordTypes:(id)arg2 resultLimit:(unsigned long long)arg3 consumer:(id)arg4;
- (void)performSearchQuery:(id)arg1;
- (id)persistentUUID;
- (long long)port;
- (long long)portFromDataclassPropertiesForDataclass:(id)arg1;
- (id)principalPath;
- (id)principalURL;
- (id)protocolVersion;
- (bool)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (void)reload;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)removeClientCertificateData;
- (void)removeConsumerForTask:(id)arg1;
- (void)removeDBSyncData;
- (id)requestCalendarAvailabilityForStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5;
- (void)resetAccountID;
- (bool)resetCertWarnings;
- (void)resetStatusReport;
- (id)respondToShareRequestForCalendar:(id)arg1 withResponse:(long long)arg2 consumer:(id)arg3;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)retrieveOofSettingsForConsumer:(id)arg1;
- (void)saveAccountProperties;
- (void)saveAccountPropertiesWithCompletionHandler:(id /* block */)arg1;
- (bool)saveModifiedPropertiesOnBackingAccount;
- (id)scheduleIdentifier;
- (id)scheme;
- (bool)searchQueriesRunning;
- (bool)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (id)sentItemsFolder;
- (id)serverComplianceClasses;
- (id)serverRoot;
- (void)setAccountBoolProperty:(bool)arg1 forKey:(id)arg2;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountIntProperty:(int)arg1 forKey:(id)arg2;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (void)setDAAccountVersion:(int)arg1;
- (void)setDataclassPropertyURLsByDataclass:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setEnabled:(bool)arg1 forDADataclass:(long long)arg2;
- (void)setEnabled:(bool)arg1 forDataclass:(id)arg2;
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (void)setExceptions:(struct __CFData { }*)arg1 forDigest:(id)arg2;
- (void)setHost:(id)arg1;
- (void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(bool)arg2;
- (void)setIsValidating:(bool)arg1;
- (void)setLastQueryStartedTime:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setPassword:(id)arg1;
- (void)setPendingQueries:(id)arg1;
- (void)setPendingQueryQueue:(id)arg1;
- (void)setPort:(long long)arg1;
- (void)setPrincipalPath:(id)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)setShouldDoInitialAutodiscovery:(bool)arg1;
- (void)setShouldUseOpportunisticSockets:(bool)arg1;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setStatusReport:(id)arg1;
- (void)setToDosNumberOfPastDaysToSync:(int)arg1;
- (void)setTrustHandler:(id)arg1;
- (void)setUseSSL:(bool)arg1;
- (void)setUser:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setWasUserInitiated:(bool)arg1;
- (bool)shouldAutodiscoverAccountProperties;
- (bool)shouldDoInitialAutodiscovery;
- (bool)shouldFailAllTasks;
- (bool)shouldRemoveDBSyncDataOnAccountChange;
- (bool)shouldUseOpportunisticSockets;
- (void)shutdown;
- (id)signingIdentityPersistentReference;
- (id)sourceApplicationBundleIdentifier;
- (id)spinnerIdentifiers;
- (id)stateString;
- (id)statusReport;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (id)syncStoreIdentifier;
- (void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(bool)arg2;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(id)arg5 isInitialUberSync:(bool)arg6 isResyncAfterConnectionFailed:(bool)arg7 previousTagIsSuspect:(bool)arg8 moreLocalChangesAvailable:(bool)arg9 consumer:(id)arg10;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(bool)arg5 isResyncAfterConnectionFailed:(bool)arg6 moreLocalChangesAvailable:(bool)arg7 consumer:(id)arg8;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(bool)arg7 isResyncAfterConnectionFailed:(bool)arg8 moreLocalChangesAvailable:(bool)arg9 consumer:(id)arg10;
- (void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(bool)arg5 isResyncAfterConnectionFailed:(bool)arg6 moreLocalChangesAvailable:(bool)arg7 consumer:(id)arg8;
- (id)taskManager;
- (void)tearDown;
- (id)toDosFolders;
- (int)toDosNumberOfPastDaysToSync;
- (id)trustHandler;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3;
- (void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2;
- (bool)upgradeAccount;
- (id)urlFromDataclassPropertiesForDataclass:(id)arg1;
- (bool)useSSL;
- (bool)useSSLFromDataclassPropertiesForDataclass:(id)arg1;
- (id)user;
- (id)userAgentHeader;
- (id)username;
- (id)usernameWithoutDomain;
- (bool)wasUserInitiated;
- (void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(id /* block */)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementServer : NSObject <APSConnectionDelegate, NSXPCListenerDelegate, _KSTextReplacementCancellation, _KSTextReplacementServiceProtocol, _KSTextReplacementStoreProtocol> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableDictionary * _clientsMap;
    NSMutableSet * _clientsWithReadAccess;
    NSString * _directoryPath;
    NSXPCListener * _listener;
    APSConnection * _pushConnection;
    bool  _setupAssistanceRunning;
    _KSTextReplacementManager * _textReplacementManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableDictionary *clientsMap;
@property (nonatomic, retain) NSMutableSet *clientsWithReadAccess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *directoryPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (nonatomic) bool setupAssistanceRunning;
@property (readonly) Class superclass;
@property (nonatomic, retain) _KSTextReplacementManager *textReplacementManager;

+ (id)_keyForConnection:(id)arg1;
+ (bool)isBlackListed:(unsigned int)arg1;
+ (id)textReplacementServer;

- (void).cxx_destruct;
- (bool)_cancelPendingUpdateForClient:(id)arg1;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(id /* block */)arg3;
- (id)appleLanguagesPreference;
- (void)buddySetupDidFinish;
- (void)cancelPendingUpdates;
- (void)cancelPendingUpdatesWithReply:(id /* block */)arg1;
- (void)cleanup;
- (bool)clientHasReadAccess;
- (id)clientsMap;
- (id)clientsWithReadAccess;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (id)directoryPath;
- (void)forceCloudKitSync:(bool)arg1;
- (void)importSampleShortcuts;
- (void)importSampleShortcutsIfNecessary;
- (id)init;
- (id)initWithDatabaseDirectoryPath:(id)arg1;
- (bool)isSetupAssistantRunning;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)pushConnection;
- (void)queryTextReplacementEntriesWithReply:(id /* block */)arg1;
- (void)queryTextReplacementsWithCallback:(id /* block */)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(id /* block */)arg2;
- (void)queryTextReplacementsWithPredicate:(id)arg1 reply:(id /* block */)arg2;
- (void)registerForPushNotifications;
- (void)removeAllEntries;
- (void)requestSyncWithCallback:(id /* block */)arg1;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (void)requestSyncWithReply:(id /* block */)arg1;
- (bool)sampleShortcutWasImported;
- (void)setClientsMap:(id)arg1;
- (void)setClientsWithReadAccess:(id)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPushConnection:(id)arg1;
- (void)setSetupAssistanceRunning:(bool)arg1;
- (void)setTextReplacementManager:(id)arg1;
- (bool)setupAssistanceRunning;
- (void)shutdown;
- (void)start;
- (id)textReplacementEntries;
- (id)textReplacementManager;

@end

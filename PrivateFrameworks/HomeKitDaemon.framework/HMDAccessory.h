/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessory : NSObject <HAPAccessoryServerForBridgeDelegate, HAPRelayAccessoryDelegate, HMDBulletinIdentifiers, HMDTimeInformationMonitorDelegate, HMFDumpState, HMFMessageReceiver, HMFTimerDelegate, NSSecureCoding> {
    NSNumber * _accessoryFlags;
    NSSet * _accessoryProfiles;
    unsigned long long  _activationAttempts;
    HMDApplicationData * _appData;
    HMDApplicationRegistry * _appRegistry;
    bool  _blocked;
    HMDAccessory * _bridge;
    NSSet * _cameraProfiles;
    HMAccessoryCategory * _category;
    NSString * _configurationAppIdentifier;
    unsigned long long  _currentRelayAccessoryState;
    HMDCharacteristic * _currentTimeCharacteristic;
    HMDCharacteristic * _dayOfTheWeekCharacteristic;
    NSMutableSet * _discoveredBridgeableAccessories;
    bool  _discoveredBridgeableAccessory;
    NSMutableArray * _discoveredServices;
    NSString * _firmwareVersion;
    HMDBridgeInformation * _hmdBridgeInformation;
    HMDHome * _home;
    NSString * _identifier;
    NSMutableSet * _identifiersForBridgedAccessories;
    NSMutableSet * _identifiersOfBridgesDuringDiscovery;
    NSString * _manufacturer;
    NSString * _model;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    bool  _paired;
    unsigned long long  _pairingAttempts;
    NSObject<OS_dispatch_source> * _pairingRetryTimer;
    NSString * _pairingUsername;
    bool  _primary;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _providedName;
    NSData * _publicKey;
    bool  _reachable;
    bool  _relayEnabled;
    NSString * _relayIdentifier;
    bool  _remoteAccessEnabled;
    bool  _remotelyReachable;
    HMDRoom * _room;
    bool  _supportsBridgeConfiguration;
    bool  _supportsRelay;
    HMFTimer * _systemTimeInformationTimer;
    bool  _systemTimeNeedsUpdate;
    bool  _timeInformationServiceExists;
    HMFTimer * _timeInformationTimer;
    HMDCharacteristic * _timeUpdateCharacteristic;
    NSMutableArray * _transportInformationInstances;
    bool  _unblockPending;
    NSString * _uniqueIdentifier;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) NSNumber *accessoryFlags;
@property (nonatomic, retain) NSSet *accessoryProfiles;
@property (nonatomic) unsigned long long activationAttempts;
@property (nonatomic, retain) HMDApplicationData *appData;
@property (nonatomic, retain) HMDApplicationRegistry *appRegistry;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (nonatomic) HMDAccessory *bridge;
@property (nonatomic, retain) NSSet *cameraProfiles;
@property (nonatomic, retain) HMAccessoryCategory *category;
@property (nonatomic, retain) NSString *configurationAppIdentifier;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (nonatomic, readonly) unsigned long long currentRelayAccessoryState;
@property (nonatomic, readonly) HMDCharacteristic *currentTimeCharacteristic;
@property (nonatomic, readonly) HMDCharacteristic *dayOfTheWeekCharacteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *discoveredBridgeableAccessories;
@property (getter=isDiscoveredBridgeableAccessory, nonatomic) bool discoveredBridgeableAccessory;
@property (nonatomic, retain) NSMutableArray *discoveredServices;
@property (nonatomic, readonly, copy) NSString *firmwareVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDBridgeInformation *hmdBridgeInformation;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableSet *identifiersForBridgedAccessories;
@property (nonatomic, retain) NSMutableSet *identifiersOfBridgesDuringDiscovery;
@property (nonatomic, readonly, copy) NSString *manufacturer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (getter=getName, nonatomic, copy) NSString *name;
@property (getter=isPaired, nonatomic) bool paired;
@property (nonatomic) unsigned long long pairingAttempts;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *pairingRetryTimer;
@property (nonatomic, retain) NSString *pairingUsername;
@property (getter=isPrimary, nonatomic) bool primary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSString *providedName;
@property (nonatomic, retain) NSData *publicKey;
@property (getter=isReachable, nonatomic) bool reachable;
@property (getter=isRelayEnabled, nonatomic) bool relayEnabled;
@property (nonatomic, retain) NSString *relayIdentifier;
@property (getter=isRemoteAccessEnabled, nonatomic) bool remoteAccessEnabled;
@property (getter=isRemotelyReachable, nonatomic) bool remotelyReachable;
@property (nonatomic, retain) HMDRoom *room;
@property (nonatomic, readonly) NSString *serializedIdentifier;
@property (nonatomic, readonly, copy) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsBridgeConfiguration;
@property (nonatomic) bool supportsRelay;
@property (nonatomic, retain) HMFTimer *systemTimeInformationTimer;
@property (nonatomic) bool systemTimeNeedsUpdate;
@property (nonatomic, readonly) bool timeInformationServiceExists;
@property (nonatomic, retain) HMFTimer *timeInformationTimer;
@property (nonatomic, readonly) HMDCharacteristic *timeUpdateCharacteristic;
@property (nonatomic, readonly) NSArray *tunneledHAPAccessories;
@property (nonatomic) bool unblockPending;
@property (nonatomic, retain) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (unsigned long long)getAWDTransportTypeWithLinkType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)_accessoryCompletionBlockForAssociatingAccessory:(id)arg1;
- (id /* block */)_accessoryCompletionBlockForDisAssociatingAccessory:(id)arg1;
- (id /* block */)_accessoryCompletionBlockForDiscoveredAccessory:(id)arg1;
- (void)_addBridgeToDiscoveredAccessory:(id)arg1;
- (void)_addDiscoveredBridgeableAccessory:(id)arg1;
- (void)_addHAPAccessory:(id)arg1;
- (void)_addNewCompletionBlockforAssociatingAccessory:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_addNewCompletionBlockforDisAssociatingAccessory:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_addNewCompletionBlockforDiscoveredAccessory:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_allDiscoveredAccessories;
- (id)_associatingAccessory;
- (void)_createCameraProfiles:(id)arg1;
- (unsigned long long)_currentRelayAccessoryState;
- (id)_currentTimeCharacteristic;
- (id)_dayOfTheWeekCharacteristic;
- (void)_deRegisterForTimeMonitor;
- (id)_disAssociatingAccessory;
- (void)_disableNotificationsForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_enableNotification:(bool)arg1 forCharacteristics:(id)arg2 hapAccessory:(id)arg3 completion:(id /* block */)arg4;
- (void)_enableNotification:(bool)arg1 forCharacteristics:(id)arg2 message:(id)arg3;
- (void)_enableNotification:(bool)arg1 matchingHAPAccessory:(id)arg2 unconditionallyDeregister:(bool)arg3 ignoreDeviceUnlockRequirement:(bool)arg4 clientIdentifier:(id)arg5 forCharacteristics:(id)arg6;
- (bool)_enableNotificationOnResident:(bool)arg1 characteristic:(id)arg2 clientIdentifier:(id)arg3 ignoreDeviceUnlockRequirement:(bool)arg4;
- (long long)_enumerateReachableTransports;
- (void)_handleAccessoryConfigureWrite:(id)arg1;
- (void)_handleCharacteristicEnableNotification:(id)arg1;
- (void)_handleCharacteristicError:(id)arg1 characteristic:(id)arg2 message:(id)arg3 read:(bool)arg4;
- (void)_handleCharacteristicRead:(id)arg1;
- (void)_handleCharacteristicWrite:(id)arg1;
- (void)_handleCharacteristicsChangedNotification:(id)arg1;
- (void)_handleDiscoverBridgedAccessories:(id)arg1 startDiscovery:(bool)arg2;
- (void)_handleIdentify:(id)arg1;
- (void)_handleMultipleCharacteristicsUpdated:(id)arg1 filterUnmodifiedCharacteristics:(bool)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleRename:(id)arg1;
- (void)_handleRenameService:(id)arg1;
- (void)_handleSetAppData:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateAuthorizationData:(id)arg1;
- (void)_handleUpdateRoom:(id)arg1;
- (bool)_isDiscoveredBridgeableAccessory;
- (bool)_isPaired;
- (void)_logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2;
- (id)_messageIdentifier;
- (void)_notifyCharacteristicNotificationChangedForCharacteristic:(id)arg1 enableNotification:(bool)arg2 message:(id)arg3;
- (void)_notifyCharacteristicNotificationChanges:(id)arg1 enableNotification:(bool)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)_notifyConnectivityChangedWithReachabilityState:(bool)arg1 remoteAccessChanged:(bool)arg2;
- (void)_notifyNotificationChangesForCharacteristics:(id)arg1 errors:(id)arg2 enableNotification:(bool)arg3 message:(id)arg4;
- (void)_parseResponseFromRemotePeer:(id)arg1 message:(id)arg2 forCharacteristic:(id)arg3;
- (void)_performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(id /* block */)arg3 errorBlock:(id /* block */)arg4;
- (id)_populateServices:(id*)arg1 hapAccessory:(id)arg2 reAddServices:(bool)arg3;
- (id)_prepareMessagePayloadForCharacteristicRemoteWrite:(id)arg1;
- (void)_readAndWriteTimeInformationCharacteristic:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_readCharacteristicValues:(id)arg1 localOperationRequired:(bool)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4 errorBlock:(id /* block */)arg5;
- (void)_readValueForCharacteristic:(id)arg1 hapAccessory:(id)arg2 requestMessage:(id)arg3;
- (void)_readandWriteToCurrentTime:(id)arg1 errorBlock:(id /* block */)arg2;
- (void)_reenableNotificationsOnWatch;
- (void)_registerForMessages:(bool)arg1;
- (void)_registerForTimeMonitor;
- (id)_relayIdentifier;
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;
- (void)_relayReadFromCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3;
- (void)_relayWriteToCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3;
- (void)_remoteAccessEnabled:(bool)arg1;
- (void)_removeAllDiscoveredBridgeableAccessories;
- (void)_removeBridgeFromDiscoveredAccessory:(id)arg1;
- (void)_removeBridgesFromDiscoveredAccessory;
- (void)_removeDiscoveredBridgeableAccessory:(id)arg1;
- (void)_removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;
- (void)_removeNewAccessoryCompletionBlockForDisAssociatingAccessory:(id)arg1;
- (void)_removeNewAccessoryCompletionBlockforAssociatingAccessory:(id)arg1;
- (void)_removeNewAccessoryCompletionBlockforDiscoveredAccessory:(id)arg1;
- (void)_sendBlockedNotification:(bool)arg1 withError:(id)arg2 withIdentifier:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_setCurrentRelayAccessoryState:(unsigned long long)arg1;
- (void)_setCurrentTimeCharacteristic:(id)arg1;
- (void)_setDayOfTheWeekCharacteristic:(id)arg1;
- (void)_setFirmwareVersion:(id)arg1;
- (void)_setManufacturer:(id)arg1;
- (void)_setModel:(id)arg1;
- (void)_setPaired:(bool)arg1;
- (void)_setRelayEnabled:(bool)arg1;
- (void)_setRelayIdentifier:(id)arg1;
- (void)_setSupportsBridgeConfiguration:(bool)arg1;
- (void)_setSupportsRelay:(bool)arg1;
- (void)_setSystemTimeNeedsUpdate:(bool)arg1;
- (void)_setTimeInformationServiceExists:(bool)arg1;
- (void)_setTimeUpdateCharacteristic:(id)arg1;
- (bool)_shouldTrackAccessoryWithPriority:(bool*)arg1;
- (void)_startAssociatingAccessoryTimer;
- (void)_startDisassociatingAccessoryTimer;
- (void)_startDiscoveryAccessoryTimer:(id /* block */)arg1;
- (void)_startSystemTimeWriteTimeInformationTimer;
- (void)_startWriteTimeInformationTimer;
- (void)_stopAssociatingAccessoryTimer;
- (void)_stopDisassociatingAccessoryTimer;
- (void)_stopDiscoveryAccessoryTimer;
- (void)_stopSystemTimeWriteTimeInformationTimer;
- (void)_stopWriteTimeInformationTimer;
- (bool)_supportsBridgeConfiguration;
- (bool)_supportsRelay;
- (bool)_timeInformationServiceExists;
- (id)_timeUpdateCharacteristic;
- (void)_updateAccessoryTracking;
- (void)_updateCategory:(id)arg1 notifyClients:(bool)arg2;
- (void)_updateName:(id)arg1;
- (void)_updateReachability;
- (void)_updateRelayEnabled:(bool)arg1 notifyRelayManager:(bool)arg2;
- (void)_writeCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_writeCharacteristicValues:(id)arg1 localOperationRequired:(bool)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4 errorBlock:(id /* block */)arg5;
- (void)_writeConfigureBridgeValue:(id)arg1 forCharacteristic:(id)arg2 accessory:(id)arg3 toAdd:(bool)arg4 hapAccessory:(id)arg5 authorizationData:(id)arg6 identifier:(id)arg7 queue:(id)arg8 completionHandler:(id /* block */)arg9;
- (void)_writeDiscoverAccessoriesValue:(id)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 authorizationData:(id)arg4 identifier:(id)arg5 queue:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)_writeTimeInformationCharacteristicsForAccessory;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 authorizationData:(id)arg4 message:(id)arg5;
- (void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2;
- (void)accessory:(id)arg1 didPairRelayWithError:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2;
- (void)accessory:(id)arg1 didUpdateCategory:(id)arg2;
- (void)accessory:(id)arg1 didUpdateRelayEnabled:(bool)arg2;
- (void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2;
- (id /* block */)accessoryCompletionBlockForAssociatingAccessory:(id)arg1;
- (id /* block */)accessoryCompletionBlockForDisAssociatingAccessory:(id)arg1;
- (id /* block */)accessoryCompletionBlockForDiscoveredAccessory:(id)arg1;
- (void)accessoryDidBecomeReachable:(id)arg1;
- (void)accessoryDidBecomeUnreachable:(id)arg1;
- (id)accessoryFlags;
- (id)accessoryProfiles;
- (void)accessoryServer:(id)arg1 didUpdateValuesForBridgeCharacteristic:(id)arg2;
- (unsigned long long)activationAttempts;
- (void)addBridgeToDiscoveredAccessory:(id)arg1;
- (void)addBridgedAccessory:(id)arg1;
- (void)addDiscoveredAccessoryToBridge:(id)arg1;
- (void)addDiscoveredBridgeableAccessory:(id)arg1;
- (void)addNewCompletionBlockforAssociatingAccessory:(id)arg1 withBlock:(id /* block */)arg2;
- (void)addNewCompletionBlockforDisAssociatingAccessory:(id)arg1 withBlock:(id /* block */)arg2;
- (void)addNewCompletionBlockforDiscoveredAccessory:(id)arg1 withBlock:(id /* block */)arg2;
- (void)addRelayUser:(id)arg1 accessToken:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)addTransportInformationInstance:(id)arg1;
- (void)addTransportInformationInstances:(id)arg1;
- (id)allDiscoveredAccessories;
- (id)appData;
- (id)appRegistry;
- (id)assistantObject;
- (id)assistantUniqueIdentifier;
- (void)blockWithError:(id)arg1;
- (id)bridge;
- (id)cameraProfiles;
- (id)category;
- (id)characteristicsPassingTest:(id /* block */)arg1;
- (id)configurationAppIdentifier;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2;
- (void)configureWithAccessory:(id)arg1 reAddServices:(bool)arg2;
- (void)configureWithAccessory:(id)arg1 reAddServices:(bool)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)configureWithMsgDispatcher:(id)arg1;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (id)currentAssociatingAccessory;
- (id)currentDisassociatingAccessory;
- (unsigned long long)currentRelayAccessoryState;
- (id)currentTimeCharacteristic;
- (id)dayOfTheWeekCharacteristic;
- (void)deRegisterForTimeMonitor;
- (void)dealloc;
- (id)description;
- (void)didEncounterError:(id)arg1;
- (void)disableNotificationsForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)discoveredBridgeableAccessories;
- (id)discoveredServices;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)enableNotification:(bool)arg1 forCharacteristics:(id)arg2 message:(id)arg3;
- (void)enableNotification:(bool)arg1 unconditionallyDeregister:(bool)arg2 ignoreDeviceUnlockRequirement:(bool)arg3 clientIdentifier:(id)arg4 forCharacteristics:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateCharacteristicsUsingBlock:(id /* block */)arg1;
- (id)findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)findCharacteristicType:(id)arg1 forServiceType:(id)arg2;
- (id)findService:(id)arg1;
- (id)firmwareVersion;
- (id)getConfiguredName;
- (id)getName;
- (id)getPrimaryHAPAccessories;
- (void)handleMultipleCharacteristicsUpdated:(id)arg1 filterUnmodifiedCharacteristics:(bool)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleReachabilityChange:(bool)arg1;
- (void)handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(bool)arg2 enableTime:(id)arg3;
- (void)handleStartDiscoveringBridgedAcessories:(id)arg1;
- (void)handleStopDiscoveringBridgedAcessories:(id)arg1;
- (id)hapCharacteristicWriteRequests:(id)arg1 hapAccessory:(id)arg2 hmdResponses:(id*)arg3 mapping:(id*)arg4;
- (bool)hasBTLELink;
- (unsigned long long)hash;
- (id)hmdBridgeInformation;
- (id)hmdCharacteristicFromHapCharacteristic:(id)arg1;
- (id)hmdCharacteristicResponses:(id)arg1 mapping:(id)arg2 overallError:(id)arg3 requests:(id)arg4;
- (id)home;
- (id)identifier;
- (id)identifiersForBridgedAccessories;
- (id)identifiersOfBridgesDuringDiscovery;
- (id)initWithAccessory:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isBlocked;
- (bool)isDiscoveredBridgeableAccessory;
- (bool)isEqual:(id)arg1;
- (bool)isNotificationEnabled;
- (bool)isNotificationEnabledForClientIdentifier:(id)arg1;
- (bool)isPaired;
- (bool)isPrimary;
- (bool)isReachable;
- (bool)isRelayEnabled;
- (bool)isRemoteAccessEnabled;
- (bool)isRemoteReachable;
- (bool)isRemotelyReachable;
- (void)logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2;
- (void)logDuetRoomEvent;
- (id)manufacturer;
- (bool)matchesHAPAccessory:(id)arg1;
- (bool)matchesHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long*)arg2;
- (bool)matchesHMDAccessoryTransportInformationWithServerIdentifier:(id)arg1 instanceID:(id)arg2;
- (id)matchingHAPAccessoryServerIdentifierWithLinkType:(long long)arg1;
- (id)matchingHAPAccessoryWithLinkType:(long long)arg1;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)arg1;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (id)matchingTransportInformation:(id)arg1;
- (id)matchingTransportInformationWithServerIdentifier:(id)arg1;
- (id)matchingTransportInformationWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (void)mergeTransportInformationInstances:(id)arg1;
- (id)messageIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)model;
- (id)msgDispatcher;
- (void)notifyValue:(id)arg1 previousValue:(id)arg2 error:(id)arg3 forCharacteristic:(id)arg4 requestMessage:(id)arg5;
- (unsigned long long)pairingAttempts;
- (id)pairingRetryTimer;
- (id)pairingUsername;
- (void)performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(id /* block */)arg3 errorBlock:(id /* block */)arg4;
- (id)preferredHAPAccessoryForOperation:(long long)arg1 linkType:(long long*)arg2;
- (id)propertyQueue;
- (id)providedName;
- (id)publicKey;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)registerForMessagesWithNewUUID:(id)arg1;
- (void)registerForTimeMonitor;
- (id)relayAccessory;
- (id)relayIdentifier;
- (void)remoteAccessEnabled:(bool)arg1;
- (void)removeAllTransportInformationInstances;
- (void)removeBridgeFromDiscoveredAccessory:(id)arg1;
- (void)removeBridgedAccessory:(id)arg1;
- (void)removeBridgesFromDiscoveredAccessory;
- (void)removeDiscoveredAccessoryFromBridge:(id)arg1;
- (void)removeDiscoveredBridgeableAccessory:(id)arg1;
- (void)removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(id /* block */)arg3 completionQueue:(id)arg4;
- (void)removeNewAccessoryCompletionBlockForDisAssociatingAccessory:(id)arg1;
- (void)removeNewAccessoryCompletionBlockforAssociatingAccessory:(id)arg1;
- (void)removeNewAccessoryCompletionBlockforDiscoveringAccessory:(id)arg1;
- (void)removeRelayUser:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeTransportInformationInstance:(id)arg1;
- (void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetNotificationEnabledTime;
- (id)room;
- (void)savePublicKeyToKeychain;
- (id)serializedIdentifier;
- (id)serverIdentifier;
- (id)services;
- (void)setAccessoryFlags:(id)arg1;
- (void)setAccessoryProfiles:(id)arg1;
- (void)setActivationAttempts:(unsigned long long)arg1;
- (void)setAppData:(id)arg1;
- (void)setAppRegistry:(id)arg1;
- (void)setAssociatingAccessory:(id)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setBridge:(id)arg1;
- (void)setCameraProfiles:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setConfigurationAppIdentifier:(id)arg1;
- (void)setCurrentTimeCharacteristic:(id)arg1;
- (void)setDayOfTheWeekCharacteristic:(id)arg1;
- (void)setDisassociatingAccessory:(id)arg1;
- (void)setDiscoveredBridgeableAccessories:(id)arg1;
- (void)setDiscoveredBridgeableAccessory:(bool)arg1;
- (void)setDiscoveredServices:(id)arg1;
- (void)setHmdBridgeInformation:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifiersForBridgedAccessories:(id)arg1;
- (void)setIdentifiersOfBridgesDuringDiscovery:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPaired:(bool)arg1;
- (void)setPairingAttempts:(unsigned long long)arg1;
- (void)setPairingRetryTimer:(id)arg1;
- (void)setPairingUsername:(id)arg1;
- (void)setPairingUsername:(id)arg1 publicKey:(id)arg2;
- (void)setPrimary:(bool)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setProvidedName:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setReachability:(bool)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3;
- (void)setReachable:(bool)arg1;
- (void)setRelayEnabled:(bool)arg1;
- (void)setRelayIdentifier:(id)arg1;
- (void)setRemoteAccessEnabled:(bool)arg1;
- (void)setRemotelyReachable:(bool)arg1;
- (void)setRoom:(id)arg1;
- (void)setSupportsBridgeConfiguration:(bool)arg1;
- (void)setSupportsRelay:(bool)arg1;
- (void)setSystemTimeInformationTimer:(id)arg1;
- (void)setSystemTimeNeedsUpdate:(bool)arg1;
- (void)setTimeInformationServiceExists:(bool)arg1;
- (void)setTimeInformationTimer:(id)arg1;
- (void)setTimeUpdateCharacteristic:(id)arg1;
- (void)setUnblockPending:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startAssociatingAccessoryTimer;
- (void)startDisassociatingAccessoryTimer;
- (void)startDiscoveryAccessoryTimer:(id /* block */)arg1;
- (void)startRelayActivationWithActivationClient:(id)arg1;
- (void)startRelayPairingWithPairingClient:(id)arg1;
- (void)stopAssociatingAccessoryTimer;
- (void)stopDisassociatingAccessoryTimer;
- (void)stopDiscoveryAccessoryTimer;
- (bool)supportsBridgeConfiguration;
- (bool)supportsRelay;
- (id)systemTimeInformationTimer;
- (bool)systemTimeNeedsUpdate;
- (void)takeOwnershipOfAppData:(id)arg1;
- (void)timeInformationMonitorDidChangeTime;
- (bool)timeInformationServiceExists;
- (id)timeInformationTimer;
- (id)timeUpdateCharacteristic;
- (void)timerDidFire:(id)arg1;
- (id)transportInformationInstances;
- (id)tunneledHAPAccessories;
- (bool)unblockPending;
- (void)unblockWithMessageIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)unconfigure;
- (void)unconfigureAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (id)uniqueIdentifier;
- (void)updateAccessoryFlags:(id)arg1;
- (void)updateCategory:(id)arg1;
- (void)updateName:(id)arg1;
- (void)updateReachability;
- (void)updateRoom:(id)arg1;
- (bool)updateTimeInformationCharacteristicsForAccessory:(id)arg1;
- (id)url;
- (id)uuid;
- (id)workQueue;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)writeTimeInformationCharacteristicsForAccessory:(id)arg1;

@end

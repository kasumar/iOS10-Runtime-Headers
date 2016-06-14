/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBAgent : PLAgent <PLABMClientMessageDelegate, PLBasebandLogChannelDelegate> {
    PLABMClient * _abmClient;
    bool  _agentInited;
    PLEntryNotificationOperatorComposition * _batteryLevelChanged;
    PLNSNotificationOperatorComposition * _bbICEModelLTEMetricsNotification;
    PLTimer * _cacheCommitTimer;
    PLEntryNotificationOperatorComposition * _canSleepNotification;
    bool  _changed;
    PLTimer * _channelReconnectTimer;
    PLTelephonyConnection * _connection;
    NSMutableDictionary * _currentCallList;
    PLEntryNotificationOperatorComposition * _didNotSleepNotification;
    NSNumber * _inDCH;
    NSNumber * _inUTBF;
    NSDate * _lastBBActivityTimestamp;
    double  _lastBBProtoPower;
    double  _lastGWPower;
    NSDate * _lastModeledOOSTimestamp;
    double  _lastOOSPower;
    NSDate * _lastOOSTimestamp;
    NSDate * _lastReportRequestDate;
    NSNumber * _lastReportedSignal;
    bool  _lteCurrentState;
    double  _oosCDMAPower;
    double  _oosGWPower;
    double  _oosHDRPower;
    NSString * _operatorName;
    NSString * _simStatus;
    PLEntryNotificationOperatorComposition * _sleepEntryNotifications;
    PLBBTelephonyActivityMsg * _telActMsgHelper;
    PLBBTelephonyRegMsg * _telRegMsgHelper;
    PLEntryNotificationOperatorComposition * _telephonyActivityNotification;
    double  _totalOosCDMAScanEnergy;
    double  _totalOosGWScanEnergy;
    double  _totalOosHDRScanEnergy;
    PLEntryNotificationOperatorComposition * _wakeEntryNotifications;
    unsigned int  baseband_service;
    PLBasebandLogChannel * cachedChannel;
    struct IONotificationPort { } * ioNotifyPort;
    unsigned int  notificationRef;
    PLBasebandLogChannel * streamingChannel;
}

@property (retain) PLABMClient *abmClient;
@property bool agentInited;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *bbICEModelLTEMetricsNotification;
@property (retain) PLTimer *cacheCommitTimer;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property bool changed;
@property (retain) PLTimer *channelReconnectTimer;
@property (nonatomic, readonly) PLTelephonyConnection *connection;
@property (retain) NSMutableDictionary *currentCallList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PLEntryNotificationOperatorComposition *didNotSleepNotification;
@property (readonly) unsigned long long hash;
@property (retain) NSNumber *inDCH;
@property (retain) NSNumber *inUTBF;
@property (retain) NSDate *lastBBActivityTimestamp;
@property double lastBBProtoPower;
@property double lastGWPower;
@property (retain) NSDate *lastModeledOOSTimestamp;
@property double lastOOSPower;
@property (retain) NSDate *lastOOSTimestamp;
@property (retain) NSDate *lastReportRequestDate;
@property (retain) NSNumber *lastReportedSignal;
@property bool lteCurrentState;
@property double oosCDMAPower;
@property double oosGWPower;
@property double oosHDRPower;
@property (retain) NSString *operatorName;
@property (retain) NSString *simStatus;
@property (readonly) PLEntryNotificationOperatorComposition *sleepEntryNotifications;
@property (readonly) Class superclass;
@property (retain) PLBBTelephonyActivityMsg *telActMsgHelper;
@property (retain) PLBBTelephonyRegMsg *telRegMsgHelper;
@property (retain) PLEntryNotificationOperatorComposition *telephonyActivityNotification;
@property double totalOosCDMAScanEnergy;
@property double totalOosGWScanEnergy;
@property double totalOosHDRScanEnergy;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;

+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardLTESleepStatsQuery;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneBBMavReport;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)getNameBBMavReport;
+ (id)humanReadableStateFromKey:(id)arg1;
+ (id)indexToRat:(unsigned long long)arg1;
+ (void)load;
+ (void)logICEReportFor:(id)arg1 withAgent:(id)arg2;

- (void).cxx_destruct;
- (id)abmClient;
- (void)accountVoicePower:(id)arg1 state:(id)arg2;
- (bool)agentInited;
- (id)batteryLevelChanged;
- (id)bbICEModelLTEMetricsNotification;
- (void)bootStateChange:(id)arg1;
- (id)cacheCommitTimer;
- (void)cacheCommitTimerFired;
- (id)canSleepNotification;
- (void)cancelCacheCommitTimer;
- (bool)changed;
- (void)channel:(id)arg1 hasDataAvailable:(id)arg2;
- (void)channelDidBecomeInvalid:(id)arg1;
- (id)channelReconnectTimer;
- (void)commitBBCacheWithClientInfo:(long long)arg1;
- (id)connection;
- (void)createOOSAccountingEvent:(id)arg1;
- (id)currentCallList;
- (void)decodeAndLogBBWakeWith:(id)arg1;
- (id)didNotSleepNotification;
- (void)eurekaBasebandWakeLogStringWithDecodedReason:(id)arg1 andLogWith:(id)arg2;
- (void)eventToCommitCacheOccurred;
- (void)eventToFlushCacheOccurred;
- (void)flushBBCacheWithClientInfo:(long long)arg1;
- (void)handlePLBasebandEventNotification:(id)arg1;
- (void)handlePostCDRXCapabilityNo:(id)arg1;
- (id)humanReadableDataActiveString;
- (id)humanReadableDataIndicator:(id)arg1;
- (id)humanReadableRegistrationStatus:(id)arg1;
- (id)humanReadableSimStatusString;
- (void)iceBasebandWakeLogStringWithDecodedReason:(id)arg1 andLogWith:(id)arg2;
- (id)inDCH;
- (id)inUTBF;
- (id)init;
- (void)initCacheCommitTimer;
- (void)initOperatorDependancies;
- (bool)isChangedAndSetAirplaneMode;
- (bool)isTimeToRequestReport;
- (id)lastBBActivityTimestamp;
- (double)lastBBProtoPower;
- (double)lastGWPower;
- (id)lastModeledOOSTimestamp;
- (double)lastOOSPower;
- (id)lastOOSTimestamp;
- (id)lastReportRequestDate;
- (id)lastReportedSignal;
- (void)loadOOSModelValues;
- (void)log;
- (void)logBBWakeWithDecodedReason:(id)arg1 andLogWith:(id)arg2;
- (void)logBasebandConfig;
- (void)logEntries:(id)arg1 withGroupID:(id)arg2;
- (void)logEntry:(id)arg1;
- (void)logEventBackwardLTESleepStatsQuery;
- (void)logEventNoneBBMavReportBy:(long long)arg1 withAction:(long long)arg2;
- (void)logMessage:(id)arg1 andState:(id)arg2;
- (void)logOperatorName;
- (void)logTelephonyActivity;
- (void)logTelephonyActivityAtInit;
- (void)logTelephonyRegMsgWith:(id)arg1;
- (void)logTelephonyRegistrationAtInit;
- (bool)lteCurrentState;
- (void)metricMessage:(id)arg1;
- (void)modelBB16Power:(id)arg1;
- (void)modelBBICEPower:(id)arg1;
- (void)modelGPSPower:(id)arg1;
- (void)modelLTEQueryPower:(id)arg1;
- (void)modelLTESLEEPMGRPower:(id)arg1;
- (void)modelMav10BBHWPower:(id)arg1;
- (void)modelMav1BBHWRFTXPower:(id)arg1;
- (void)modelMavBBHWOtherPerRATPower:(id)arg1;
- (void)modelOOSPower:(id)arg1;
- (void)modelOOSSegmentPower:(id)arg1;
- (void)modelPLEntry:(id)arg1;
- (void)modelScanPower:(id)arg1;
- (void)modelStateTransitionPower:(id)arg1 rat:(id)arg2 state:(id)arg3;
- (double)oosCDMAPower;
- (double)oosGWPower;
- (double)oosHDRPower;
- (id)operatorName;
- (void)postCDRXCapability:(bool)arg1;
- (void)processTimeUpdateInfoDict:(id)arg1;
- (void)reconnectTimerFired;
- (void)refreshBBMavReport;
- (void)refreshRequestHandler;
- (void)registerForAirplaneModeChange;
- (void)registerForICEModelMetricsNotifications:(id)arg1;
- (void)resetCacheCommitTimer;
- (void)scheduleFlushPostCacheCommit;
- (void)scheduleReconnect;
- (void)setAbmClient:(id)arg1;
- (void)setAgentInited:(bool)arg1;
- (void)setBatteryLevelChanged:(id)arg1;
- (void)setBbICEModelLTEMetricsNotification:(id)arg1;
- (void)setCacheCommitTimer:(id)arg1;
- (void)setCanSleepNotification:(id)arg1;
- (void)setChanged:(bool)arg1;
- (void)setChannelReconnectTimer:(id)arg1;
- (void)setCurrentCallList:(id)arg1;
- (void)setDidNotSleepNotification:(id)arg1;
- (void)setInDCH:(id)arg1;
- (void)setInUTBF:(id)arg1;
- (void)setLastBBActivityTimestamp:(id)arg1;
- (void)setLastBBProtoPower:(double)arg1;
- (void)setLastGWPower:(double)arg1;
- (void)setLastModeledOOSTimestamp:(id)arg1;
- (void)setLastOOSPower:(double)arg1;
- (void)setLastOOSTimestamp:(id)arg1;
- (void)setLastReportRequestDate:(id)arg1;
- (void)setLastReportedSignal:(id)arg1;
- (void)setLteCurrentState:(bool)arg1;
- (void)setOosCDMAPower:(double)arg1;
- (void)setOosGWPower:(double)arg1;
- (void)setOosHDRPower:(double)arg1;
- (void)setOpName:(id)arg1;
- (void)setOperatorName:(id)arg1;
- (void)setSimStatus:(id)arg1;
- (void)setTelActMsgHelper:(id)arg1;
- (void)setTelRegMsgHelper:(id)arg1;
- (void)setTelephonyActivityNotification:(id)arg1;
- (void)setTotalOosCDMAScanEnergy:(double)arg1;
- (void)setTotalOosGWScanEnergy:(double)arg1;
- (void)setTotalOosHDRScanEnergy:(double)arg1;
- (void)setupBBChannelsWithAction:(long long)arg1;
- (bool)setupChannel:(id)arg1 withLogCodes:(id)arg2 andEvents:(id)arg3 andExtracode:(id)arg4;
- (void)setupICEChannels;
- (id)setupIOKitNotifications;
- (void)setupKICEChannels;
- (void)setupMavABMChannel;
- (void)setupTelephonyActivityChannels;
- (void)setupTelephonyRegistrationChannels;
- (void)setupTimeUpdateChannel;
- (id)simStatus;
- (id)sleepEntryNotifications;
- (id)stringForData:(id)arg1;
- (id)telActMsgHelper;
- (id)telRegMsgHelper;
- (id)telephonyActivityNotification;
- (void)telephonyActivityNotificationCB_Agent:(id)arg1 withName:(struct __CFString { }*)arg2;
- (double)totalOosCDMAScanEnergy;
- (double)totalOosGWScanEnergy;
- (double)totalOosHDRScanEnergy;
- (double)translateChannelRBsToChannelBW:(double)arg1;
- (void)triggerLTESLEEPMGRPower:(id)arg1;
- (void)triggerMessage:(id)arg1;
- (id)wakeEntryNotifications;
- (void)wakeMessage:(id)arg1;

@end

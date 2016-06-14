/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBatteryAgent : PLAgent {
    PLTimer * _EABatteryTimer;
    double  _EAEnergyDrained;
    bool  _allowGasGaugeRead;
    PLXPCResponderOperatorComposition * _batteryDischargeCurrentResponder;
    PLXPCResponderOperatorComposition * _batteryInfoResponder;
    double  _batteryLevelPercent;
    PLXPCResponderOperatorComposition * _batteryTemperatureResponder;
    PLEntryNotificationOperatorComposition * _canSleepEntryNotifications;
    PLSemaphore * _canSleepSemaphore;
    bool  _deviceIsPluggedIn;
    NSString * _entryKeyEABattery;
    NSString * _entryKeyEAPencilStats;
    struct ggcontext { } * _gasGagueConnection;
    int  _gasGaugeConsecutiveEmptyEntriesCount;
    PLTimer * _gasGaugeTimer;
    PLIOKitOperatorComposition * _ioAccessoryManager;
    PLIOKitOperatorComposition * _iokit;
    bool  _isEABatteryConnected;
    NSNumber * _lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
    int  _priIOAccessoryPowerMode;
    double  _rawBatteryVoltageVolt;
    PLMonotonicTimer * _significantBatteryChangeTimer;
    NSMutableArray * _trackedAccessories;
    PLEntryNotificationOperatorComposition * _wakeEntryNotifications;
}

@property (retain) PLTimer *EABatteryTimer;
@property double EAEnergyDrained;
@property bool allowGasGaugeRead;
@property (retain) PLXPCResponderOperatorComposition *batteryDischargeCurrentResponder;
@property (retain) PLXPCResponderOperatorComposition *batteryInfoResponder;
@property double batteryLevelPercent;
@property (retain) PLXPCResponderOperatorComposition *batteryTemperatureResponder;
@property (readonly) PLEntryNotificationOperatorComposition *canSleepEntryNotifications;
@property (retain) PLSemaphore *canSleepSemaphore;
@property bool deviceIsPluggedIn;
@property (readonly) NSString *entryKeyEABattery;
@property (readonly) NSString *entryKeyEAPencilStats;
@property struct ggcontext { }*gasGagueConnection;
@property int gasGaugeConsecutiveEmptyEntriesCount;
@property (retain) PLTimer *gasGaugeTimer;
@property (readonly) PLIOKitOperatorComposition *ioAccessoryManager;
@property (readonly) PLIOKitOperatorComposition *iokit;
@property bool isEABatteryConnected;
@property (retain) NSNumber *lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
@property int priIOAccessoryPowerMode;
@property double rawBatteryVoltageVolt;
@property (retain) PLMonotonicTimer *significantBatteryChangeTimer;
@property (retain) NSMutableArray *trackedAccessories;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;

+ (id)defaults;
+ (id)entryEventBackwardDefinitionBattery;
+ (id)entryEventBackwardDefinitionBatteryUI;
+ (id)entryEventBackwardDefinitionEABattery;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionEAPencil;
+ (id)entryEventForwardDefinitionLightningConnectorStatus;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionGasGauge;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionEAPencil;
+ (id)entryEventPointDefinitionGasGaugeReconnect;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)EABatteryTimer;
- (double)EAEnergyDrained;
- (void)accessoryConnected:(id)arg1;
- (void)accessoryDisconnected:(id)arg1;
- (bool)allowGasGaugeRead;
- (id)batteryDischargeCurrentResponder;
- (id)batteryInfoResponder;
- (double)batteryLevelPercent;
- (id)batteryTemperatureResponder;
- (id)canSleepEntryNotifications;
- (id)canSleepSemaphore;
- (void)cancelEALogging;
- (void)dealloc;
- (void)detectEAPencilConnectionWithNotification:(id)arg1;
- (bool)deviceIsPluggedIn;
- (id)entryKeyEABattery;
- (id)entryKeyEAPencilStats;
- (void)fakeLogEntry:(id)arg1;
- (struct ggcontext { }*)gasGagueConnection;
- (int)gasGaugeConsecutiveEmptyEntriesCount;
- (bool)gasGaugeOpenAndStartLogging;
- (void)gasGaugeRead;
- (bool)gasGaugeStopLoggingAndClose;
- (id)gasGaugeTimer;
- (id)getBaseIdentifierFromDevice:(id)arg1;
- (id)getIOPSDevices;
- (bool)givePluggedInFreePass;
- (id)init;
- (void)initOperatorDependancies;
- (id)ioAccessoryManager;
- (id)iokit;
- (bool)isEABatteryConnected;
- (bool)isEABatteryConnectedNow;
- (bool)isEAPencilConnectedNow;
- (id)lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
- (void)log;
- (void)logEABatteryStatistics;
- (void)logEventBackwardBattery;
- (void)logEventIntervalGasGauge;
- (int)priIOAccessoryPowerMode;
- (double)rawBatteryVoltageVolt;
- (void)refreshEABatteryStatus;
- (void)setAllowGasGaugeRead:(bool)arg1;
- (void)setBatteryDischargeCurrentResponder:(id)arg1;
- (void)setBatteryInfoResponder:(id)arg1;
- (void)setBatteryLevelPercent:(double)arg1;
- (void)setBatteryTemperatureResponder:(id)arg1;
- (void)setCanSleepSemaphore:(id)arg1;
- (void)setDeviceIsPluggedIn:(bool)arg1;
- (void)setEABatteryTimer:(id)arg1;
- (void)setEAEnergyDrained:(double)arg1;
- (void)setGasGagueConnection:(struct ggcontext { }*)arg1;
- (void)setGasGaugeConsecutiveEmptyEntriesCount:(int)arg1;
- (void)setGasGaugeTimer:(id)arg1;
- (void)setIsEABatteryConnected:(bool)arg1;
- (void)setLastkIOPSAppleBatteryCaseCumulativeCurrentKey:(id)arg1;
- (void)setPriIOAccessoryPowerMode:(int)arg1;
- (void)setRawBatteryVoltageVolt:(double)arg1;
- (void)setSignificantBatteryChangeTimer:(id)arg1;
- (void)setTrackedAccessories:(id)arg1;
- (void)setupEALogging;
- (id)significantBatteryChangeTimer;
- (id)trackedAccessories;
- (id)wakeEntryNotifications;

@end

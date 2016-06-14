/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLDisplayAgent : PLAgent {
    bool  _alsOn;
    PLTimer * _backlightFilterTimer;
    NSTimer * _bluelightFilterTimer;
    PLEntry * _bluelightStatusEntry;
    BrightnessSystemClient * _brightnessSystemClient;
    CBAdaptationClient * _colorAdaptationClient;
    NSString * _displayHardware;
    NSDictionary * _displayPowerModel;
    bool  _firstEntryOnInit;
    PLIOKitOperatorComposition * _iokitBacklight;
    PLIOKitOperatorComposition * _iokitDisplay;
    PLIOKitOperatorComposition * _iokitTouch;
    bool  _isMIEActive;
    bool  _isMultitouchLoggingEnabled;
    double  _lastALSPowerSaved;
    PLMonotonicTimer * _logLastALSPowerSavedTimer;
    PLXPCListenerOperatorComposition * _multitouchXPCListener;
    NSDictionary * _pendingBacklightEntry;
    NSDate * _pendingBacklightEntryDate;
    struct __IOHIDEventSystemClient { } * _touchHIDClientRef;
    PLEventForwardDisplayEntry * _uAmpsEntry;
    NSTimer * _uAmpsFilterTimer;
    bool  _userTouch;
    NSDate * _userTouchDownTime;
}

@property bool alsOn;
@property (retain) PLTimer *backlightFilterTimer;
@property (retain) NSTimer *bluelightFilterTimer;
@property (retain) PLEntry *bluelightStatusEntry;
@property (retain) BrightnessSystemClient *brightnessSystemClient;
@property (retain) CBAdaptationClient *colorAdaptationClient;
@property (readonly) NSString *displayHardware;
@property (readonly) NSDictionary *displayPowerModel;
@property bool firstEntryOnInit;
@property (readonly) PLIOKitOperatorComposition *iokitBacklight;
@property (readonly) PLIOKitOperatorComposition *iokitDisplay;
@property (readonly) PLIOKitOperatorComposition *iokitTouch;
@property bool isMIEActive;
@property bool isMultitouchLoggingEnabled;
@property double lastALSPowerSaved;
@property (retain) PLMonotonicTimer *logLastALSPowerSavedTimer;
@property (retain) PLXPCListenerOperatorComposition *multitouchXPCListener;
@property (retain) NSDictionary *pendingBacklightEntry;
@property (retain) NSDate *pendingBacklightEntryDate;
@property struct __IOHIDEventSystemClient { }*touchHIDClientRef;
@property (retain) PLEventForwardDisplayEntry *uAmpsEntry;
@property (retain) NSTimer *uAmpsFilterTimer;
@property bool userTouch;
@property (retain) NSDate *userTouchDownTime;

+ (id)entryAggregateDefinitionUserTouch;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionBlueLightParameters;
+ (id)entryEventBackwardDefinitionHarmonyParameters;
+ (id)entryEventBackwardDefinitionTouch;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionALSEnabled;
+ (id)entryEventForwardDefinitionALSPowerSaved;
+ (id)entryEventForwardDefinitionALSUserPreferences;
+ (id)entryEventForwardDefinitionBlueLightReductionStatus;
+ (id)entryEventForwardDefinitionColorAdaptationMode;
+ (id)entryEventForwardDefinitionDisplay;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionDisplay;
+ (id)entryEventPointDefinitionMultitouch;
+ (id)entryEventPointDefinitionUserBrightness;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (bool)alsOn;
- (id)backlightFilterTimer;
- (id)bluelightFilterTimer;
- (id)bluelightStatusEntry;
- (id)brightnessSystemClient;
- (id)colorAdaptationClient;
- (id)displayHardware;
- (id)displayPowerModel;
- (void)extractDataWithEntry:(id)arg1 withColName:(id)arg2 withDataArray:(id)arg3;
- (bool)firstEntryOnInit;
- (void)handleBrightnessClientNotification:(id)arg1 withValue:(id)arg2;
- (id)init;
- (void)initOperatorDependancies;
- (id)iokitBacklight;
- (id)iokitDisplay;
- (id)iokitTouch;
- (bool)isAlsEnabled;
- (bool)isMIEActive;
- (bool)isMultitouchLoggingEnabled;
- (double)lastALSPowerSaved;
- (void)log;
- (void)logBlueLightDataWithDictionary:(id)arg1;
- (void)logBrightnessDataWithEntryKey:(id)arg1 withColName:(id)arg2 withValue:(id)arg3;
- (void)logEventBackwardTouch;
- (void)logEventBackwardUserTouch:(bool)arg1;
- (void)logEventForwardALSEnabled;
- (void)logEventForwardALSUserPreferences;
- (void)logEventForwardALSUserPreferencesEntryWithLux:(id)arg1;
- (void)logEventForwardALSUserPreferencesWithCurrLux;
- (void)logEventForwardColorAdaptationMode;
- (void)logEventForwardDisplay;
- (void)logEventForwardDisplayWithRawData:(id)arg1 withDate:(id)arg2;
- (void)logEventPointDisplay;
- (void)logEventPointDisplayBacklight;
- (void)logEventPointDisplayForBlock:(id)arg1 isActive:(bool)arg2;
- (void)logEventPointDisplayMIE;
- (void)logEventPointMultitouchWithPayload:(id)arg1;
- (void)logEventPointUserBrightnessCommitted:(double)arg1;
- (id)logLastALSPowerSavedTimer;
- (void)modelDisplayPower:(id)arg1;
- (double)modelDisplayPowerForK94:(id)arg1;
- (id)multitouchXPCListener;
- (id)pendingBacklightEntry;
- (id)pendingBacklightEntryDate;
- (void)reArmCallback:(id)arg1;
- (void)reArmUAmpsCallback:(id)arg1;
- (void)setAlsOn:(bool)arg1;
- (void)setBacklightFilterTimer:(id)arg1;
- (void)setBluelightFilterTimer:(id)arg1;
- (void)setBluelightStatusEntry:(id)arg1;
- (void)setBrightnessSystemClient:(id)arg1;
- (void)setColorAdaptationClient:(id)arg1;
- (void)setFirstEntryOnInit:(bool)arg1;
- (void)setIsMIEActive:(bool)arg1;
- (void)setIsMultitouchLoggingEnabled:(bool)arg1;
- (void)setLastALSPowerSaved:(double)arg1;
- (void)setLogLastALSPowerSavedTimer:(id)arg1;
- (void)setMultitouchXPCListener:(id)arg1;
- (void)setPendingBacklightEntry:(id)arg1;
- (void)setPendingBacklightEntryDate:(id)arg1;
- (void)setTouchHIDClientRef:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setUAmpsEntry:(id)arg1;
- (void)setUAmpsFilterTimer:(id)arg1;
- (struct __IOHIDEventSystemClient { }*)setUpIOHIDTouchSystemClient;
- (void)setUserTouch:(bool)arg1;
- (void)setUserTouchDownTime:(id)arg1;
- (struct __IOHIDEventSystemClient { }*)touchHIDClientRef;
- (id)uAmpsEntry;
- (id)uAmpsFilterTimer;
- (double)uAmpsToDisplayPower:(double)arg1;
- (bool)userTouch;
- (id)userTouchDownTime;

@end

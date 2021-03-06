/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTPhraseSpotter : NSObject {
    VTAnalyzerNDAPI * _analyzer;
    id /* block */  _assetChangedCallback;
    NSObject<OS_dispatch_queue> * _assetChangedQueue;
    AudioCircularBuffer * _audioBuffer;
    NSString * _audioFileDir;
    bool  _audioLoggingEnabled;
    NSString * _configData;
    NSString * _configLanguageCode;
    NSString * _configPath;
    NSString * _configVersion;
    VTCorruptDetector * _corruptDetector;
    bool  _deviceHandheld;
    bool  _didWakeAP;
    bool  _doSuperVectorSecondaryTest;
    double  _earlyDetectTime;
    bool  _earlyDetected;
    double  _effectiveThreshold;
    unsigned int  _extraSamplesAtStart;
    NSData * _firstChanceAudioBuffer;
    bool  _firstChanceDetected;
    double  _firstChanceDetectionTime;
    NSDate * _firstChanceTriggeredDate;
    NSDictionary * _firstChanceVTEventInfo;
    bool  _firstRecognitionResultReceived;
    int  _firstUnlockAfterRebootNotificationToken;
    NSDateFormatter * _formatter;
    double  _handHeldDetectedTime;
    double  _hardwareSampleRate;
    int  _heartbeatCounter;
    bool  _implicitlyTrained;
    bool  _isMaximized;
    bool  _isRecognitionResultPending;
    bool  _isRunningRecognizer;
    bool  _isRunningSATDetection;
    bool  _isRunningSATEnrollment;
    bool  _isSecondChanceEffective;
    bool  _isSecondPass;
    bool  _isSuperVectorNeeded;
    NSString * _languageCode;
    int  _languageCodeChangedNotificationToken;
    double  _lastDowntime;
    unsigned int  _lastEventEnd;
    double  _lastScore;
    double  _lastSupervecScore;
    unsigned char  _lastTriggerType;
    double  _lastUptime;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    NSObject<OS_dispatch_queue> * _ndetectQueue;
    bool  _nearMissLogPending;
    int  _nearMissLogPreDelayTimer;
    NSMutableArray * _nonceTriggerEvents;
    int  _numFramesFromPreTrigger;
    bool  _phraseSpotterBypassed;
    bool  _phraseSpotterEnabled;
    id /* block */  _readyCompletion;
    id /* block */  _readyForAnalyze;
    NSString * _recognizerConfigName;
    double  _recognizerScore;
    double  _recognizerThresholdOffset;
    bool  _registeredForPhraseSpotterNotification;
    bool  _registeredforVoiceTriggerEnabledNotification;
    NSString * _resourcePath;
    unsigned int  _sampleCountAtFirstChance;
    unsigned int  _samplecount;
    unsigned int  _samplecountAtLastTriggerEnd;
    unsigned int  _samplecountAtLastTriggerStart;
    unsigned int  _samplecountAtRealTriggerStart;
    unsigned long long  _samplerate;
    NSString * _satAudioDirectory;
    NSString * _satModelDirectory;
    bool  _secondPassAccepted;
    bool  _secondPassAudioLoggingEnabled;
    double  _secondPassBestScore;
    int  _secondPassResetTimer;
    bool  _secondPassStopSent;
    bool  _secondPassTriggered;
    double  _threshold;
    double  _thresholdLogNearMisses;
    double  _thresholdPreSuperVector;
    double  _thresholdSAT;
    double  _thresholdSecondChance;
    VTTranscriber * _transcriber;
    long long  _triggerCount;
    unsigned long long  _triggerFireMachTime;
    NSArray * _triggerPhrases;
    unsigned long long  _triggerStartMachTime;
    double  _triggerThreshold;
    bool  _useRecognizer;
    bool  _voiceTriggerEnabled;
    VTSiriNotifications * siriNotifications;
}

@property (readonly) NSData *firstChanceAudioBuffer;
@property (readonly) NSDate *firstChanceTriggeredDate;
@property (readonly) NSDictionary *firstChanceVTEventInfo;
@property (readonly) double lastScore;
@property (readonly) double lastSupervecScore;
@property (readonly) unsigned char lastTriggerType;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long sampleCountAtEndOfTrigger;
@property (readonly) unsigned long long sampleCountAtStartOfTrigger;
@property (readonly) unsigned long long samplerate;
@property (readonly) long long triggerCount;

+ (id)currentSpotter;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_analyzeEvents:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; float x4; bool x5; }*)arg1;
- (id)_analyzeMakeResult:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; float x4; bool x5; }*)arg1 eventKind:(unsigned char)arg2 satScore:(double)arg3;
- (void)_analyzeReset;
- (unsigned long long)_applyExtraTimeTo:(unsigned long long)arg1;
- (void)_assetsAvailable:(id)arg1;
- (void)_bypassAssertionReceived;
- (void)_cancelSecondChance;
- (id)_capturePathWithPrefix:(id)arg1 eventKind:(unsigned char)arg2;
- (void)_clearDeviceHandHeld;
- (void)_commonInit;
- (double)_computeSATScore:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; float x4; bool x5; }*)arg1;
- (bool)_configureWithConfig:(id)arg1 resourcePath:(id)arg2;
- (bool)_configureWithDefaults;
- (void)_createFirstChanceMeta:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; float x4; bool x5; }*)arg1;
- (id)_getAssetHashFromConfigPath:(id)arg1;
- (bool)_getSecondChanceEffective;
- (id)_getSpeakerModelPath:(id)arg1 createDirectory:(bool)arg2;
- (void)_handleAssetChangeForLanguageCode:(id)arg1;
- (id)_handleTriggerEvent:(const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; float x4; bool x5; }*)arg1 num_new_samples:(unsigned int)arg2 satScore:(double)arg3;
- (void)_initDetector;
- (bool)_isDeviceHandheld;
- (void)_languageCodeChanged;
- (void)_listenForFirstUnlockAfterReboot;
- (void)_listenForLanguageCodeUpdates;
- (void)_logCorruptAudio;
- (void)_logMetaData:(id)arg1;
- (void)_logPrepareProperty:(id)arg1;
- (void)_performReadyCompletion;
- (void)_phraseSpotterEnabledDidChange;
- (void)_recordTrainingSamples;
- (bool)_removeInvalidSATModel;
- (void)_resetCounters;
- (bool)_retrainingSATModel:(id)arg1 satAudioPath:(id)arg2;
- (void)_safeConfigureWithAnalyzer:(id)arg1 path:(id)arg2 data:(id)arg3 resourcePath:(id)arg4;
- (void)_safeReconfig;
- (void)_secondChanceRequestReceived;
- (void)_setDeviceHandHeld;
- (void)_setSecondChance;
- (void)_siriSessionCancelReceived;
- (void)_storeFirstChanceAudio;
- (void)_triggerEventRequestReceived;
- (void)_unbypassAssertionReceived;
- (void)_unlistenForFirstUnlockAfterReboot;
- (void)_unlistenForLanguageCodeUpdates;
- (void)_voiceTriggerEnabledDidChange;
- (id)analyze:(struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; })arg1;
- (id)analyzeBufferList:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1;
- (void)audioRecordingForSiriStatusChanged:(bool)arg1;
- (void)clearTriggerCount;
- (void)dealloc;
- (id)firstChanceAudioBuffer;
- (id)firstChanceTriggeredDate;
- (id)firstChanceVTEventInfo;
- (unsigned long long)getAdjustedDeviceStartTime:(unsigned long long)arg1;
- (id)getCircularBuffer;
- (id)getCorealisRTModel;
- (id)getLanguageCode;
- (id)getSATDirectory;
- (id)init;
- (id)initWithConfig:(id)arg1 resourcePath:(id)arg2;
- (id)initWithHardwareSampleRate:(double)arg1;
- (id)initWithHardwareSampleRate:(double)arg1 readyCompletion:(id /* block */)arg2;
- (id)initWithLanguageCodeForSATEnrollment:(id)arg1;
- (double)lastScore;
- (double)lastSupervecScore;
- (unsigned char)lastTriggerType;
- (void)looseTriggerThreshold;
- (void)notifyAssetChangeWithCallback:(id /* block */)arg1;
- (void)prepareWithProperty:(id)arg1 readyCompletion:(id /* block */)arg2;
- (void)receivedSleepGesture;
- (void)receivedWakeGesture;
- (unsigned long long)sampleCount;
- (unsigned long long)sampleCountAtEndOfTrigger;
- (unsigned long long)sampleCountAtStartOfTrigger;
- (unsigned long long)samplerate;
- (long long)triggerCount;

@end

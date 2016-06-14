/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTXConnection : NSObject <VTXService> {
    NSMutableSet * _activationAssertions;
    VTSiriPHash * _hasher;
    bool  _isPhraseSpotterBypassed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_setPhraseSpotterBypassing:(bool)arg1;
- (oneway void)clearVoiceTriggerCount;
- (oneway void)enableVoiceTrigger:(bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (oneway void)getFirstChanceAudioBufferWithReply:(id /* block */)arg1;
- (oneway void)getFirstChanceTriggeredDateWithReply:(id /* block */)arg1;
- (oneway void)getFirstChanceVTEventInfoWithReply:(id /* block */)arg1;
- (oneway void)getTestResponse:(id /* block */)arg1;
- (oneway void)getVoiceTriggerCountWithReply:(id /* block */)arg1;
- (void)handleDisconnect;
- (id)init;
- (id)latestHashAndSignal;
- (oneway void)notifySecondChanceRequest;
- (oneway void)notifyTriggerEventRequest;
- (oneway void)notifyVoiceTriggeredSiriSessionCancelled;
- (oneway void)queryLastTriggerEventTypeWithReply:(id /* block */)arg1;
- (oneway void)resetAssertions;
- (oneway void)setPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2 timestamp:(double)arg3;

@end

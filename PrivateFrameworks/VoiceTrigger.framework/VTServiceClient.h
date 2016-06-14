/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTServiceClient : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _vtxConnection;
}

- (void).cxx_destruct;
- (id)_service;
- (void)clearVoiceTriggerCount;
- (void)dealloc;
- (void)enableVoiceTrigger:(bool)arg1 withAssertion:(id)arg2;
- (id)getFirstChanceAudioBuffer;
- (id)getFirstChanceTriggeredDate;
- (id)getFirstChanceVTEventInfo;
- (unsigned char)getLastTriggerType;
- (long long)getVoiceTriggerCount;
- (id)init;
- (id)latestHashAndSignal;
- (void)notifySecondChanceRequest;
- (void)notifyTriggerEventRequest;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)resetAssertions;
- (void)setPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2;

@end

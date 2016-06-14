/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTFirstUnlockAfterRebootPolicy : _VTStatePolicy {
    bool  _deviceUnlockedAfterReboot;
    int  _notifyToken;
}

- (void)_listenForFirstUnlockAfterReboot;
- (void)_unlistenForFirstUnlockAfterReboot;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (bool)isEnabled;
- (void)waitForFirstUnlockAfterReboot;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVoiceDetector : VCPAudioAnalyzer

- (id)audioFormatRequirements;
- (int)initializeAudioUnit:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (int)loadModel;
- (int)processAudioSamples;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPEndPointDetector : AVAudioEndpointDetector {
    int  _decision;
    bool  _recurrentEvent;
    double  _timestamp;
}

@property (readonly) int decision;
@property (readonly) bool recurrentEvent;
@property (readonly) double timestamp;

- (int)decision;
- (void)handleVADEventOfType:(int)arg1 andOfCategoryNum:(unsigned int)arg2 havingTimeStamp:(double)arg3 andHavingValue:(const void*)arg4;
- (bool)recurrentEvent;
- (double)timestamp;

@end

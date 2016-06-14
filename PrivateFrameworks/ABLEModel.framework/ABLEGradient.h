/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
 */

@interface ABLEGradient : NSObject {
    ABLEBONDrain * _drainMap;
    float  _maxDecay;
    float  _minDecay;
}

@property (readonly) ABLEBONDrain *drainMap;
@property (readonly) float maxDecay;
@property (readonly) float minDecay;

- (void).cxx_destruct;
- (unsigned long long)calculateBON:(id)arg1;
- (unsigned long long)calculateBONfromDrainRate:(float)arg1;
- (unsigned long long)calculateBONfromTable:(id)arg1;
- (float)calculateHourlyDecayRate:(id)arg1;
- (float)calculateHourlyDecayRateFromTable:(id)arg1;
- (unsigned long long)calculateLinearBONfromDrainRate:(float)arg1;
- (id)drainMap;
- (id)initWithCurve:(id)arg1 minDecay:(float)arg2 maxDecay:(float)arg3;
- (id)initWithCurveAndMinDecay:(float)arg1 andMaxDecay:(float)arg2;
- (id)initWithMinDecay:(float)arg1 andMaxDecay:(float)arg2;
- (float)maxDecay;
- (float)minDecay;

@end

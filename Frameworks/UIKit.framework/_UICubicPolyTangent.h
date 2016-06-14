/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICubicPolyTangent : NSObject <_UISettingsKeyObserver> {
    double  _cubicGain;
    double  _initialLinearGain;
    double  _parabolicGain;
    double  _quarticGain;
    double  _tangentCbrtSpeed;
    double  _tangentHyperCbrtSpeed;
    double  _tangentLineSpeed;
    double  _tangentSqrtSpeed;
}

@property (nonatomic) double cubicGain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialLinearGain;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic) double parabolicGain;
@property (nonatomic) double quarticGain;
@property (readonly) Class superclass;
@property (nonatomic) double tangentCbrtSpeed;
@property (nonatomic) double tangentHyperCbrtSpeed;
@property (nonatomic) double tangentLineSpeed;
@property (nonatomic) double tangentSqrtSpeed;

+ (id)keyboardTrackpadCurve;

- (int)RootPowerOfEarliestTangent:(int)arg1;
- (double)clipForIOFixedMath:(double)arg1 polynomialPower:(int)arg2 tangencyStartingAt:(double)arg3;
- (void)clipGainsForIOFixedMathWithTangency;
- (double)cubicGain;
- (double)gainForPower:(int)arg1;
- (id)init;
- (double)initialLinearGain;
- (bool)isEmpty;
- (double)parabolicGain;
- (double)piecewiseCubicAcceleratedSpeed:(double)arg1;
- (double)quarticDerivative:(double)arg1;
- (double)quarticFunction:(double)arg1;
- (double)quarticGain;
- (double)quarticTangentFunction:(double)arg1 powerOfEarliestTangent:(int)arg2;
- (void)setCubicGain:(double)arg1;
- (void)setInitialLinearGain:(double)arg1;
- (void)setParabolicGain:(double)arg1;
- (void)setQuarticGain:(double)arg1;
- (void)setTangentCbrtSpeed:(double)arg1;
- (void)setTangentHyperCbrtSpeed:(double)arg1;
- (void)setTangentLineSpeed:(double)arg1;
- (void)setTangentSqrtSpeed:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)tangentCbrtSpeed;
- (double)tangentHyperCbrtSpeed;
- (double)tangentLineSpeed;
- (double)tangentSpeedForPower:(int)arg1;
- (double)tangentSqrtSpeed;

@end

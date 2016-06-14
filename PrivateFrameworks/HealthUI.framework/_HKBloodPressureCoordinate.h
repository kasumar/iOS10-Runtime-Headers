/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKBloodPressureCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    HKMinMaxCoordinate * _diastolicCoordinate;
    HKMinMaxCoordinate * _systolicCoordinate;
    id  _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKMinMaxCoordinate *diastolicCoordinate;
@property (nonatomic, readonly) double endXValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKMinMaxCoordinate *systolicCoordinate;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)description;
- (id)diastolicCoordinate;
- (double)endXValue;
- (id)initWithSystolicCoordinate:(id)arg1 diastolicCoordinate:(id)arg2 userInfo:(id)arg3;
- (double)startXValue;
- (id)systolicCoordinate;
- (id)userInfo;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTemperatureThresholdControlItem : HFControlItem {
    NSString * _maximumCharacteristicType;
    NSString * _minimumCharacteristicType;
    NSFormatter * _valueFormatter;
}

@property (nonatomic, readonly, copy) NSString *maximumCharacteristicType;
@property (nonatomic, readonly, copy) NSNumber *maximumCharacteristicTypeStepValue;
@property (nonatomic, readonly, copy) NSNumber *maximumValue;
@property (nonatomic, readonly, copy) NSString *minimumCharacteristicType;
@property (nonatomic, readonly, copy) NSNumber *minimumCharacteristicTypeStepValue;
@property (nonatomic, readonly, copy) NSNumber *minimumValue;
@property (nonatomic, retain) NSFormatter *valueFormatter;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_defaultValueFormatter;
- (id)_maximumCharacteristicTypeMetadata;
- (id)_minimumCharacteristicTypeMetadata;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 minimumCharacteristicType:(id)arg2 maximumCharacteristicType:(id)arg3 displayResults:(id)arg4;
- (id)maximumCharacteristicType;
- (id)maximumCharacteristicTypeStepValue;
- (id)maximumValue;
- (id)minimumCharacteristicType;
- (id)minimumCharacteristicTypeStepValue;
- (id)minimumValue;
- (void)setValueFormatter:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)valueFormatter;

@end

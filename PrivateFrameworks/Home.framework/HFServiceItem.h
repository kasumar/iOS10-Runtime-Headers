/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceItem : HFItem <HFCharacteristicWriteActionBuilderFactory, HFServiceLikeItem> {
    NSSet * _allControlItems;
    NSDictionary * _controlItemsByIdentifier;
    HFIncrementalStateControlItem * _incrementalStateControlItem;
    HFPrimaryStateControlItem * _primaryStateControlItem;
    HMService * _service;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, copy) NSSet *allControlItems;
@property (nonatomic, copy) NSDictionary *controlItemsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, retain) HFIncrementalStateControlItem *incrementalStateControlItem;
@property (nonatomic, retain) HFPrimaryStateControlItem *primaryStateControlItem;
@property (nonatomic, readonly) HMService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (Class)itemClassForService:(id)arg1;
+ (id)serviceItemForService:(id)arg1 valueSource:(id)arg2;

- (void).cxx_destruct;
- (id)_aggregatedValueSource;
- (bool)_canWriteState:(long long)arg1;
- (id)_characteristicToWriteInService:(id)arg1;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_initForCopyWithValueSource:(id)arg1 service:(id)arg2 controlItemsByIdentifier:(id)arg3;
- (void)_setupControlItems;
- (void)_setupControlItemsWithControlItemsByIdentifier:(id)arg1;
- (id)_standardResultsWithPrimaryState:(long long)arg1 readCharacteristics:(id)arg2 error:(id)arg3;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)allControlItems;
- (bool)containsActionableCharacteristics;
- (id)controlDescriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)controlItemsByIdentifier;
- (id)controlPanelItemWithControlIdentifiers:(id)arg1 displayResults:(id)arg2;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createControlItemsWithValueSource:(id)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)description;
- (id)descriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)homeKitObject;
- (id)incrementalStateControlItem;
- (id)incrementalStateIconDescriptorForPrimaryState:(long long)arg1 incrementalValue:(id)arg2;
- (id)init;
- (id)initWithValueSource:(id)arg1 service:(id)arg2;
- (id)primaryStateControlItem;
- (id)readValuesForCharacteristicTypes:(id)arg1;
- (id)service;
- (id)services;
- (void)setAllControlItems:(id)arg1;
- (void)setControlItemsByIdentifier:(id)arg1;
- (void)setIncrementalStateControlItem:(id)arg1;
- (void)setPrimaryStateControlItem:(id)arg1;
- (bool)supportsControlWithCharacteristicTypes:(id)arg1;
- (id)updateWithOptions:(id)arg1;
- (id)valueSource;

@end

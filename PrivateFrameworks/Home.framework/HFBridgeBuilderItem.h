/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFBridgeBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem> {
    HFBridgeBuilder * _bridgeBuilder;
    HFBridgeItem * _bridgeItem;
}

@property (nonatomic, retain) HFBridgeBuilder *bridgeBuilder;
@property (nonatomic, retain) HFBridgeItem *bridgeItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)allControlItems;
- (id)bridgeBuilder;
- (id)bridgeItem;
- (id)controlPanelItems;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)homeKitObject;
- (id)incrementalStateControlItem;
- (id)init;
- (id)initWithBridgeBuilder:(id)arg1;
- (id)primaryStateControlItem;
- (id)services;
- (void)setBridgeBuilder:(id)arg1;
- (void)setBridgeItem:(id)arg1;
- (id)valueSource;

@end

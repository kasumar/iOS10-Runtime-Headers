/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIFieldSettingDescription : SKUISettingDescription <SKUIControllableSettingDescription> {
    SKUISettingsGroupController * _controller;
    long long  _fieldType;
    NSMutableDictionary * _fieldValues;
}

@property (nonatomic) SKUISettingsGroupController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long fieldType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_fieldTypeFromElement:(id)arg1;
+ (id)_inputViewElementFromElement:(id)arg1;
+ (Class)_viewClassForSettingDescription:(id)arg1;

- (void).cxx_destruct;
- (void)_dispatchEventOfType:(unsigned long long)arg1 extraInfo:(id)arg2;
- (bool)allowsSelection;
- (id)controller;
- (long long)fieldType;
- (id)fieldValueForKey:(id)arg1;
- (void)handleSelectionOnCompletion:(id /* block */)arg1;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (void)setController:(id)arg1;
- (void)setFieldValue:(id)arg1 forKey:(id)arg2;

@end

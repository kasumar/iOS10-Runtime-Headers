/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetMessageAttributeIntent : INIntent <INSetMessageAttributeIntent>

@property (nonatomic, readonly, copy) NSString *attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (readonly) Class superclass;

- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_typedBackingStore;
- (id)attribute;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1 attribute:(id)arg2;
- (void)setAttribute:(id)arg1;
- (void)setIdentifiers:(id)arg1;

@end

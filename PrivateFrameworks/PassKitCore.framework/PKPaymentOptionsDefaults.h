/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentOptionsDefaults : NSObject <PKPaymentOptionsProtocol> {
    NSDictionary * _defaultBillingAddresses;
    CNContact * _defaultContactEmail;
    CNContact * _defaultContactName;
    CNContact * _defaultContactPhone;
    CNContact * _defaultShippingAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *defaultBillingAddresses;
@property (nonatomic, retain) CNContact *defaultContactEmail;
@property (nonatomic, retain) CNContact *defaultContactName;
@property (nonatomic, retain) CNContact *defaultContactPhone;
@property (nonatomic, retain) CNContact *defaultShippingAddress;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaults;

- (void).cxx_destruct;
- (id)_contactForKeychainKey:(id)arg1;
- (void)_deleteKeychainDataForKey:(id)arg1;
- (void)_hardDeleteDefaultBillingAddress;
- (id)_keychainDataForKey:(id)arg1;
- (id)_rawDefaultBillingAddresses;
- (void)_setContact:(id)arg1 forKeychainKey:(id)arg2;
- (void)_setContact:(id)arg1 property:(id)arg2 forKeychainKey:(id)arg3;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)defaultBillingAddressForPaymentPass:(id)arg1;
- (id)defaultBillingAddresses;
- (id)defaultContactEmail;
- (id)defaultContactName;
- (id)defaultContactPhone;
- (id)defaultShippingAddress;
- (void)deleteAllDefaults;
- (void)deleteDefaultBillingAddress:(id)arg1;
- (void)deleteDefaultContactEmail;
- (void)deleteDefaultContactName;
- (void)deleteDefaultContactPhone;
- (void)deleteDefaultForContactKey:(id)arg1;
- (void)deleteDefaultShippingAddress;
- (void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
- (void)setDefaultContactEmail:(id)arg1;
- (void)setDefaultContactName:(id)arg1;
- (void)setDefaultContactPhone:(id)arg1;
- (void)setDefaultShippingAddress:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {
    NSArray * _additionalDeviceSerialNumbers;
    NSString * _companionSerialNumber;
    bool  _devSigned;
    NSString * _deviceSerialNumber;
    NSString * _productType;
    NSString * _secureElementIdentifier;
    NSString * _signedAuthToken;
    NSArray * _stateInformation;
}

@property (nonatomic, copy) NSArray *additionalDeviceSerialNumbers;
@property (nonatomic, copy) NSString *companionSerialNumber;
@property (nonatomic) bool devSigned;
@property (nonatomic, copy) NSString *deviceSerialNumber;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic, copy) NSString *signedAuthToken;
@property (nonatomic, copy) NSArray *stateInformation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalDeviceSerialNumbers;
- (id)companionSerialNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)devSigned;
- (id)deviceSerialNumber;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)productType;
- (id)secureElementIdentifier;
- (void)setAdditionalDeviceSerialNumbers:(id)arg1;
- (void)setCompanionSerialNumber:(id)arg1;
- (void)setDevSigned:(bool)arg1;
- (void)setDeviceSerialNumber:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setSignedAuthToken:(id)arg1;
- (void)setStateInformation:(id)arg1;
- (id)signedAuthToken;
- (id)stateInformation;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INListRideOptionsIntentResponse : INIntentResponse {
    _INPBListRideOptionsIntentResponse * _responseMessagePBRepresentation;
}

@property (nonatomic, readonly) long long code;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSArray *paymentMethods;
@property (nonatomic, copy) NSArray *rideOptions;
@property (nonatomic, copy) NSNumber *supportsApplePayForPayment;

+ (long long)_codeFromErrorCode:(int)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_responseMessagePBRepresentation;
- (long long)code;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)paymentMethods;
- (id)rideOptions;
- (void)setExpirationDate:(id)arg1;
- (void)setPaymentMethods:(id)arg1;
- (void)setRideOptions:(id)arg1;
- (void)setSupportsApplePayForPayment:(id)arg1;
- (id)supportsApplePayForPayment;

@end

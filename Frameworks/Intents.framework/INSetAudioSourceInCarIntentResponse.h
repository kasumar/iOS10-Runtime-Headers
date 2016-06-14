/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetAudioSourceInCarIntentResponse : INIntentResponse {
    _INPBSetAudioSourceInCarIntentResponse * _responseMessagePBRepresentation;
}

@property (nonatomic, readonly) long long code;

+ (long long)_codeFromErrorCode:(int)arg1;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_responseMessagePBRepresentation;
- (long long)code;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

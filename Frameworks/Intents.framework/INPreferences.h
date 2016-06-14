/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPreferences : NSObject {
    _INVocabularyConnection * _assistantdConnection;
    NSString * _cachedSiriLanguageCode;
}

@property (setter=_setCachedSiriLanguageCode:, copy) NSString *_cachedSiriLanguageCode;

+ (void)requestSiriAuthorization:(id /* block */)arg1;
+ (id)sharedPreferences;
+ (long long)siriAuthorizationStatus;
+ (id)siriLanguageCode;

- (void).cxx_destruct;
- (id)_cachedSiriLanguageCode;
- (id)_init;
- (void)_setCachedSiriLanguageCode:(id)arg1;
- (long long)_siriAuthorizationStatus;
- (id)_siriLanguageCode;
- (void)_updateWithExtensionContext:(id)arg1;
- (id)init;
- (void)requestSiriAuthorization:(id /* block */)arg1;

@end

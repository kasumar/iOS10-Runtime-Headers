/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDServerEnvironmentURLRequest : CKDURLRequest {
    long long  _environment;
}

@property (nonatomic) long long environment;

- (bool)allowsAnonymousAccount;
- (bool)allowsAuthedAccount;
- (long long)environment;
- (bool)hasRequestBody;
- (long long)partitionType;
- (void)requestDidParseJSONObject:(id)arg1;
- (bool)requiresConfiguration;
- (bool)requiresDeviceID;
- (bool)requiresSignature;
- (long long)serverType;
- (void)setEnvironment:(long long)arg1;
- (id)url;

@end

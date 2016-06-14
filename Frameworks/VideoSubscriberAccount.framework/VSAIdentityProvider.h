/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAIdentityProvider : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appAdamID;
    NSURL * _appStoreRoomURL;
    NSURL * _authenticationURL;
    NSURL * _certificateURL;
    NSString * _displayName;
    NSString * _providerID;
}

@property (nonatomic, copy) NSString *appAdamID;
@property (nonatomic, copy) NSURL *appStoreRoomURL;
@property (nonatomic, copy) NSURL *authenticationURL;
@property (nonatomic, copy) NSURL *certificateURL;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *providerID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)appStoreRoomURL;
- (id)authenticationURL;
- (id)certificateURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)providerID;
- (void)setAppAdamID:(id)arg1;
- (void)setAppStoreRoomURL:(id)arg1;
- (void)setAuthenticationURL:(id)arg1;
- (void)setCertificateURL:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setProviderID:(id)arg1;

@end

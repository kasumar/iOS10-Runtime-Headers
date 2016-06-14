/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSResourceAuthorizationRequest : VSRequest {
    bool  _forceAuthentication;
    NSString * _localizedResourceTitle;
    NSURL * _resourceURL;
    NSData * _userInfoJSON;
}

@property (nonatomic) bool forceAuthentication;
@property (nonatomic, copy) NSString *localizedResourceTitle;
@property (nonatomic, copy) NSURL *resourceURL;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, retain) NSData *userInfoJSON;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceAuthentication;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedResourceTitle;
- (id)resourceURL;
- (void)setForceAuthentication:(bool)arg1;
- (void)setLocalizedResourceTitle:(id)arg1;
- (void)setResourceURL:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoJSON:(id)arg1;
- (id)userInfo;
- (id)userInfoJSON;

@end

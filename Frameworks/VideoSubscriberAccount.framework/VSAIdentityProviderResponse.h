/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAIdentityProviderResponse : NSObject {
    VSAAccount * _account;
    VSAccountMetadata * _accountMetadata;
    VSResourceAuthorization * _authorization;
}

@property (nonatomic, retain) VSAAccount *account;
@property (nonatomic, copy) VSAccountMetadata *accountMetadata;
@property (nonatomic, copy) VSResourceAuthorization *authorization;

- (void).cxx_destruct;
- (id)account;
- (id)accountMetadata;
- (id)authorization;
- (void)setAccount:(id)arg1;
- (void)setAccountMetadata:(id)arg1;
- (void)setAuthorization:(id)arg1;

@end

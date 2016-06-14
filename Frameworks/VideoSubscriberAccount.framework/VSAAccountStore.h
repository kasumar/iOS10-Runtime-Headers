/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAAccountStore : NSObject {
    id  _changeObserver;
    VSAKeychainEditingContext * _keychainEditingContext;
}

@property (nonatomic, readonly, copy) NSArray *accounts;
@property (nonatomic) id changeObserver;
@property (nonatomic, retain) VSAKeychainEditingContext *keychainEditingContext;

- (void).cxx_destruct;
- (id)_accountForKeychainItem:(id)arg1;
- (id)_keychainItemsWithLimit:(unsigned long long)arg1;
- (void)_underlyingDataDidChange;
- (id)accounts;
- (id)changeObserver;
- (void)dealloc;
- (id)firstAccount;
- (id)init;
- (id)keychainEditingContext;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setChangeObserver:(id)arg1;
- (void)setKeychainEditingContext:(id)arg1;

@end

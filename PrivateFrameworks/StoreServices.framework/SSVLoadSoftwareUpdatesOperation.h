/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVLoadSoftwareUpdatesOperation : SSVLoadDownloadQueueOperation {
    NSArray * _appMetadata;
    NSLock * _lock;
    long long  _reason;
    NSArray * _specificApps;
    id /* block */  _updatesBlock;
    NSString * _userAgent;
}

@property long long reason;
@property (copy) id /* block */ updatesBlock;
@property (copy) NSString *userAgent;

- (void).cxx_destruct;
- (id)_account;
- (id)_copySoftwareUpdatesPropertyListWithApplications:(id)arg1 withDictionary:(id)arg2;
- (id)_getItemsFromDictionary:(id)arg1;
- (id)_handleResponse:(id)arg1;
- (id)_newBodyDataWithBodyPlist:(id)arg1 error:(id*)arg2;
- (id)_newRequestPropertiesWithBodyData:(id)arg1;
- (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;
- (id)_newURLOperation:(id)arg1 error:(id*)arg2;
- (id)_newUpdateQueueOperation:(id)arg1;
- (void)_sendPowerLogStartEvent;
- (void)_sendPowerLogStopEventWithUpdates:(id)arg1;
- (bool)_shouldPerformAutomaticUpdates;
- (void)addKeybagSyncToBody:(id)arg1;
- (id)initWithApplicationMetadata:(id)arg1;
- (id)initWithApplications:(id)arg1;
- (void)lock;
- (void)main;
- (long long)reason;
- (void)setReason:(long long)arg1;
- (void)setUpdatesBlock:(id /* block */)arg1;
- (void)setUserAgent:(id)arg1;
- (void)unlock;
- (id /* block */)updatesBlock;
- (id)userAgent;

@end

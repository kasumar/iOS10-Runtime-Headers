/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSubscriptionList : FCPrivateZoneController <FCMutedTagIDsProviding> {
    NSMutableDictionary * _mutableSubscriptionsBySubscriptionID;
    NSSet * _mutedSubscribedTagIDs;
    NSDictionary * _pendingSubscriptionsBySubscriptionID;
    NSSet * _subscribedTagIDs;
    NSDictionary * _subscriptionsBySubscriptionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *mutableSubscriptionsBySubscriptionID;
@property (nonatomic, copy) NSSet *mutedSubscribedTagIDs;
@property (nonatomic, readonly, copy) NSSet *mutedTagIDs;
@property (nonatomic, copy) NSDictionary *pendingSubscriptionsBySubscriptionID;
@property (nonatomic, copy) NSSet *subscribedTagIDs;
@property (nonatomic, copy) NSDictionary *subscriptionsBySubscriptionID;
@property (readonly) Class superclass;

+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)mutedSubscriptionIDForTagID:(id)arg1;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;
+ (id)subscriptionIDForTagID:(id)arg1;
+ (id)subscriptionIDForUrl:(id)arg1;

- (void).cxx_destruct;
- (void)_addRemoteSubscriptions:(id)arg1;
- (void)_localAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 removeSubscriptions:(id)arg3;
- (void)_modifyRemoteSubscriptions:(id)arg1;
- (void)_regenerateSortedSubscriptions;
- (void)_removeRemoteSubscription:(id)arg1;
- (id)_subscriptionFromRecord:(id)arg1;
- (bool)addMutedSubscriptionForTagID:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addPendingSubscription:(id)arg1;
- (id)addSubscriptionForTagID:(id)arg1;
- (id)addSubscriptionForTagID:(id)arg1 notificationsEnabled:(bool)arg2;
- (id)addSubscriptionForTagID:(id)arg1 replacingPendingSubscriptionWithPollingURL:(id)arg2;
- (bool)canAddSubscription;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (bool)hasMutedSubscriptionForTagID:(id)arg1;
- (bool)hasNotificationsEnabledForTagID:(id)arg1;
- (bool)hasSubscriptionForTagID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (void)modifyPendingSubscription:(id)arg1;
- (id)mutableSubscriptionsBySubscriptionID;
- (id)mutedSubscribedTagIDs;
- (id)mutedTagIDs;
- (id)pendingSubscriptionForPollingURL:(id)arg1;
- (id)pendingSubscriptionsBySubscriptionID;
- (void)removeMutedSubscriptionForTagID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removePendingSubscription:(id)arg1;
- (void)removeSubscriptionForTagID:(id)arg1;
- (void)setMutableSubscriptionsBySubscriptionID:(id)arg1;
- (void)setMutedSubscribedTagIDs:(id)arg1;
- (bool)setNotificationsEnabled:(bool)arg1 forTagID:(id)arg2;
- (void)setPendingSubscriptionsBySubscriptionID:(id)arg1;
- (void)setSubscribedTagIDs:(id)arg1;
- (void)setSubscriptionsBySubscriptionID:(id)arg1;
- (id)subscribedTagIDs;
- (id)subscriptionForTagID:(id)arg1;
- (id)subscriptionsBySubscriptionID;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper> {
    NSSet * _disabledBundleIDs;
    NSSet * _knownBundleIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canFetchAllContainersByID;
- (bool)cloudSyncTCCDisabledForContainerMeta:(id)arg1;
- (id)fetchAllContainersByID;
- (id)fetchContainerForURL:(id)arg1;
- (id)init;

@end

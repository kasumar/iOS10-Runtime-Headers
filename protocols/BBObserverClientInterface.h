/* Generated by RuntimeBrowser.
 */

@protocol BBObserverClientInterface

@required

- (void)getObserverDebugInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)noteAlertBehaviorOverrideStateChanged:(NSNumber *)arg1;
- (void)noteAlertBehaviorOverridesChanged:(NSNumber *)arg1;
- (void)noteServerReceivedResponseForBulletin:(BBBulletin *)arg1;
- (void)removeSection:(NSString *)arg1;
- (void)updateBulletin:(BBObserverBulletinUpdate *)arg1 forFeeds:(unsigned long long)arg2;
- (void)updateBulletin:(void *)arg1 forFeeds:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: BBObserverBulletinUpdate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateSectionInfo:(BBSectionInfo *)arg1;
- (void)updateSectionOrder:(NSArray *)arg1;
- (void)updateSectionOrderRule:(NSNumber *)arg1;
- (void)updateSectionParameters:(BBSectionParameters *)arg1 forSectionID:(NSString *)arg2;

@end

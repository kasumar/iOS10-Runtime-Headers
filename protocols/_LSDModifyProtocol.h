/* Generated by RuntimeBrowser.
 */

@protocol _LSDModifyProtocol

@required

- (void)rebuildApplicationDatabasesForSystem:(void *)arg1 internal:(void *)arg2 user:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)registerExtensionPoint:(void *)arg1 withInfo:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)registerItemInfo:(void *)arg1 alias:(void *)arg2 diskImageAlias:(void *)arg3 bundleURL:(void *)arg4 installationPlist:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 15: LSRegistrationInfo *, NSData *, NSData *, NSURL *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned int, NSArray *, bool, NSError *, void*
- (void)removeHandlerForContentType:(void *)arg1 roles:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)removeHandlerForURLScheme:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)resetServerStoreWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setDatabaseIsSeeded:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setHandler:(void *)arg1 version:(void *)arg2 forURLScheme:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setHandler:(void *)arg1 version:(void *)arg2 roles:(void *)arg3 forContentType:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, unsigned long long, unsigned int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setHandlerOptions:(void *)arg1 forContentType:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: unsigned int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)synchronizeWithMobileInstallation;
- (void)updateApplication:(void *)arg1 mobileInstallationChanges:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end

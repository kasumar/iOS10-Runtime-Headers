/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreConnectionInfo : NSObject {
    NSPersistentStoreCoordinator * _coordinator;
    NSDictionary * _entitlements;
    int  _lock;
    struct { 
        unsigned int val[8]; 
    }  _token;
    id  _userInfo;
}

- (struct { unsigned int x1[8]; })auditToken;
- (void)dealloc;
- (id)description;
- (id)entitlements;
- (id)initForToken:(struct { unsigned int x1[8]; })arg1 entitlementNames:(id)arg2 coordinator:(id)arg3;
- (id)persistentStoreCoordinator;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end

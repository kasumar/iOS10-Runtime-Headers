/* Generated by RuntimeBrowser.
 */

@protocol BLTObjectCacheDelegate <NSObject>

@required

- (void)objectCache:(void *)arg1 keysWithBlock:(void *)arg2; // needs 2 arg types, found 7: BLTObjectCache *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)objectCache:(void *)arg1 objectForKey:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 8: BLTObjectCache *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, void*
- (void)objectCache:(void *)arg1 removeObjectForKey:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 8: BLTObjectCache *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)objectCache:(void *)arg1 storeObject:(void *)arg2 withKey:(void *)arg3 withBlock:(void *)arg4; // needs 4 arg types, found 9: BLTObjectCache *, NSObject *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

@interface PRLikenessCache : NSObject {
    NSURL * _cacheDirectory;
    NSObject<OS_dispatch_queue> * _cacheLookupQueue;
    NSCache * _inMemoryCache;
    bool  _renderIfNeeded;
    bool  _useFilesystem;
    bool  _useMemory;
}

@property (nonatomic, retain) NSURL *cacheDirectory;
@property (nonatomic) bool renderIfNeeded;
@property (nonatomic) bool useFilesystem;
@property (nonatomic) bool useMemory;

+ (id)_applicationCacheDirectory;
+ (bool)_ensureExistenceOfDirectory:(id)arg1;
+ (id)_imageAtURL:(id)arg1;
+ (id)_propertyValueForURL:(id)arg1 forKey:(id)arg2;
+ (bool)_purgeOldCacheFilesInDirectory:(id)arg1;
+ (bool)_removeImageAtURL:(id)arg1;
+ (id)_staticRepresentationCacheURL;
+ (bool)_writeImage:(id)arg1 toURL:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cacheKeyForLikeness:(id)arg1 cacheSize:(unsigned long long)arg2;
- (id)_cacheURLForLikeness:(id)arg1 cacheSize:(unsigned long long)arg2;
- (void)_fetchFromFilesystem:(id)arg1 desiredCacheSize:(unsigned long long)arg2 renderBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_fetchFromMemory:(id)arg1 desiredCacheSize:(unsigned long long)arg2 renderBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_fetchWithReadBlock:(id /* block */)arg1 writeBlock:(id /* block */)arg2 renderBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_renderImageForLikeness:(id)arg1 desiredCacheSize:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)cacheDirectory;
- (void)imageForLikeness:(id)arg1 desiredCacheSize:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (bool)renderIfNeeded;
- (void)setCacheDirectory:(id)arg1;
- (void)setRenderIfNeeded:(bool)arg1;
- (void)setUseFilesystem:(bool)arg1;
- (void)setUseMemory:(bool)arg1;
- (bool)useFilesystem;
- (bool)useMemory;

@end

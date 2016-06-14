/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUEffectCache : NSObject {
    NSObject<OS_dispatch_queue> * _blurQueue;
    NSCache * _effectCache;
    NSOperationQueue * _effectQueue;
}

@property unsigned long long countLimit;

- (void).cxx_destruct;
- (id)_blurredImageWithImage:(id)arg1 settings:(id)arg2;
- (id)_effectImageWithImage:(id)arg1 settings:(id)arg2;
- (id)_imageKeyForImage:(id)arg1;
- (unsigned long long)countLimit;
- (void)effectImageWithImage:(id)arg1 settings:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)setCountLimit:(unsigned long long)arg1;

@end

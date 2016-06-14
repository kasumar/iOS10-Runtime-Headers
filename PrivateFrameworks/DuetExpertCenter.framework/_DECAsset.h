/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECAsset : NSObject {
    NSString * _fileName;
    int  _notificationToken;
    id /* block */  _onUpdate;
    NSString * _resourcePath;
}

+ (id)assetFromPlistWithClass:(Class)arg1 onUpdate:(id /* block */)arg2;
+ (int)assetVersion;
+ (id)bundlePath;
+ (int)compatibilityVersion;
+ (void)downloadInitialAssetMetadata;
+ (void)initialize;
+ (int)resourceVersion;
+ (void)updateAssetMetadata;

- (void).cxx_destruct;
- (id)abGroupContents;
- (id)contentsAsDictionary;
- (void)dealloc;
- (id)init;
- (id)initWithBundlePath:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 onUpdate:(id /* block */)arg4;
- (id)initWithFileName:(id)arg1 fileExtension:(id)arg2 onUpdate:(id /* block */)arg3;
- (id)path;
- (id)rawContentsAsDictionary;
- (void)setUpdateBlock:(id /* block */)arg1;

@end

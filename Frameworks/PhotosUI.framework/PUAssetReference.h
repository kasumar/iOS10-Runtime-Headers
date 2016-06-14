/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetReference : NSObject <NSCopying> {
    <PUDisplayAsset> * _asset;
    <PUDisplayAssetCollection> * _assetCollection;
    NSString * _dataSourceIdentifier;
    NSIndexPath * _indexPath;
}

@property (nonatomic, readonly) <PUDisplayAsset> *asset;
@property (nonatomic, readonly) <PUDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) NSString *dataSourceIdentifier;
@property (nonatomic, readonly) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (id)asset;
- (id)assetCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSourceIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)indexPath;
- (id)init;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;

@end

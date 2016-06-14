/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexMobileAssetSongAsset : FlexCloudSongAsset {
    NSString * _assetType;
    ASAsset * _mobileAsset;
}

@property (readonly) NSString *assetType;
@property (readonly) ASAsset *mobileAsset;

- (void).cxx_destruct;
- (id)_allCachedMetadataForAssetType:(id)arg1;
- (id)_assetCachedMetadata;
- (id)assetType;
- (long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1;
- (bool)contentUpdateAvaliable;
- (long long)contentVersionForAssetLocation:(unsigned long long)arg1;
- (id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 cloudManager:(id)arg4 assetType:(id)arg5 asset:(id)arg6;
- (id)mobileAsset;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResource : NSObject {
    NSString * _assetLocalIdentifier;
    bool  _derivative;
    NSURL * _fileURL;
    bool  _locallyAvailable;
    NSString * _originalFilename;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
    id /* block */  _privateFileLoader;
    NSURL * _privateFileURL;
    long long  _resourceType;
    NSString * _uniformTypeIdentifier;
}

@property (setter=_setAssetLocalIdentifier:, nonatomic, copy) NSString *assetLocalIdentifier;
@property (getter=isDerivative, nonatomic, readonly) bool derivative;
@property (setter=_setFileURL:, nonatomic, retain) NSURL *fileURL;
@property (getter=isLibraryAssetResource, nonatomic, readonly) bool libraryAssetResource;
@property (getter=isLocallyAvailable, setter=_setIsLocallyAvailable:, nonatomic) bool locallyAvailable;
@property (setter=_setOriginalFilename:, nonatomic, copy) NSString *originalFilename;
@property (setter=_setPixelHeight:, nonatomic) unsigned long long pixelHeight;
@property (setter=_setPixelWidth:, nonatomic) unsigned long long pixelWidth;
@property (setter=_setPrivateFileLoader:, nonatomic, copy) id /* block */ privateFileLoader;
@property (setter=_setPrivateFileURL:, nonatomic, retain) NSURL *privateFileURL;
@property (nonatomic, readonly) long long type;
@property (setter=_setUniformTypeIdentifier:, nonatomic, copy) NSString *uniformTypeIdentifier;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)assetResourcesForAsset:(id)arg1;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(bool)arg2;
+ (id)assetResourcesForLivePhoto:(id)arg1;

- (void).cxx_destruct;
- (void)_setAssetLocalIdentifier:(id)arg1;
- (void)_setFileURL:(id)arg1;
- (void)_setIsLocallyAvailable:(bool)arg1;
- (void)_setOriginalFilename:(id)arg1;
- (void)_setPixelHeight:(unsigned long long)arg1;
- (void)_setPixelWidth:(unsigned long long)arg1;
- (void)_setPrivateFileLoader:(id /* block */)arg1;
- (void)_setPrivateFileURL:(id)arg1;
- (void)_setUniformTypeIdentifier:(id)arg1;
- (id)assetLocalIdentifier;
- (id)description;
- (id)fileURL;
- (id)initWithResourceType:(long long)arg1;
- (bool)isDerivative;
- (bool)isLibraryAssetResource;
- (bool)isLocallyAvailable;
- (id)originalFilename;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id /* block */)privateFileLoader;
- (id)privateFileURL;
- (long long)type;
- (id)uniformTypeIdentifier;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

+ (id)vcp_allResourcesForAsset:(id)arg1;
+ (id)vcp_largestLocalMovieResourceForAsset:(id)arg1;
+ (id)vcp_largestMovieDerivativeResourceForAsset:(id)arg1;
+ (id)vcp_originalResourceForAsset:(id)arg1;
+ (id)vcp_resourceForAsset:(id)arg1 withType:(unsigned long long)arg2;
+ (id)vcp_thumbnailResourceForAsset:(id)arg1;

- (unsigned long long)vcp_fileSize;
- (bool)vcp_isJPEG;
- (bool)vcp_isLocallyAvailable;
- (bool)vcp_isMovie;
- (bool)vcp_isPhoto;
- (struct CGSize { double x1; double x2; })vcp_size;
- (id)vcp_url;

@end

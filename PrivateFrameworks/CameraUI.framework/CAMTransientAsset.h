/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTransientAsset : NSObject <PUTransientDisplayAsset> {
    bool  _HDR;
    NSString * _burstIdentifier;
    bool  _canPlayPhotoIris;
    NSDate * _creationDate;
    double  _duration;
    bool  _isPhotoIrisPlaceholder;
    unsigned long long  _mediaType;
    NSDate * _modificationDate;
    unsigned long long  _numberOfRepresentedAssets;
    NSURL * _persistenceURL;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoIrisStillDisplayTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoIrisVideoDuration;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
    UIImage * _placeholderImage;
    bool  _representsBurst;
    NSString * _uuid;
}

@property (getter=isHDR, nonatomic, readonly) bool HDR;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) bool canPlayPhotoIris;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) unsigned long long fullsizeDataFormat;
@property (nonatomic, readonly) bool hasPhotoColorAdjustments;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPhotoIrisPlaceholder;
@property (nonatomic, readonly) bool isTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned long long numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisStillDisplayTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisVideoDuration;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) bool representsBurst;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (void)_populateStillImageTransientAssetFromConvertible:(id)arg1;
- (void)_populateVideoTransientAssetFromConvertible:(id)arg1;
- (double)aspectRatio;
- (id)burstIdentifier;
- (bool)canPlayPhotoIris;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (double)duration;
- (unsigned long long)fullsizeDataFormat;
- (bool)hasPhotoColorAdjustments;
- (id)init;
- (id)initWithAsset:(id)arg1 convertible:(id)arg2;
- (id)initWithAsset:(id)arg1 uuid:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (unsigned long long)isContentEqualTo:(id)arg1;
- (bool)isFavorite;
- (bool)isHDR;
- (bool)isPhotoIrisPlaceholder;
- (bool)isTemporaryPlaceholder;
- (id)localizedGeoDescription;
- (unsigned long long)mediaType;
- (id)modificationDate;
- (unsigned long long)numberOfRepresentedAssets;
- (id)persistenceURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)placeholderImage;
- (bool)representsBurst;
- (id)uuid;

@end

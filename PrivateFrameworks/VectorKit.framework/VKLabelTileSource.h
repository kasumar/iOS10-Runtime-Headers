/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelTileSource : VKTileSetBackedTileSource {
    struct shared_ptr<md::LabelManager> { 
        struct LabelManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _labelManager;
    unsigned char  _labelScaleFactor;
    bool  _localizeLabels;
}

@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) bool localizeLabels;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)_labelTileType;
- (void)dealloc;
- (long long)defaultMaximumZoomLevel;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 labelManager:(const struct shared_ptr<md::LabelManager> { struct LabelManager {} *x1; struct __shared_weak_count {} *x2; }*)arg5;
- (unsigned char)labelScaleFactor;
- (bool)localizeLabels;
- (bool)maximumZoomLevelBoundsCamera;
- (bool)minimumZoomLevelBoundsCamera;
- (void)setLabelScaleFactor:(unsigned char)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (bool)shouldObeyHybridUnavailableRegions;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;

@end

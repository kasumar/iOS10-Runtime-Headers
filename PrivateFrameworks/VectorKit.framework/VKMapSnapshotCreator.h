/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapSnapshotCreator : NSObject <VKImageCanvasDelegate> {
    id /* block */  _completion;
    bool  _didBecomeFullyDrawn;
    GGLImageCanvas * _displayTarget;
    VKGlobeImageCanvas * _globeCanvas;
    bool  _hasFailedTiles;
    NSLocale * _locale;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKMapImageCanvas * _mapCanvas;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    long long  _mapType;
    VKMemoryObserver * _memoryObserver;
    struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; bool x5; float x6; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_7_1_3; } x7; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_8_1_1; } x8; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_9_1_1; struct __shared_weak_count {} *x_9_1_2; } x9; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_10_1_1; } x10; struct Texture2D {} *x11; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_12_1_1; } x12; } * _renderer;
}

@property (nonatomic) long long labelScaleFactor;
@property (nonatomic) bool localizeLabels;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;
@property (nonatomic) long long mapType;
@property (nonatomic) bool showsBuildings;
@property (nonatomic) bool showsPointsOfInterest;
@property (readonly) struct CGSize { double x1; double x2; } size;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (bool)supportsHighResolutionSnapshots;
+ (bool)supportsSharingThumbnails;

- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
- (id)activeCanvas;
- (void)cancel;
- (void)cancelFlushingTileDecodes:(bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
- (void)imageCanvasWillBecomeFullyDrawn:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 homeQueue:(id)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5;
- (bool)isRoadClassDisabled:(int)arg1;
- (long long)labelScaleFactor;
- (bool)localizeLabels;
- (void)lookAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })mapDisplayStyle;
- (long long)mapType;
- (void)renderRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)renderSnapshot:(id /* block */)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setLabelScaleFactor:(long long)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setMapType:(long long)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (struct CGSize { double x1; double x2; })size;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_configureFromDefaults;
- (void)_mapkit_configureWithOptions:(id)arg1;

@end

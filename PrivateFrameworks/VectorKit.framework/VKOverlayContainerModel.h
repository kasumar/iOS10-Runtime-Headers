/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKOverlayContainerModel : VKMapTileModel <VKMapLayer, VKRouteContextObserver, VKRouteMatchedAnnotationPresentationObserver, VKStyleManagerObserver> {
    unsigned char  _applicationState;
    struct unique_ptr<md::RouteLineArrowSharedResources, std::__1::default_delete<md::RouteLineArrowSharedResources> > { 
        struct __compressed_pair<md::RouteLineArrowSharedResources *, std::__1::default_delete<md::RouteLineArrowSharedResources> > { 
            struct RouteLineArrowSharedResources {} *__first_; 
        } __ptr_; 
    }  _arrowSharedResources;
    struct ClearItem { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; bool x3; float x4; unsigned char x5; unsigned int x6; } * _clearItem;
    <VKOverlayContainerDelegate> * _delegate;
    bool  _isShowingOuterHaloOnLabels;
    NSMutableArray * _overlayPainters;
    NSMutableSet * _overlaysToAdd;
    NSMapTable * _overlaysToPainters;
    NSMutableSet * _overlaysToRemove;
    NSMutableSet * _paintersToRemove;
    NSMutableSet * _persistentOverlays;
    NSMapTable * _persistentOverlaysToPainters;
    VKRouteContext * _routeContext;
    <VKRouteMatchedAnnotationPresentation> * _routeLineSplitAnnotation;
    struct unique_ptr<md::RouteLineSharedResources, std::__1::default_delete<md::RouteLineSharedResources> > { 
        struct __compressed_pair<md::RouteLineSharedResources *, std::__1::default_delete<md::RouteLineSharedResources> > { 
            struct RouteLineSharedResources {} *__first_; 
        } __ptr_; 
    }  _routeSharedResources;
    bool  _shouldCheckForOcclusion;
    bool  _shouldOccludeTraffic;
    bool  _shouldShowTraffic;
    VKSkyModel * _skyModel;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    NSMutableSet * _visibleOverlays;
}

@property (nonatomic, readonly) const struct RouteLineArrowSharedResources { struct RouteLineArrowSharedPipelineStates { struct shared_ptr<ggl::RouteLineArrow::BasePipelineState> { struct BasePipelineState {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; } x1; /* Warning: unhandled struct encoding: '{RouteLineArrowSharedRenderStates={unique_ptr<ggl::RenderState' */ struct x2; void*x3; void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; const void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; long x40; void*x41; SEL x42; void*x43; SEL x44; void*x45; void*x46; void*x47; void*x48; void*x49; in void*x50; double x51; void*x52; void*x53; void*x54; const void*x55; unsigned int x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; struct x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; short x90; void*x91; void*x92; void*x93; const void*x94; void*x95; void*x96; BOOL x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; in void*x107; double x108; void*x109; void*x110; void*x111; const void*x112; unsigned int x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; struct x123; void*x124; }*arrowSharedResources; /* unknown property attribute:  std::__1::default_delete<ggl::RenderState> >=^{RenderState}}}}{shared_ptr<ggl::Texture2D>=^{Texture2D}^{__shared_weak_count}}} */
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKOverlayContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInRealisticMode, nonatomic, readonly) bool inRealisticMode;
@property (getter=isInTransitMode, nonatomic, readonly) bool inTransitMode;
@property (nonatomic, readonly) bool isShowingOuterHaloOnLabels;
@property (nonatomic, readonly) NSSet *persistentOverlays;
@property (nonatomic, retain) VKRouteContext *routeContext;
@property (nonatomic, retain) <VKRouteMatchedAnnotationPresentation> *routeLineSplitAnnotation;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{RouteLineSharedResources={RouteLineSharedRenderStates={unique_ptr<ggl::RenderState' */ struct *routeSharedResources; /* unknown property attribute:  true> >=f}}}}} */
@property (nonatomic) bool shouldCheckForOcclusion;
@property (nonatomic) bool shouldOccludeTraffic;
@property (nonatomic) bool shouldShowTraffic;
@property (nonatomic, retain) VKSkyModel *skyModel;
@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (readonly) Class superclass;

+ (bool)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updatePainterOrdering;
- (void)addPainterToRemove:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)annotationPresentationDidChangePresentationCoordinate:(id)arg1;
- (const struct RouteLineArrowSharedResources { struct RouteLineArrowSharedPipelineStates { struct shared_ptr<ggl::RouteLineArrow::BasePipelineState> { struct BasePipelineState {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_1_1_1; } x1; struct RouteLineArrowSharedRenderStates { struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_1_2_1; } x_2_1_1; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_2_2_1; } x_2_1_2; } x2; struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x_3_1_1; struct __shared_weak_count {} *x_3_1_2; } x3; }*)arrowSharedResources;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (bool)isInRealisticMode;
- (bool)isInTransitMode;
- (bool)isShowingOuterHaloOnLabels;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2;
- (unsigned long long)mapLayerPosition;
- (id)persistentOverlays;
- (void)removePersistentOverlay:(id)arg1;
- (void)reset;
- (id)routeContext;
- (void)routeContextStateDidChange:(id)arg1;
- (id)routeLineSplitAnnotation;
- (const struct RouteLineSharedResources { struct RouteLineSharedRenderStates { struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_1_2_1; } x_1_1_1; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_3_2_1; } x_1_1_3; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_4_2_1; } x_1_1_4; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_5_2_1; } x_1_1_5; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_6_2_1; } x_1_1_6; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_7_2_1; } x_1_1_7; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_8_2_1; } x_1_1_8; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_9_2_1; } x_1_1_9; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_10_2_1; } x_1_1_10; struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { struct RenderState {} *x_1_3_1; } x_11_2_1; } x_1_1_11; } x1; struct RouteLineSharedPipelineStates { struct shared_ptr<ggl::RouteLine::BasePipelineState> { struct BasePipelineState {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_2_1_1; struct shared_ptr<ggl::PatternedRibbon::RoutePipelineState> { struct RoutePipelineState {} *x_2_2_1; struct __shared_weak_count {} *x_2_2_2; } x_2_1_2; struct shared_ptr<ggl::RouteLineAlphaReset::BasePipelineState> { struct BasePipelineState {} *x_3_2_1; struct __shared_weak_count {} *x_3_2_2; } x_2_1_3; struct shared_ptr<ggl::RouteLineTraffic::BasePipelineState> { struct BasePipelineState {} *x_4_2_1; struct __shared_weak_count {} *x_4_2_2; } x_2_1_4; } x2; struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { struct Texture2D {} *x_1_2_1; } x_3_1_1; } x3; struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { struct Texture2D {} *x_1_2_1; } x_4_1_1; } x4; struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> > { struct __compressed_pair<ggl::Texture2D *, std::__1::default_delete<ggl::Texture2D> > { struct Texture2D {} *x_1_2_1; } x_5_1_1; } x5; struct AlphaAtlas {} *x6; struct DashTextureCache { struct unordered_map<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture>, md::DashTextureCache::KeyHasher, std::__1::equal_to<md::DashTextureCache::Key>, std::__1::allocator<std::__1::pair<const md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> > > > { struct __hash_table<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, std::__1::__unordered_map_hasher<md::DashTextureCache::Key, std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, md::DashTextureCache::KeyHasher, true>, std::__1::__unordered_map_equal<md::DashTextureCache::Key, std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, std::__1::equal_to<md::DashTextureCache::Key>, true>, std::__1::allocator<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> *> > { unsigned long long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<md::DashTextureCache::Key, std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, md::DashTextureCache::KeyHasher, true> > { unsigned long long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<md::DashTextureCache::Key, std::__1::__hash_value_type<md::DashTextureCache::Key, std::__1::shared_ptr<md::DashTexture> >, std::__1::equal_to<md::DashTextureCache::Key>, true> > { float x_4_4_1; } x_1_3_4; } x_1_2_1; } x_7_1_1; } x7; }*)routeSharedResources;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setShouldCheckForOcclusion:(bool)arg1;
- (void)setShouldOccludeTraffic:(bool)arg1;
- (void)setShouldShowTraffic:(bool)arg1;
- (void)setSkyModel:(id)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)shouldCheckForOcclusion;
- (bool)shouldLayoutWithoutStyleManager;
- (bool)shouldOccludeTraffic;
- (bool)shouldShowTraffic;
- (id)skyModel;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (void)stylesheetDidChange;

@end

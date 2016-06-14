/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadMapModel : VKVectorMapModel <VKStyleManagerObserver> {
    struct ClearItem { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; bool x3; float x4; unsigned char x5; unsigned int x6; } * _clearItem;
    int  _extraStencil;
    double  _layoutTimestamp;
    unsigned long long  _mapLayerPosition;
    struct unique_ptr<md::PatternedSharedResources, std::__1::default_delete<md::PatternedSharedResources> > { 
        struct __compressed_pair<md::PatternedSharedResources *, std::__1::default_delete<md::PatternedSharedResources> > { 
            struct PatternedSharedResources {} *__first_; 
        } __ptr_; 
    }  _patternedSharedResources;
    struct unique_ptr<md::RoadSharedResources, std::__1::default_delete<md::RoadSharedResources> > { 
        struct __compressed_pair<md::RoadSharedResources *, std::__1::default_delete<md::RoadSharedResources> > { 
            struct RoadSharedResources {} *__first_; 
        } __ptr_; 
    }  _roadSharedResources;
    int  _sourceTileZtoStencilOffset;
    bool  _trafficEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double layoutTimestamp;
@property (nonatomic) unsigned long long mapLayerPosition;
@property (nonatomic, readonly) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (readonly) Class superclass;
@property (nonatomic) bool trafficEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setupTrafficColorsWithRoadLayoutContext:(struct RoadLayoutContext { struct LayoutContext {} *x1; float x2; float x3; BOOL x4; BOOL x5; float x6; float x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGSize { double x_9_1_1; double x_9_1_2; } x9; bool x10; unsigned char x11; float x12; float x13; float x14; struct Matrix<float, 4, 1> { float x_15_1_1[4]; } x15[5]; }*)arg1 trafficStyleAttributes:(const struct FeatureAttributeSet { struct vector<gss::FeatureAttributePair, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_1_1_1; struct FeatureAttributePair {} *x_1_1_2; struct __compressed_pair<gss::FeatureAttributePair *, std::__1::allocator<gss::FeatureAttributePair> > { struct FeatureAttributePair {} *x_3_2_1; } x_1_1_3; } x1; }*)arg2 styleZ:(float)arg3;
- (unsigned char)commandBufferId;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (struct shared_ptr<md::FeatureMarker> { struct FeatureMarker {} *x1; struct __shared_weak_count {} *x2; })featureMarkerInTile:(id)arg1 atPoint:(struct Matrix<double, 3, 1> { double x1[3]; }*)arg2;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2;
- (double)layoutTimestamp;
- (unsigned long long)mapLayerPosition;
- (void)reserveStencilRangeForScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (void)setMapLayerPosition:(unsigned long long)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)stylesheetDidChange;
- (bool)trafficEnabled;

@end

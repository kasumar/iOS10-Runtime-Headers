/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VK3DObjectSubMapModel : NSObject {
    struct shared_ptr<ggl::LandmarkFlat::LandmarkPipelineState> { 
        struct LandmarkPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _2DPipelineStateWithBlending;
    struct shared_ptr<ggl::LandmarkFlat::LandmarkPipelineState> { 
        struct LandmarkPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _2DPipelineStateWithoutBlending;
    VKBuildingFootprintMapModel * _buildingMapModel;
    struct unique_ptr<ggl::FragmentedPool<ggl::LandmarkDepth::BuildingPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::LandmarkDepth::BuildingPipelineSetup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::LandmarkDepth::BuildingPipelineSetup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::LandmarkDepth::BuildingPipelineSetup> > > { 
            struct FragmentedPool<ggl::LandmarkDepth::BuildingPipelineSetup> {} *__first_; 
        } __ptr_; 
    }  _depthPassPipelineSetupPool;
    struct shared_ptr<ggl::LandmarkDepth::BuildingPipelineState> { 
        struct BuildingPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _depthPassPipelineState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _depthPassRenderState;
    struct shared_ptr<ggl::FoggedDiffuseLandmark::LandmarkPipelineState> { 
        struct LandmarkPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _diffuse3DFoggedPipelineStateWithBlending;
    struct shared_ptr<ggl::FoggedDiffuseLandmark::LandmarkPipelineState> { 
        struct LandmarkPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _diffuse3DFoggedPipelineStateWithoutBlending;
    struct shared_ptr<ggl::DiffuseLandmark::BuildingPipelineState> { 
        struct BuildingPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _diffuse3DPipelineStateWithBlending;
    struct shared_ptr<ggl::DiffuseLandmark::BuildingPipelineState> { 
        struct BuildingPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _diffuse3DPipelineStateWithoutBlending;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedDiffuseLandmark::LandmarkPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedDiffuseLandmark::LandmarkPipelineSetup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::FoggedDiffuseLandmark::LandmarkPipelineSetup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedDiffuseLandmark::LandmarkPipelineSetup> > > { 
            struct FragmentedPool<ggl::FoggedDiffuseLandmark::LandmarkPipelineSetup> {} *__first_; 
        } __ptr_; 
    }  _diffuseFoggedObject3DPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::DiffuseLandmark::BuildingPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::DiffuseLandmark::BuildingPipelineSetup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::DiffuseLandmark::BuildingPipelineSetup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::DiffuseLandmark::BuildingPipelineSetup> > > { 
            struct FragmentedPool<ggl::DiffuseLandmark::BuildingPipelineSetup> {} *__first_; 
        } __ptr_; 
    }  _diffuseObject3DPipelineSetupPool;
    bool  _fogEnabled;
    struct unique_ptr<ggl::FragmentedPool<ggl::LandmarkFlat::LandmarkPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::LandmarkFlat::LandmarkPipelineSetup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::LandmarkFlat::LandmarkPipelineSetup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::LandmarkFlat::LandmarkPipelineSetup> > > { 
            struct FragmentedPool<ggl::LandmarkFlat::LandmarkPipelineSetup> {} *__first_; 
        } __ptr_; 
    }  _object2DPipelineSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _object2DRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    }  _object3DRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    }  _objectRenderItemPool;
    struct shared_ptr<ggl::FoggedSpecularLandmark::LandmarkPipelineState> { 
        struct LandmarkPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _specular3DFoggedPipelineStateWithBlending;
    struct shared_ptr<ggl::FoggedSpecularLandmark::LandmarkPipelineState> { 
        struct LandmarkPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _specular3DFoggedPipelineStateWithoutBlending;
    struct shared_ptr<ggl::SpecularLandmark::LandmarkPipelineState> { 
        struct LandmarkPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _specular3DPipelineStateWithBlending;
    struct shared_ptr<ggl::SpecularLandmark::LandmarkPipelineState> { 
        struct LandmarkPipelineState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _specular3DPipelineStateWithoutBlending;
    struct unique_ptr<ggl::FragmentedPool<ggl::FoggedSpecularLandmark::LandmarkPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedSpecularLandmark::LandmarkPipelineSetup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::FoggedSpecularLandmark::LandmarkPipelineSetup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::FoggedSpecularLandmark::LandmarkPipelineSetup> > > { 
            struct FragmentedPool<ggl::FoggedSpecularLandmark::LandmarkPipelineSetup> {} *__first_; 
        } __ptr_; 
    }  _specularFoggedObject3DPipelineSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::SpecularLandmark::LandmarkPipelineSetup>, std::__1::default_delete<ggl::FragmentedPool<ggl::SpecularLandmark::LandmarkPipelineSetup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::SpecularLandmark::LandmarkPipelineSetup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::SpecularLandmark::LandmarkPipelineSetup> > > { 
            struct FragmentedPool<ggl::SpecularLandmark::LandmarkPipelineSetup> {} *__first_; 
        } __ptr_; 
    }  _specularObject3DPipelineSetupPool;
    bool  _supportsPerFragmentLighting;
}

@property (nonatomic) VKBuildingFootprintMapModel *buildingMapModel;
@property (getter=isFogEnabled, nonatomic) bool fogEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)buildingMapModel;
- (void)flushPools;
- (void)generateDiffuseRenderItemsForGroup:(const struct shared_ptr<md::ObjectGroup> { struct ObjectGroup {} *x1; struct __shared_weak_count {} *x2; }*)arg1 viewConstantData:(const struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x1; struct __shared_weak_count {} *x2; }*)arg2 fogConstantData:(const struct shared_ptr<ggl::ConstantDataTyped<ggl::Fog::Skyfog> > { struct ConstantDataTyped<ggl::Fog::Skyfog> {} *x1; struct __shared_weak_count {} *x2; }*)arg3 context:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg4 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_9_1_3; } x9; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_10_1_1; unsigned long long x_10_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_10_1_3; } x10; id x11; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; double x23; void*x24; void*x25; const void*x26; void*x27; int x28; void*x29; void*x30; long x31; int x32; in void*x33; unsigned short x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; struct  
        struct LandmarkPipelineState { {} x41; void*x42; char *x43; void*x44; void*x45; void*x46; void*x47; const void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; short x60; void*x61; const void*x62; BOOL x63; void*x64; void*x65; void*x66; void*x67; short x68; void*x69; void*x70; const void*x71; double x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; BOOL x79; out void*x80; in void*x81; void*x82; struct  {} x83; void*x84; char *x85; void*x86; void*x87; BOOL x88; in void*x89; const long x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; }*)arg5 cameraPosition:(const struct Matrix<float, 3, 1> { float x1[3]; }*)arg6 alpha:(float)arg7 scale:(float)arg8 zoomLevel:(float)arg9;
- (void)generateSpecularRenderItemsForGroup:(const struct shared_ptr<md::ObjectGroup> { struct ObjectGroup {} *x1; struct __shared_weak_count {} *x2; }*)arg1 viewConstantData:(const struct shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> > { struct ConstantDataTyped<ggl::Tile::View> {} *x1; struct __shared_weak_count {} *x2; }*)arg2 fogConstantData:(const struct shared_ptr<ggl::ConstantDataTyped<ggl::Fog::Skyfog> > { struct ConstantDataTyped<ggl::Fog::Skyfog> {} *x1; struct __shared_weak_count {} *x2; }*)arg3 context:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg4 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_9_1_3; } x9; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_10_1_1; unsigned long long x_10_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_10_1_3; } x10; id x11; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; double x23; void*x24; void*x25; const void*x26; void*x27; int x28; void*x29; void*x30; long x31; int x32; in void*x33; unsigned short x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; struct  
        struct LandmarkPipelineState { {} x41; void*x42; char *x43; void*x44; void*x45; void*x46; void*x47; const void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; short x60; void*x61; const void*x62; BOOL x63; void*x64; void*x65; void*x66; void*x67; short x68; void*x69; void*x70; const void*x71; double x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; BOOL x79; out void*x80; in void*x81; void*x82; struct  {} x83; void*x84; char *x85; void*x86; void*x87; BOOL x88; in void*x89; const long x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; }*)arg5 cameraPosition:(const struct Matrix<float, 3, 1> { float x1[3]; }*)arg6 alpha:(float)arg7 scale:(float)arg8 zoomLevel:(float)arg9;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithBuildingMapModel:(id)arg1 target:(id)arg2 sharedResources:(id)arg3;
- (bool)isFogEnabled;
- (void)layoutFor2DWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_9_1_3; } x9; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_10_1_1; unsigned long long x_10_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_10_1_3; } x10; id x11; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; SEL x23; void*x24; unsigned char x25; void*x26; out void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; in void*x34; double x35; void*x36; bool x37; void*x38; void*x39; void*x40; float x41; void*x42; float x43; void*x44; void*x45; void*x46; const void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; struct x56; void*x57; void*x58; void*x59; short x60; void*x61; void*x62; void*x63; const void*x64; void*x65; void*x66; BOOL x67; void*x68; void*x69; void*x70; void*x71; void*x72; unsigned char x73; void*x74; out void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; in void*x82; double x83; void*x84; bool x85; void*x86; void*x87; void*x88; float x89; void*x90; float x91; void*x92; void*x93; void*x94; const void*x95; void*x96; void*x97; struct x98; void*x99; }*)arg2 tiles:(id)arg3;
- (void)layoutFor3DWithContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg1 commandBuffer:(struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned long long x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long long x_3_2_1; } x_9_1_3; } x9; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_10_1_1; unsigned long long x_10_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long long x_3_2_1; } x_10_1_3; } x10; id x11; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; short x23; void*x24; void*x25; void*x26; const void*x27; void*x28; void*x29; BOOL x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; short x40; void*x41; void*x42; void*x43; long x44; void*x45; int x46; void*x47; void*x48; void*x49; void*x50; void*x51; unsigned int x52/* : ? */; void*x53; void*x54; void*x55; float x56; void*x57; float x58; void*x59; void*x60; void*x61; const void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; out void*x69; SEL x70; void*x71; SEL x72; void*x73; float x74; void*x75; void*x76; void*x77; short x78; void*x79; void*x80; void*x81; void*x82; void*x83; short x84; void*x85; void*x86; void*x87; void*x88; void*x89; const void*x90; void*x91; void*x92; double x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; const void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; long x108; void*x109; SEL x110; void*x111; SEL x112; void*x113; unsigned long long x114; void*x115; void*x116; void*x117; void*x118; void*x119; const void*x120; void*x121; void*x122; unsigned int x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; char *x135; void*x136; void*x137; void*x138; void*x139; void*x140; short x141; void*x142; void*x143; void*x144; double x145; void*x146; SEL x147; void*x148; SEL x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; SEL x157; void*x158; SEL x159; void*x160; void*x161; void*x162; long x163; void*x164; long x165; void*x166; out void*x167; BOOL x168; void*x169; void*x170; void*x171; void*x172; void*x173; out void*x174; const void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; out void*x182; SEL x183; void*x184; SEL x185; void*x186; float x187; void*x188; void*x189; void*x190; short x191; void*x192; void*x193; void*x194; void*x195; void*x196; short x197; void*x198; void*x199; void*x200; void*x201; void*x202; const void*x203; void*x204; void*x205; double x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; const void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; long x221; void*x222; SEL x223; void*x224; SEL x225; void*x226; unsigned long long x227; void*x228; void*x229; void*x230; void*x231; void*x232; const void*x233; void*x234; void*x235; unsigned int x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; char *x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; struct x258; void*x259; void*x260; void*x261; short x262; void*x263; void*x264; void*x265; const void*x266; void*x267; void*x268; BOOL x269; void*x270; void*x271; void*x272; void*x273; void*x274; float x275; void*x276; void*x277; void*x278; short x279; void*x280; void*x281; void*x282; void*x283; void*x284; short x285; void*x286; void*x287; void*x288; void*x289; void*x290; const void*x291; void*x292; void*x293; double x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; const void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; long x309; void*x310; SEL x311; void*x312; SEL x313; void*x314; unsigned long long x315; void*x316; void*x317; void*x318; void*x319; void*x320; const void*x321; void*x322; void*x323; unsigned int x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; struct x336; void*x337; }*)arg2 tiles:(id)arg3;
- (void)resetPools;
- (void)setBuildingMapModel:(id)arg1;
- (void)setFogEnabled:(bool)arg1;

@end

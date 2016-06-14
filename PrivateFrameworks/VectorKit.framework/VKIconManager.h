/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKIconManager : NSObject <GEOResourceManifestTileGroupObserver> {
    NSMapTable * _atlases;
    NSLock * _atlasesLock;
    _VKLocalIconAtlas * _localAtlas;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    struct map<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> >, NSStringMapComparison, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > > > > { 
        struct __tree<std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, std::__1::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, NSStringMapComparison, true>, std::__1::allocator<std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > > > > { 
            struct __tree_node<std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__value_type<geo::_retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<gss::StylesheetManager<gss::PropertyID> > >, NSStringMapComparison, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _nameToStyleManager;
    struct read_write_lock { 
        struct _opaque_pthread_rwlock_t { 
            long long __sig; 
            BOOL __opaque[192]; 
        } _lock; 
    }  _nameToStyleManagerLock;
    NSArray * _nonRegionalResourceNames;
    VKResourceManager * _resourceManager;
    bool  _shouldCacheAtlases;
    struct shared_ptr<md::StylesheetVendor> { 
        struct StylesheetVendor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _stylesheetVendor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldCacheAtlases;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_allResourceNames;
- (id)_artworkForStyleAttributes:(id)arg1 labelStyle:(struct VKLabelStyle { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; struct VKIconStyleInfo { unsigned char x_12_1_1; struct Matrix<float, 4, 1> { float x_2_2_1[4]; } x_12_1_2; struct Matrix<float, 4, 1> { float x_3_2_1[4]; } x_12_1_3[2]; struct Matrix<float, 4, 1> { float x_4_2_1[4]; } x_12_1_4; unsigned char x_12_1_5; struct Matrix<float, 4, 1> { float x_6_2_1[4]; } x_12_1_6; unsigned char x_12_1_7; unsigned char x_12_1_8; float x_12_1_9; struct Matrix<float, 4, 1> { float x_10_2_1[4]; } x_12_1_10; struct Matrix<float, 2, 1> { float x_11_2_1[2]; } x_12_1_11; float x_12_1_12; struct Matrix<float, 4, 1> { float x_13_2_1[4]; } x_12_1_13; float x_12_1_14; float x_12_1_15; float x_12_1_16; bool x_12_1_17; unsigned int x_12_1_18; unsigned int x_12_1_19; } x12; unsigned int x13; unsigned int x14; float x15; float x16; unsigned int x17; float x18; float x19; int x20; int x21; float x22; float x23; float x24; float x25; float x26; struct FixedPointVector<unsigned char, 4> { unsigned char x_27_1_1[4]; } x27; struct FixedPointVector<unsigned char, 4> { unsigned char x_28_1_1[4]; } x28; struct FixedPointVector<unsigned char, 4> { unsigned char x_29_1_1[4]; } x29; struct FixedPointVector<unsigned char, 4> { unsigned char x_30_1_1[4]; } x30; struct FixedPointVector<unsigned char, 4> { unsigned char x_31_1_1[4]; } x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; unsigned char x51; unsigned char x52; BOOL x53; BOOL x54; BOOL x55; unsigned char x56; int x57; int x58; float x59; float x60; float x61; float x62; int x63; struct FixedPointVector<unsigned char, 4> { unsigned char x_64_1_1[4]; } x64; unsigned char x65; unsigned char x66; unsigned char x67; unsigned char x68; BOOL x69; BOOL x70; BOOL x71; unsigned char x72; unsigned char x73; unsigned char x74; unsigned char x75; unsigned char x76; unsigned char x77; unsigned short x78; unsigned char x79; unsigned char x80; unsigned char x81; unsigned char x82; unsigned char x83; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_84_1_1; } x84; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_85_1_1; } x85; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_86_1_1; } x86; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_87_1_1; } x87; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_88_1_1; } x88; struct FontOptions { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_89_1_1; float x_89_1_2; float x_89_1_3; float x_89_1_4; bool x_89_1_5; bool x_89_1_6; bool x_89_1_7; } x89; })arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(bool)arg6;
- (id)_atlasForName:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (id)_forEachIconPackWithContentScale:(double)arg1 iconSize:(long long)arg2 resourceNames:(id)arg3 allowSizeFallback:(bool)arg4 visitUntilMatch:(id /* block */)arg5;
- (id)_forEachIconPackWithContentScale:(double)arg1 iconSize:(long long)arg2 resourceNames:(id)arg3 visitUntilMatch:(id /* block */)arg4;
- (bool)_getLabelStyleForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 labelStyle:(struct VKLabelStyle { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; struct VKIconStyleInfo { unsigned char x_12_1_1; struct Matrix<float, 4, 1> { float x_2_2_1[4]; } x_12_1_2; struct Matrix<float, 4, 1> { float x_3_2_1[4]; } x_12_1_3[2]; struct Matrix<float, 4, 1> { float x_4_2_1[4]; } x_12_1_4; unsigned char x_12_1_5; struct Matrix<float, 4, 1> { float x_6_2_1[4]; } x_12_1_6; unsigned char x_12_1_7; unsigned char x_12_1_8; float x_12_1_9; struct Matrix<float, 4, 1> { float x_10_2_1[4]; } x_12_1_10; struct Matrix<float, 2, 1> { float x_11_2_1[2]; } x_12_1_11; float x_12_1_12; struct Matrix<float, 4, 1> { float x_13_2_1[4]; } x_12_1_13; float x_12_1_14; float x_12_1_15; float x_12_1_16; bool x_12_1_17; unsigned int x_12_1_18; unsigned int x_12_1_19; } x12; unsigned int x13; unsigned int x14; float x15; float x16; unsigned int x17; float x18; float x19; int x20; int x21; float x22; float x23; float x24; float x25; float x26; struct FixedPointVector<unsigned char, 4> { unsigned char x_27_1_1[4]; } x27; struct FixedPointVector<unsigned char, 4> { unsigned char x_28_1_1[4]; } x28; struct FixedPointVector<unsigned char, 4> { unsigned char x_29_1_1[4]; } x29; struct FixedPointVector<unsigned char, 4> { unsigned char x_30_1_1[4]; } x30; struct FixedPointVector<unsigned char, 4> { unsigned char x_31_1_1[4]; } x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; unsigned char x51; unsigned char x52; BOOL x53; BOOL x54; BOOL x55; unsigned char x56; int x57; int x58; float x59; float x60; float x61; float x62; int x63; struct FixedPointVector<unsigned char, 4> { unsigned char x_64_1_1[4]; } x64; unsigned char x65; unsigned char x66; unsigned char x67; unsigned char x68; BOOL x69; BOOL x70; BOOL x71; unsigned char x72; unsigned char x73; unsigned char x74; unsigned char x75; unsigned char x76; unsigned char x77; unsigned short x78; unsigned char x79; unsigned char x80; unsigned char x81; unsigned char x82; unsigned char x83; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_84_1_1; } x84; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_85_1_1; } x85; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_86_1_1; } x86; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_87_1_1; } x87; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_88_1_1; } x88; struct FontOptions { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_89_1_1; float x_89_1_2; float x_89_1_3; float x_89_1_4; bool x_89_1_5; bool x_89_1_6; bool x_89_1_7; } x89; }*)arg4;
- (bool)_getLabelStyleForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 labelStyle:(struct VKLabelStyle { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; struct VKIconStyleInfo { unsigned char x_12_1_1; struct Matrix<float, 4, 1> { float x_2_2_1[4]; } x_12_1_2; struct Matrix<float, 4, 1> { float x_3_2_1[4]; } x_12_1_3[2]; struct Matrix<float, 4, 1> { float x_4_2_1[4]; } x_12_1_4; unsigned char x_12_1_5; struct Matrix<float, 4, 1> { float x_6_2_1[4]; } x_12_1_6; unsigned char x_12_1_7; unsigned char x_12_1_8; float x_12_1_9; struct Matrix<float, 4, 1> { float x_10_2_1[4]; } x_12_1_10; struct Matrix<float, 2, 1> { float x_11_2_1[2]; } x_12_1_11; float x_12_1_12; struct Matrix<float, 4, 1> { float x_13_2_1[4]; } x_12_1_13; float x_12_1_14; float x_12_1_15; float x_12_1_16; bool x_12_1_17; unsigned int x_12_1_18; unsigned int x_12_1_19; } x12; unsigned int x13; unsigned int x14; float x15; float x16; unsigned int x17; float x18; float x19; int x20; int x21; float x22; float x23; float x24; float x25; float x26; struct FixedPointVector<unsigned char, 4> { unsigned char x_27_1_1[4]; } x27; struct FixedPointVector<unsigned char, 4> { unsigned char x_28_1_1[4]; } x28; struct FixedPointVector<unsigned char, 4> { unsigned char x_29_1_1[4]; } x29; struct FixedPointVector<unsigned char, 4> { unsigned char x_30_1_1[4]; } x30; struct FixedPointVector<unsigned char, 4> { unsigned char x_31_1_1[4]; } x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; unsigned char x51; unsigned char x52; BOOL x53; BOOL x54; BOOL x55; unsigned char x56; int x57; int x58; float x59; float x60; float x61; float x62; int x63; struct FixedPointVector<unsigned char, 4> { unsigned char x_64_1_1[4]; } x64; unsigned char x65; unsigned char x66; unsigned char x67; unsigned char x68; BOOL x69; BOOL x70; BOOL x71; unsigned char x72; unsigned char x73; unsigned char x74; unsigned char x75; unsigned char x76; unsigned char x77; unsigned short x78; unsigned char x79; unsigned char x80; unsigned char x81; unsigned char x82; unsigned char x83; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_84_1_1; } x84; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_85_1_1; } x85; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_86_1_1; } x86; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_87_1_1; } x87; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_88_1_1; } x88; struct FontOptions { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_89_1_1; float x_89_1_2; float x_89_1_3; float x_89_1_4; bool x_89_1_5; bool x_89_1_6; bool x_89_1_7; } x89; }*)arg4 transitMode:(bool)arg5;
- (bool)_getLabelStyleForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 labelStyle:(struct VKLabelStyle { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; struct VKIconStyleInfo { unsigned char x_12_1_1; struct Matrix<float, 4, 1> { float x_2_2_1[4]; } x_12_1_2; struct Matrix<float, 4, 1> { float x_3_2_1[4]; } x_12_1_3[2]; struct Matrix<float, 4, 1> { float x_4_2_1[4]; } x_12_1_4; unsigned char x_12_1_5; struct Matrix<float, 4, 1> { float x_6_2_1[4]; } x_12_1_6; unsigned char x_12_1_7; unsigned char x_12_1_8; float x_12_1_9; struct Matrix<float, 4, 1> { float x_10_2_1[4]; } x_12_1_10; struct Matrix<float, 2, 1> { float x_11_2_1[2]; } x_12_1_11; float x_12_1_12; struct Matrix<float, 4, 1> { float x_13_2_1[4]; } x_12_1_13; float x_12_1_14; float x_12_1_15; float x_12_1_16; bool x_12_1_17; unsigned int x_12_1_18; unsigned int x_12_1_19; } x12; unsigned int x13; unsigned int x14; float x15; float x16; unsigned int x17; float x18; float x19; int x20; int x21; float x22; float x23; float x24; float x25; float x26; struct FixedPointVector<unsigned char, 4> { unsigned char x_27_1_1[4]; } x27; struct FixedPointVector<unsigned char, 4> { unsigned char x_28_1_1[4]; } x28; struct FixedPointVector<unsigned char, 4> { unsigned char x_29_1_1[4]; } x29; struct FixedPointVector<unsigned char, 4> { unsigned char x_30_1_1[4]; } x30; struct FixedPointVector<unsigned char, 4> { unsigned char x_31_1_1[4]; } x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; float x47; float x48; float x49; float x50; unsigned char x51; unsigned char x52; BOOL x53; BOOL x54; BOOL x55; unsigned char x56; int x57; int x58; float x59; float x60; float x61; float x62; int x63; struct FixedPointVector<unsigned char, 4> { unsigned char x_64_1_1[4]; } x64; unsigned char x65; unsigned char x66; unsigned char x67; unsigned char x68; BOOL x69; BOOL x70; BOOL x71; unsigned char x72; unsigned char x73; unsigned char x74; unsigned char x75; unsigned char x76; unsigned char x77; unsigned short x78; unsigned char x79; unsigned char x80; unsigned char x81; unsigned char x82; unsigned char x83; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_84_1_1; } x84; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_85_1_1; } x85; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_86_1_1; } x86; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_87_1_1; } x87; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_88_1_1; } x88; struct FontOptions { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_89_1_1; float x_89_1_2; float x_89_1_3; float x_89_1_4; bool x_89_1_5; bool x_89_1_6; bool x_89_1_7; } x89; }*)arg4 transitMode:(bool)arg5 interactive:(bool)arg6;
- (id)_nonRegionalPacks;
- (id)artworkForFeatureID:(unsigned long long)arg1 withResourceNames:(id)arg2 style:(struct VKIconStyleInfo { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; struct Matrix<float, 4, 1> { float x_3_1_1[4]; } x3[2]; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; unsigned char x5; struct Matrix<float, 4, 1> { float x_6_1_1[4]; } x6; unsigned char x7; unsigned char x8; float x9; struct Matrix<float, 4, 1> { float x_10_1_1[4]; } x10; struct Matrix<float, 2, 1> { float x_11_1_1[2]; } x11; float x12; struct Matrix<float, 4, 1> { float x_13_1_1[4]; } x13; float x14; float x15; float x16; bool x17; unsigned int x18; unsigned int x19; }*)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)artworkForName:(id)arg1 withResourceNames:(id)arg2 style:(struct VKIconStyleInfo { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; struct Matrix<float, 4, 1> { float x_3_1_1[4]; } x3[2]; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; unsigned char x5; struct Matrix<float, 4, 1> { float x_6_1_1[4]; } x6; unsigned char x7; unsigned char x8; float x9; struct Matrix<float, 4, 1> { float x_10_1_1[4]; } x10; struct Matrix<float, 2, 1> { float x_11_1_1[2]; } x11; float x12; struct Matrix<float, 4, 1> { float x_13_1_1[4]; } x13; float x14; float x15; float x16; bool x17; unsigned int x18; unsigned int x19; }*)arg3 contentScale:(double)arg4 size:(long long)arg5;
- (id)artworkForName:(id)arg1 withResourceNames:(id)arg2 style:(struct VKIconStyleInfo { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; struct Matrix<float, 4, 1> { float x_3_1_1[4]; } x3[2]; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; unsigned char x5; struct Matrix<float, 4, 1> { float x_6_1_1[4]; } x6; unsigned char x7; unsigned char x8; float x9; struct Matrix<float, 4, 1> { float x_10_1_1[4]; } x10; struct Matrix<float, 2, 1> { float x_11_1_1[2]; } x11; float x12; struct Matrix<float, 4, 1> { float x_13_1_1[4]; } x13; float x14; float x15; float x16; bool x17; unsigned int x18; unsigned int x19; }*)arg3 contentScale:(double)arg4 size:(long long)arg5 hasText:(bool)arg6;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2 withResourceNames:(id)arg3 style:(struct VKIconStyleInfo { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; struct Matrix<float, 4, 1> { float x_3_1_1[4]; } x3[2]; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; unsigned char x5; struct Matrix<float, 4, 1> { float x_6_1_1[4]; } x6; unsigned char x7; unsigned char x8; float x9; struct Matrix<float, 4, 1> { float x_10_1_1[4]; } x10; struct Matrix<float, 2, 1> { float x_11_1_1[2]; } x11; float x12; struct Matrix<float, 4, 1> { float x_13_1_1[4]; } x13; float x14; float x15; float x16; bool x17; unsigned int x18; unsigned int x19; }*)arg4 contentScale:(double)arg5 size:(long long)arg6;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2 withResourceNames:(id)arg3 style:(struct VKIconStyleInfo { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; struct Matrix<float, 4, 1> { float x_3_1_1[4]; } x3[2]; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; unsigned char x5; struct Matrix<float, 4, 1> { float x_6_1_1[4]; } x6; unsigned char x7; unsigned char x8; float x9; struct Matrix<float, 4, 1> { float x_10_1_1[4]; } x10; struct Matrix<float, 2, 1> { float x_11_1_1[2]; } x11; float x12; struct Matrix<float, 4, 1> { float x_13_1_1[4]; } x13; float x14; float x15; float x16; bool x17; unsigned int x18; unsigned int x19; }*)arg4 contentScale:(double)arg5 size:(long long)arg6 hasText:(bool)arg7;
- (id)artworkForStyleAttributeKey:(unsigned int)arg1 longAttributeValue:(unsigned long long)arg2 withResourceNames:(id)arg3 style:(struct VKIconStyleInfo { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; struct Matrix<float, 4, 1> { float x_3_1_1[4]; } x3[2]; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; unsigned char x5; struct Matrix<float, 4, 1> { float x_6_1_1[4]; } x6; unsigned char x7; unsigned char x8; float x9; struct Matrix<float, 4, 1> { float x_10_1_1[4]; } x10; struct Matrix<float, 2, 1> { float x_11_1_1[2]; } x11; float x12; struct Matrix<float, 4, 1> { float x_13_1_1[4]; } x13; float x14; float x15; float x16; bool x17; unsigned int x18; unsigned int x19; }*)arg4 contentScale:(double)arg5 size:(long long)arg6;
- (void)dealloc;
- (id)iconForIconAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2 size:(long long)arg3 contentScale:(double)arg4;
- (id)iconForStyleAttributes:(id)arg1 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(bool)arg6;
- (id)iconForStyleAttributes:(id)arg1 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(bool)arg6 overrides:(struct QueryOverrides { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; unsigned char x8; struct DisplayStyle { unsigned char x_9_1_1; unsigned char x_9_1_2; unsigned char x_9_1_3; unsigned char x_9_1_4; unsigned char x_9_1_5; } x9; unsigned char x10; bool x11; unsigned char x12; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_13_1_1; } x13; bool x14; })arg7;
- (id)iconForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(bool)arg6 transitMode:(bool)arg7 interactive:(bool)arg8;
- (id)iconForTransitSystemID:(unsigned int)arg1 size:(long long)arg2 contentScale:(double)arg3;
- (id)iconForTransitType:(unsigned int)arg1 size:(long long)arg2 contentScale:(double)arg3;
- (long long)iconStyleForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3;
- (id)imageForName:(id)arg1 contentScale:(double)arg2;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(bool)arg6;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(bool)arg6 transitMode:(bool)arg7;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3 size:(long long)arg4 customIconID:(unsigned long long)arg5 transparent:(bool)arg6 transitMode:(bool)arg7 interactive:(bool)arg8;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2 stylesheetVendor:(struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor {} *x1; struct __shared_weak_count {} *x2; })arg3 shouldCacheAtlases:(bool)arg4;
- (id)initWithConfiguration:(id)arg1 shouldCacheAtlases:(bool)arg2;
- (struct CGColor { }*)newFillColorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3;
- (struct CGColor { }*)newGlyphColorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3;
- (struct CGColor { }*)newHaloColorForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(double)arg3;
- (void)purge;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (bool)shouldCacheAtlases;

@end

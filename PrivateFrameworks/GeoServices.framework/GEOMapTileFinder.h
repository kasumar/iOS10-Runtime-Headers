/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapTileFinder : GEOMapRequest {
    struct { 
        double latitude; 
        double longitude; 
    }  _center;
    bool  _isCanceling;
    double  _radius;
    id /* block */  _tileHandler;
    int  _tileScale;
    int  _tileSize;
    int  _tileStyle;
    unsigned long long  _zoomLevel;
}

@property (nonatomic, readonly) GEOMapAccess *map;
@property (nonatomic, copy) id /* block */ tileHandler;
@property (nonatomic, readonly) int tileScale;
@property (nonatomic, readonly) int tileSize;
@property (nonatomic, readonly) int tileStyle;
@property (nonatomic, readonly) unsigned long long zoomLevel;

+ (id)buildingsTileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
+ (id)detailedTransitTileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
+ (id)realisticTileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
+ (id)transitGeometryTileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;

- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })_adjacentTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 dirX:(int)arg2 dirY:(int)arg3;
- (void)_fetchDataForKeys:(const struct unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> > { struct __hash_table<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> > { struct unique_ptr<std::__1::__hash_node<_GEOTileKey, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<_GEOTileKey, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> *> > > { struct __hash_node<_GEOTileKey, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *>, std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> > > { struct __hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> { struct __hash_node<_GEOTileKey, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::hash<GEOTileKey> > { unsigned long long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::equal_to<GEOTileKey> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg1;
- (id)_initWithMap:(id)arg1 zoomLevel:(unsigned long long)arg2 tileSize:(int)arg3 tileScale:(int)arg4 tileStyle:(int)arg5 center:(struct { double x1; double x2; })arg6 radius:(double)arg7;
- (void)cancel;
- (void)dealloc;
- (void)findTiles:(id /* block */)arg1;
- (void)findTiles:(id /* block */)arg1 excludingKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)findTilesAdjacentToTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 containingPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 tileHandler:(id /* block */)arg3;
- (id)map;
- (void)setTileHandler:(id /* block */)arg1;
- (id /* block */)tileHandler;
- (int)tileScale;
- (int)tileSize;
- (int)tileStyle;
- (unsigned long long)zoomLevel;

@end

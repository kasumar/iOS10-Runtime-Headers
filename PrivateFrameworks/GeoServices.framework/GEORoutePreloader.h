/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession> {
    bool  _allStationTilesBatchMade;
    id /* block */  _batteryHandler;
    double  _currentRoutePosition;
    <GEORoutePreloadSessionDelegate> * _delegate;
    int  _downloadState;
    bool  _enabled;
    bool  _fullDebuggingEnabled;
    bool  _loggingEnabled;
    bool  _minimalDebuggingEnabled;
    unsigned long long  _networkQuality;
    bool  _paused;
    GEOComposedRoute * _route;
    double  _stepSizeInMeters;
    NSMutableArray * _tileSetStyles;
}

@property (nonatomic, copy) id /* block */ batteryHandler;
@property (readonly, copy) NSString *debugDescription;
@property <GEORoutePreloadSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long networkQuality;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (readonly) Class superclass;

+ (id)preloaderForRoute:(id)arg1;

- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(bool)arg1;
- (void)addTileSetStyle:(int)arg1;
- (id /* block */)batteryHandler;
- (void)beginLoading;
- (void)dealloc;
- (id)delegate;
- (bool)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(struct { double x1; double x2; }*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
- (id)initSuperWithRoute:(id)arg1 loggingEnabled:(bool)arg2 minimalDebugging:(bool)arg3 fullDebugging:(bool)arg4 batteryHandler:(id /* block */)arg5;
- (bool)isSufficientlyLoaded;
- (bool)loggingEnabled;
- (bool)minimalDebuggingEnabled;
- (unsigned long long)networkQuality;
- (int)preloadStateForTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)preloaderLog:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)route;
- (void)setBatteryHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNetworkQuality:(unsigned long long)arg1;
- (void)setTraits:(id)arg1;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)tilesChanged;
- (void)updateWithRouteMatch:(id)arg1;

@end

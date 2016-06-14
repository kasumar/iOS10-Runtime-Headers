/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVEffectPreviewGenerator : NSObject {
    PVVideoCompositingContext * _compositingContext;
    struct vector<HGRef<PVRenderRequestHandler>, std::__1::allocator<HGRef<PVRenderRequestHandler> > > { 
        struct HGRef<PVRenderRequestHandler> {} *__begin_; 
        struct HGRef<PVRenderRequestHandler> {} *__end_; 
        struct __compressed_pair<HGRef<PVRenderRequestHandler> *, std::__1::allocator<HGRef<PVRenderRequestHandler> > > { 
            struct HGRef<PVRenderRequestHandler> {} *__first_; 
        } __end_cap_; 
    }  _inFlightrequestHandlers;
    NSLock * _inFlightrequestHandlersLock;
    struct PVPerfStats { double x1; int x2; struct OnceStats { double x_3_1_1; double x_3_1_2; } x3; struct vector<PVPerfStats::FrameStats, std::__1::allocator<PVPerfStats::FrameStats> > { struct FrameStats {} *x_4_1_1; struct FrameStats {} *x_4_1_2; struct __compressed_pair<PVPerfStats::FrameStats *, std::__1::allocator<PVPerfStats::FrameStats> > { struct FrameStats {} *x_3_2_1; } x_4_1_3; } x4; bool x5; struct FrameStats { unsigned int x_6_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; unsigned int x_6_1_6; bool x_6_1_7; bool x_6_1_8; unsigned int x_6_1_9; struct vector<double, std::__1::allocator<double> > { double *x_10_2_1; double *x_10_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_10_2_3; } x_6_1_10; } x6; struct FrameStats { unsigned int x_7_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_7_1_2; double x_7_1_3; double x_7_1_4; double x_7_1_5; unsigned int x_7_1_6; bool x_7_1_7; bool x_7_1_8; unsigned int x_7_1_9; struct vector<double, std::__1::allocator<double> > { double *x_10_2_1; double *x_10_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_10_2_3; } x_7_1_10; } x7; struct FrameStats { unsigned int x_8_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; unsigned int x_8_1_6; bool x_8_1_7; bool x_8_1_8; unsigned int x_8_1_9; struct vector<double, std::__1::allocator<double> > { double *x_10_2_1; double *x_10_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_10_2_3; } x_8_1_10; } x8; struct FrameStats { unsigned int x_9_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_9_1_2; double x_9_1_3; double x_9_1_4; double x_9_1_5; unsigned int x_9_1_6; bool x_9_1_7; bool x_9_1_8; unsigned int x_9_1_9; struct vector<double, std::__1::allocator<double> > { double *x_10_2_1; double *x_10_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_10_2_3; } x_9_1_10; } x9; struct FrameStats { unsigned int x_10_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_10_1_2; double x_10_1_3; double x_10_1_4; double x_10_1_5; unsigned int x_10_1_6; bool x_10_1_7; bool x_10_1_8; unsigned int x_10_1_9; struct vector<double, std::__1::allocator<double> > { double *x_10_2_1; double *x_10_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_10_2_3; } x_10_1_10; } x10; struct FrameStats { unsigned int x_11_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_11_1_2; double x_11_1_3; double x_11_1_4; double x_11_1_5; unsigned int x_11_1_6; bool x_11_1_7; bool x_11_1_8; unsigned int x_11_1_9; struct vector<double, std::__1::allocator<double> > { double *x_10_2_1; double *x_10_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_10_2_3; } x_11_1_10; } x11; double x12; struct PlaybackRateCalculator { struct vector<PVPerfStats::FrameStats, std::__1::allocator<PVPerfStats::FrameStats> > {} *x_13_1_1; long long x_13_1_2; long long x_13_1_3; bool x_13_1_4; unsigned int x_13_1_5; } x13; } * _perfStats;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _perfStatsLock;
    bool  _trackStats;
}

@property (nonatomic, retain) PVVideoCompositingContext *compositingContext;

+ (void)cleanupCaches;
+ (id)sharedGenerator;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFrameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; unsigned int x6; bool x7; bool x8; unsigned int x9; struct vector<double, std::__1::allocator<double> > { double *x_10_1_1; double *x_10_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_10_1_3; } x10; }*)arg1;
- (void)addRequestHandlerInFlight:(struct HGRef<PVRenderRequestHandler> { struct PVRenderRequestHandler {} *x1; })arg1;
- (void)cancelAllPendingPreviewRequests;
- (id)compositingContext;
- (void)dealloc;
- (void)generatePreviewForEffect:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 inputImage:(id)arg3 outputSize:(struct CGSize { double x1; double x2; })arg4 waitForFinish:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)generatePreviewForEffect:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 inputImage:(id)arg3 outputSize:(struct CGSize { double x1; double x2; })arg4 withForFinish:(bool)arg5 completionHandler:(id /* block */)arg6;
- (id)init;
- (void)printAndClearStats:(bool)arg1;
- (void)requestHandlerFinished:(struct HGRef<PVRenderRequestHandler> { struct PVRenderRequestHandler {} *x1; })arg1;
- (void)setCompositingContext:(id)arg1;
- (void)trackStats:(bool)arg1;

@end

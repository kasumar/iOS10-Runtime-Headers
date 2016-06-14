/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerLayerInternal : NSObject {
    NSSet * KVOInvokers;
    AVPlayer * _player;
    AVPlayerLayer * associatedPIPLayer;
    bool  canEnterPIPMode;
    NSDictionary * clientLayers;
    CALayer * closedCaptionLayer;
    bool  hasPlayerToObserve;
    AVNetworkPlaybackPerfHUDLayer * hudLayer;
    bool  isObservingPlayer;
    bool  isPIPModeEnabled;
    bool  isPresentationLayer;
    bool  isReadyForDisplay;
    struct OpaqueFigSimpleMutex { } * isReadyForDisplayMutex;
    AVPlayerItem * itemMarkedReadyForDisplay;
    bool  lanczosDownscalingEnabled;
    long long  lanczosDownscalingFactor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  latestPlayerLayerBoundsAtRendering;
    struct CGSize { 
        double width; 
        double height; 
    }  latestPresentationSizeAtRendering;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  latestSubtitleLayoutAtRendering;
    CALayer * maskLayer;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  oldSublayerTransform;
    NSDictionary * pixelBufferAttributes;
    CALayer * placeholderContentLayerDuringPIPMode;
    struct CGSize { 
        double width; 
        double height; 
    }  presentationSize;
    bool  preventsChangesToSublayerHierarchy;
    NSObject<OS_dispatch_queue> * serialQueue;
    bool  shouldObservePlayer;
    NSString * subtitleGravity;
    FigSubtitleCALayer * subtitleLayer;
    NSString * videoGravity;
    FigVideoContainerLayer * videoLayer;
    bool  willManageSublayersAsSwappedLayers;
}

@end

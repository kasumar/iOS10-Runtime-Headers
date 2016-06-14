/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerInternal : NSObject {
    void * IAPDCallbackToken;
    bool  IOwnTheFigPlayer;
    bool  allowsOutOfBandTextTrackRendering;
    AVAudioSession * audioSession;
    AVAudioSessionMediaPlayerOnly * audioSessionMediaPlayerOnly;
    bool  autoSwitchStreamVariants;
    bool  automaticallyWaitsToMinimizeStalling;
    NSHashTable * avPlayerLayers;
    NSDictionary * cachedFigMediaSelectionCriteriaProperty;
    NSMutableArray * closedCaptionLayers;
    AVPlayerItem * currentItem;
    <AVCallbackCancellation> * currentItemPreferredPixelBufferAttributesCallbackInvoker;
    NSObject<OS_dispatch_queue> * currentItemPropertyUpdateQueue;
    <AVCallbackCancellation> * currentItemSuppressesVideoLayersCallbackInvoker;
    struct CGSize { 
        double width; 
        double height; 
    }  dimensionsOfReservedVideoMemory;
    NSArray * displaysUsedForPlayback;
    NSError * error;
    NSArray * expectedAssetTypes;
    NSString * externalPlaybackVideoGravity;
    NSObject<OS_dispatch_queue> * figConfigurationQueue;
    struct OpaqueCMClock { } * figMasterClock;
    struct OpaqueFigPlaybackItem { } * figPlaybackItemToIdentifyNextCurrentItem;
    struct OpaqueFigPlayer { } * figPlayer;
    bool  hadAssociatedOnscreenPlayerLayerWhenSuspended;
    bool  hostApplicationInForeground;
    bool  iapdExtendedModeIsActive;
    NSMutableSet * items;
    NSArray * itemsInFigPlayQueue;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    AVPlayerItem * lastItem;
    NSObject<OS_dispatch_queue> * layersQ;
    bool  logPerformanceData;
    NSString * multichannelAudioStrategy;
    bool  needsToCreateFigPlayer;
    int  nextPrerollIDToGenerate;
    AVOutputContext * outputContext;
    NSMutableDictionary * pendingFigPlayerProperties;
    int  pendingPrerollID;
    AVPixelBufferAttributeMediator * pixelBufferAttributeMediator;
    bool  preparesItemsForPlaybackAsynchronously;
    id /* block */  prerollCompletionHandler;
    struct OpaqueFigSimpleMutex { } * prerollIDMutex;
    AVPropertyStorage * propertyStorage;
    struct OpaqueCMTimebase { } * proxyTimebase;
    NSArray * queueModifications;
    bool  reevaluateBackgroundPlayback;
    bool  shouldReduceResourceUsage;
    NSObject<OS_dispatch_queue> * stateDispatchQueue;
    long long  status;
    NSMutableArray * subtitleLayers;
    bool  usesDedicatedNotificationQueueForMediaServices;
    NSDictionary * vibrationPattern;
    struct __CFDictionary { } * videoLayers;
    AVWeakReference * weakReference;
}

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPQueueFeeder : NSObject <MPQueueBehaviorManaging, MusicEntityValueProviding, NSCoding> {
    long long  _activeShuffleType;
    <MPQueueFeederDelegate> * _delegate;
    MPModelPlayEvent * _modelPlayEvent;
    NSMutableDictionary * _nextStartTimes;
    long long  _repeatType;
    bool  _requiresQueueChangeVerification;
    long long  _shuffleType;
    struct { 
        long long numberOfAvailableSkips; 
        long long skipFrequency; 
        double skipInterval; 
    }  _skipLimit;
    unsigned long long  _state;
}

@property (nonatomic, readonly) MPCContentItemIdentifierCollection *MPC_contentItemIdentifierCollection;
@property (nonatomic, readonly) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (nonatomic) long long activeShuffleType;
@property (nonatomic, readonly) bool allowsUserVisibleUpcomingItems;
@property (nonatomic, readonly) bool canReorder;
@property (nonatomic, readonly) bool canSeek;
@property (nonatomic, readonly) bool canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPQueueFeederDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class itemClass;
@property (nonatomic, readonly) unsigned long long itemCount;
@property (nonatomic, readonly) MPModelPlayEvent *modelPlayEvent;
@property (setter=mpcReporting_setFeatureName:, nonatomic, copy) NSString *mpcReporting_featureName;
@property (setter=mpcReporting_setRecommendationData:, nonatomic, copy) NSData *mpcReporting_recommendationData;
@property (nonatomic, readonly) long long playbackMode;
@property (nonatomic, readonly) bool playerPreparesItemsForPlaybackAsynchronously;
@property (nonatomic, readonly) long long realRepeatType;
@property (nonatomic, readonly) long long realShuffleType;
@property (nonatomic) long long repeatType;
@property (nonatomic) bool requiresQueueChangeVerification;
@property (nonatomic) long long shuffleType;
@property (nonatomic) struct { long long x1; long long x2; double x3; } skipLimit;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) RadioStation *station;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool trackChangesCanEndPlayback;
@property (nonatomic, readonly) bool userCanChangeShuffleAndRepeatType;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsStateRestoration;

- (void).cxx_destruct;
- (bool)_canPurgeNextStartTimes;
- (long long)activeShuffleType;
- (bool)allowsUserVisibleUpcomingItems;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (bool)canReorder;
- (bool)canSeek;
- (bool)canSkipItem:(id)arg1;
- (bool)canSkipToPreviousItem;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1 error:(id)arg2;
- (void)contentsDidChangeWithReplacementPlaybackContext:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)errorResolverForItem:(id)arg1;
- (bool)hasItemForIndex:(unsigned long long)arg1;
- (bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (void)invalidateAssets;
- (void)invalidateRealRepeatType;
- (void)invalidateRealShuffleType;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (id)itemForIdentifier:(id)arg1;
- (id)itemForIndex:(unsigned long long)arg1;
- (long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (id)metadataItemForIdentifier:(id)arg1;
- (id)modelPlayEvent;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)playbackInfoForIdentifier:(id)arg1;
- (long long)playbackMode;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2;
- (bool)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2 returningError:(id*)arg3;
- (bool)playerPreparesItemsForPlaybackAsynchronously;
- (id)preferredLanguages;
- (long long)realRepeatType;
- (long long)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(bool)arg2 completionHandler:(id /* block */)arg3;
- (long long)repeatType;
- (bool)requiresQueueChangeVerification;
- (void)setActiveShuffleType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNextStartTime:(double)arg1 forIndentifier:(id)arg2;
- (void)setRepeatType:(long long)arg1;
- (void)setRequiresQueueChangeVerification:(bool)arg1;
- (void)setShuffleType:(long long)arg1;
- (void)setSkipLimit:(struct { long long x1; long long x2; double x3; })arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2;
- (bool)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned long long*)arg1;
- (long long)shuffleType;
- (struct { long long x1; long long x2; double x3; })skipLimit;
- (unsigned long long)state;
- (bool)trackChangesCanEndPlayback;
- (bool)userCanChangeShuffleAndRepeatType;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)MPC_contentItemIdentifierCollection;
- (bool)isRadioQueueFeeder;
- (id)mpcReporting_featureName;
- (id)mpcReporting_recommendationData;
- (void)mpcReporting_setFeatureName:(id)arg1;
- (void)mpcReporting_setRecommendationData:(id)arg1;
- (id)station;

@end

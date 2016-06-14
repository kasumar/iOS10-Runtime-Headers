/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioAVPlayer : MPUAVPlayer {
    bool  _banningCurrentItemShouldSkipToNextItem;
    bool  _checkedDefaultsForLastPlayedStation;
    MPCRadioStationPlaybackMetadata * _lastPlayedStationMetadata;
    NSObject<OS_dispatch_queue> * _lastPlayedStationSaveQueue;
    NSObject<OS_dispatch_queue> * _radioUIAccessQueue;
}

@property (nonatomic) bool banningCurrentItemShouldSkipToNextItem;
@property (nonatomic, readonly) RadioStation *currentStation;
@property (nonatomic, retain) MPCRadioStationPlaybackMetadata *lastPlayedStationMetadata;

- (void).cxx_destruct;
- (void)_feederContentsDidChangeNotification:(id)arg1;
- (void)_itemLikedStateDidChangeNotification:(id)arg1;
- (void)_updateLastPlayedStationMetadata;
- (bool)banningCurrentItemShouldSkipToNextItem;
- (bool)beginOrTogglePlaybackWithCoordinator:(id)arg1;
- (bool)beginPlaybackWithCoordinator:(id)arg1;
- (id)currentStation;
- (void)dealloc;
- (id)init;
- (id)lastPlayedStationMetadata;
- (void)setBanningCurrentItemShouldSkipToNextItem:(bool)arg1;
- (void)setLastPlayedStationMetadata:(id)arg1;

@end

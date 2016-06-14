/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate_Internal> {
    NSMutableArray * _activeCommands;
    MPFeedbackCommand * _addItemToLibraryCommand;
    MPFeedbackCommand * _addNowPlayingItemToLibraryCommand;
    MPAdvanceRepeatModeCommand * _advanceRepeatModeCommand;
    MPAdvanceShuffleModeCommand * _advanceShuffleModeCommand;
    MPFeedbackCommand * _bookmarkCommand;
    NSBundle * _bundle;
    MPPurchaseCommand * _buyAlbumCommand;
    MPPurchaseCommand * _buyTrackCommand;
    bool  _canBeNowPlayingApplication;
    MPPurchaseCommand * _cancelDownloadCommand;
    MPChangePlaybackPositionCommand * _changePlaybackPositionCommand;
    MPChangePlaybackRateCommand * _changePlaybackRateCommand;
    MPChangeRepeatModeCommand * _changeRepeatModeCommand;
    MPChangeShuffleModeCommand * _changeShuffleModeCommand;
    MPRemoteCommand * _createRadioStationCommand;
    MPRemoteCommand * _disableLanguageOptionCommand;
    MPFeedbackCommand * _dislikeCommand;
    MPRemoteCommand * _enableLanguageOptionCommand;
    MPInsertIntoPlaybackQueueCommand * _insertIntoPlaybackQueueCommand;
    MPFeedbackCommand * _likeCommand;
    void * _mediaRemoteCommandHandler;
    MPRemoteCommand * _nextTrackCommand;
    bool  _observing;
    MPRemoteControlOrigin * _origin;
    MPRemoteCommand * _pauseCommand;
    MPRemoteCommand * _playCommand;
    MPPurchaseCommand * _preOrderAlbumCommand;
    MPRemoteCommand * _previousTrackCommand;
    MPRatingCommand * _ratingCommand;
    MPRemoteCommand * _removeFromPlaybackQueueCommand;
    MPReorderQueueCommand * _reorderQueueCommand;
    bool  _scheduledSupportedCommandsChangedNotification;
    MPRemoteCommand * _seekBackwardCommand;
    MPRemoteCommand * _seekForwardCommand;
    NSObject<OS_dispatch_queue> * _serialQueue;
    MPSetPlaybackQueueCommand * _setPlaybackQueueCommand;
    MPSkipIntervalCommand * _skipBackwardCommand;
    MPSkipIntervalCommand * _skipForwardCommand;
    MPRemoteCommand * _specialSeekBackwardCommand;
    MPRemoteCommand * _specialSeekForwardCommand;
    MPRemoteCommand * _stopCommand;
    MPRemoteCommand * _togglePlayPauseCommand;
}

@property (getter=_activeCommands, nonatomic, readonly) NSArray *activeCommands;
@property (nonatomic, readonly) MPFeedbackCommand *addItemToLibraryCommand;
@property (nonatomic, readonly) MPFeedbackCommand *addNowPlayingItemToLibraryCommand;
@property (nonatomic, readonly) MPAdvanceRepeatModeCommand *advanceRepeatModeCommand;
@property (nonatomic, readonly) MPAdvanceShuffleModeCommand *advanceShuffleModeCommand;
@property (nonatomic, readonly) MPFeedbackCommand *bookmarkCommand;
@property (nonatomic, readonly) MPPurchaseCommand *buyAlbumCommand;
@property (nonatomic, readonly) MPPurchaseCommand *buyTrackCommand;
@property (nonatomic, readonly) MPPurchaseCommand *cancelDownloadCommand;
@property (nonatomic, readonly) MPChangePlaybackPositionCommand *changePlaybackPositionCommand;
@property (nonatomic, readonly) MPChangePlaybackRateCommand *changePlaybackRateCommand;
@property (nonatomic, readonly) MPChangeRepeatModeCommand *changeRepeatModeCommand;
@property (nonatomic, readonly) MPChangeShuffleModeCommand *changeShuffleModeCommand;
@property (nonatomic, readonly) MPRemoteCommand *createRadioStationCommand;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPRemoteCommand *disableLanguageOptionCommand;
@property (nonatomic, readonly) MPFeedbackCommand *dislikeCommand;
@property (nonatomic, readonly) MPRemoteCommand *enableLanguageOptionCommand;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPInsertIntoPlaybackQueueCommand *insertIntoPlaybackQueueCommand;
@property (nonatomic, readonly) MPFeedbackCommand *likeCommand;
@property (nonatomic, readonly) MPRemoteCommand *nextTrackCommand;
@property (nonatomic, readonly) MPRemoteCommand *pauseCommand;
@property (nonatomic, readonly) MPRemoteCommand *playCommand;
@property (nonatomic, readonly) MPPurchaseCommand *preOrderAlbumCommand;
@property (nonatomic, readonly) MPRemoteCommand *previousTrackCommand;
@property (nonatomic, readonly) MPRatingCommand *ratingCommand;
@property (nonatomic, readonly) MPRemoteCommand *removeFromPlaybackQueueCommand;
@property (nonatomic, readonly) MPReorderQueueCommand *reorderQueueCommand;
@property (nonatomic, readonly) MPRemoteCommand *seekBackwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *seekForwardCommand;
@property (nonatomic, readonly) MPSetPlaybackQueueCommand *setPlaybackQueueCommand;
@property (nonatomic, readonly) MPSkipIntervalCommand *skipBackwardCommand;
@property (nonatomic, readonly) MPSkipIntervalCommand *skipForwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *specialSeekBackwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *specialSeekForwardCommand;
@property (nonatomic, readonly) MPRemoteCommand *stopCommand;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPRemoteCommand *togglePlayPauseCommand;

+ (id)sharedCommandCenter;

- (void).cxx_destruct;
- (id)_activeCommands;
- (void)_commandTargetsDidChangeNotification:(id)arg1;
- (struct __CFArray { }*)_copySupportedCommands;
- (id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned int)arg2;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2 completion:(id /* block */)arg3;
- (void)_scheduleSupportedCommandsChanged;
- (void)_setupMediaRemoteCommandHandler;
- (void)_setupNotifications;
- (void)_teardownMediaRemoteCommandHandler;
- (void)_teardownNotifications;
- (id)addItemToLibraryCommand;
- (id)addNowPlayingItemToLibraryCommand;
- (id)advanceRepeatModeCommand;
- (id)advanceShuffleModeCommand;
- (id)bookmarkCommand;
- (id)buyAlbumCommand;
- (id)buyTrackCommand;
- (id)cancelDownloadCommand;
- (id)changePlaybackPositionCommand;
- (id)changePlaybackRateCommand;
- (id)changeRepeatModeCommand;
- (id)changeShuffleModeCommand;
- (id)createRadioStationCommand;
- (void)dealloc;
- (id)disableLanguageOptionCommand;
- (id)dislikeCommand;
- (void)dispatchCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)enableLanguageOptionCommand;
- (id)initWithOrigin:(id)arg1 bundle:(id)arg2;
- (id)insertIntoPlaybackQueueCommand;
- (id)likeCommand;
- (id)nextTrackCommand;
- (id)pauseCommand;
- (id)playCommand;
- (id)preOrderAlbumCommand;
- (id)previousTrackCommand;
- (id)ratingCommand;
- (void)remoteCommandDidMutatePropagatableProperty:(id)arg1;
- (id)removeFromPlaybackQueueCommand;
- (id)reorderQueueCommand;
- (id)seekBackwardCommand;
- (id)seekForwardCommand;
- (id)setPlaybackQueueCommand;
- (id)skipBackwardCommand;
- (id)skipForwardCommand;
- (id)specialSeekBackwardCommand;
- (id)specialSeekForwardCommand;
- (id)stopCommand;
- (id)togglePlayPauseCommand;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayer : NSObject {
    MPRemoteCommandCenter * _commandCenter;
    MPCPlayerItemContainer * _currentContainer;
    MPCPlayerItem * _currentItem;
    NSPointerArray * _nowPlayingInfoHandlers;
    NSPointerArray * _playbackErrorObservers;
    NSPointerArray * _playbackIntentObservers;
    AVPlayer * _playerForAVPlayerLayer;
    long long  _state;
}

@property (nonatomic, retain) MPRemoteCommandCenter *commandCenter;
@property (nonatomic) MPCPlayerItemContainer *currentContainer;
@property (nonatomic) MPCPlayerItem *currentItem;
@property (nonatomic, readonly, copy) NSArray *nowPlayingInfoHandlers;
@property (nonatomic, readonly, copy) NSArray *playbackErrorObservers;
@property (nonatomic, readonly, copy) NSArray *playbackIntentObservers;
@property (nonatomic, readonly) AVPlayer *playerForAVPlayerLayer;
@property (nonatomic) long long state;

+ (Class)queueRequestOperationClass;

- (void).cxx_destruct;
- (void)addPlaybackIntent:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)clearPlaybackQueueWithCompletion:(id /* block */)arg1;
- (id)commandCenter;
- (id)currentContainer;
- (id)currentItem;
- (id)nowPlayingInfoHandlers;
- (void)performCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)playbackErrorObservers;
- (id)playbackIntentObservers;
- (id)playerForAVPlayerLayer;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)registerNowPlayingInfoHandler:(id)arg1;
- (void)registerPlaybackErrorObserver:(id)arg1;
- (void)registerPlaybackIntentObserver:(id)arg1;
- (void)setCommandCenter:(id)arg1;
- (void)setCurrentContainer:(id)arg1;
- (void)setCurrentItem:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)unregisterNowPlayingInfoHandler:(id)arg1;
- (void)unregisterPlaybackErrorObserver:(id)arg1;
- (void)unregisterPlaybackIntentObserver:(id)arg1;

@end

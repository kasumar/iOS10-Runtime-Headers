/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingInfoCenter : NSObject {
    NSDictionary * _convertedNowPlayingInfo;
    NSDictionary * _nowPlayingInfo;
    MPNowPlayingPlaybackQueueCache * _playbackQueueCache;
    <MPNowPlayingPlaybackQueueDataSource> * _playbackQueueDataSource;
    NSDate * _pushDate;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _queuedNowPlayingInfo;
}

@property (copy) NSDictionary *nowPlayingInfo;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)_init;
- (void)_pushNowPlayingInfoAndRetry:(bool)arg1;
- (void)_registerCallbacks;
- (id)init;
- (void)invalidatePlaybackQueue;
- (id)nowPlayingInfo;
- (id)nowPlayingPlaybackQueueDataSource;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueueDataSource:(id)arg1;

@end

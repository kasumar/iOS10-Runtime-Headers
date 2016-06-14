/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPStreamingVideoView : LPVideoView {
    AVPlayerLooper * _looper;
    AVQueuePlayer * _player;
}

- (void).cxx_destruct;
- (void)_createPlayer;
- (id)_platformCreateVideoPlayerView;
- (id)createVideoPlayerView;
- (void)dealloc;
- (id)init;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 disablePlayback:(bool)arg5;
- (bool)isMuted;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setMuted:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (bool)shouldAutoPlay;
- (bool)shouldShowMuteButton;

@end

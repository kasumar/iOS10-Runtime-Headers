/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLAVPlayerItemViewController : QLItemViewController <AVPlayerViewControllerDelegate> {
    bool  _fullScreen;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    QLOverlayPlayButton * _playButton;
    AVPlayer * _player;
    AVPlayerViewController * _playerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canEnterFullScreen;
- (void)enterFullScreen:(bool)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)pause;
- (void)play;
- (bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)previewDidDisappear:(bool)arg1;

@end

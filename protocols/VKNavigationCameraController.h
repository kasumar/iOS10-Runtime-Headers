/* Generated by RuntimeBrowser.
 */

@protocol VKNavigationCameraController <VKCameraController, VKPuckAnimatorDelegate>

@required

- (VKMapCanvas *)mapCanvas;
- (VKMapModel *)mapModel;
- (void)setMapCanvas:(VKMapCanvas *)arg1;
- (void)setMapModel:(VKMapModel *)arg1;
- (void)setZoomScale:(double)arg1;
- (void)startWithPounce:(void *)arg1 pounceCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)stop;
- (double)zoomScale;

@end

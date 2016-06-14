/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLErrorItemViewController : QLItemViewController {
    NSError * _error;
    QLItem * _previewItem;
}

@property (retain) NSError *error;
@property (retain) QLItem *previewItem;

- (void).cxx_destruct;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (id)error;
- (id)errorView;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadView;
- (id)previewItem;
- (void)setError:(id)arg1;
- (void)setPreviewItem:(id)arg1;

@end

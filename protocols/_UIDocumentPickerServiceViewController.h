/* Generated by RuntimeBrowser.
 */

@protocol _UIDocumentPickerServiceViewController <NSObject>

@required

- (void)didSelectItem:(_UIDocumentPickerContainerItem *)arg1;

@optional

- (void)itemsOrSelectionDidChange:(bool)arg1;
- (void)performAction:(void *)arg1 item:(void *)arg2 view:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: long long, _UIDocumentPickerContainerItem *, UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIViewController *)previewViewControllerForItem:(_UIDocumentPickerContainerItem *)arg1;
- (bool)shouldShowAction:(long long)arg1;

@end

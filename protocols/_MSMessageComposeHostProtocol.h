/* Generated by RuntimeBrowser.
 */

@protocol _MSMessageComposeHostProtocol <NSObject>

@required

- (void)_dismiss;
- (void)_requestPresentationStyleExpanded:(bool)arg1;
- (void)_stageAppItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: MSMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_stageMediaItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: _MSMessageMediaPayload *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_stageRichLink:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: MSRichLink *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_startDragMediaItem:(void *)arg1 frameInRemoteView:(void *)arg2 fence:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: _MSMessageMediaPayload *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end

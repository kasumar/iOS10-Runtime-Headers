/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface> {
    <DDParsecHostVCInterface> * _hostSideDelegate;
    bool  _receivedInteractionDidFinish;
}

@property <DDParsecHostVCInterface> *hostSideDelegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)hostSideDelegate;
- (void)interactionEnded;
- (void)openParsecURL:(id)arg1;
- (void)setHostSideDelegate:(id)arg1;
- (void)showingErrorView:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

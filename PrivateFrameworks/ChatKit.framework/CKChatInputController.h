/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatInputController : NSObject <CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerSendDelegate, CKBrowserViewControllerStoreSendDelegate, CKDeviceOrientationManagerDelegate, CKFullScreenAppViewControllerDelegate, CKHandwritingPresentationControllerDelegate, CKHandwritingViewControllerSendDelegate, CKMessageEntryViewInputDelegate, CKPhotoBrowserViewControllerSendDelegate, CKPluginEntryViewControllerDelegate> {
    IMBalloonPlugin * _browserPlugin;
    IMBalloonPluginDataSource * _browserPluginDataSource;
    CKBrowserSwitcherViewController * _browserSwitcher;
    CKKeyboardContentViewController * _currentInputViewController;
    <CKChatInputControllerDelegate> * _delegate;
    CKBrowserTransitionCoordinator * _digitalTouchTransitionCoordinator;
    UIWindow * _dimmingWindow;
    IMScheduledUpdater * _dismissEntryViewShelfUpdater;
    CKMessageEntryView * _entryView;
    CKHandwritingPresentationController * _handwritingPresentationController;
    bool  _inputViewVisible;
    bool  _keyboardIsHiding;
    UIViewController<CKBrowserViewControllerProtocol> * _modalBrowserViewController;
    CKDeviceOrientationManager * _orientationManager;
    CKScheduledUpdater * _orientationUpdater;
    UINavigationController * _presentedBrowserNavigationController;
    CKKeyboardContentViewController * _switcherInputViewController;
}

@property (nonatomic, retain) IMBalloonPlugin *browserPlugin;
@property (nonatomic, retain) IMBalloonPluginDataSource *browserPluginDataSource;
@property (nonatomic, readonly) bool browserShouldAutorotate;
@property (nonatomic, retain) CKBrowserSwitcherViewController *browserSwitcher;
@property (nonatomic, retain) CKKeyboardContentViewController *currentInputViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKChatInputControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKBrowserTransitionCoordinator *digitalTouchTransitionCoordinator;
@property (nonatomic, retain) UIWindow *dimmingWindow;
@property (nonatomic, retain) IMScheduledUpdater *dismissEntryViewShelfUpdater;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (nonatomic, readonly) UIView *fullscreenIAVOverride;
@property (readonly) bool handwritingIsPresentedFullScreen;
@property (nonatomic, retain) CKHandwritingPresentationController *handwritingPresentationController;
@property (readonly) unsigned long long hash;
@property (getter=isInputViewVisible, nonatomic) bool inputViewVisible;
@property (nonatomic) bool keyboardIsHiding;
@property (nonatomic, retain) UIViewController<CKBrowserViewControllerProtocol> *modalBrowserViewController;
@property (nonatomic, retain) CKDeviceOrientationManager *orientationManager;
@property (nonatomic, retain) CKScheduledUpdater *orientationUpdater;
@property (nonatomic, retain) UINavigationController *presentedBrowserNavigationController;
@property (nonatomic, readonly) bool presentsHandwritingOnRotation;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKKeyboardContentViewController *switcherInputViewController;

- (void).cxx_destruct;
- (id)_adamIDFromPluginPayloadData:(id)arg1;
- (bool)_currentPluginIsDT;
- (bool)_currentPluginIsHandwriting;
- (void)_deferredCommitPayload:(id)arg1;
- (void)_deferredCommitSticker:(id)arg1;
- (void)_deferredDismissToKeyboardAndFocusEntryView:(id)arg1;
- (void)_deferredRequestPresentationStyleExpanded:(id)arg1;
- (void)_dimmingWindowTapped:(id)arg1;
- (void)_dismissBrowserViewControllerAndReloadInputViews:(bool)arg1;
- (void)_flashDimmingWindowWithFadeDuration:(double)arg1 initialAlpha:(double)arg2;
- (void)_handleOrientation;
- (bool)_handwritingIsDisplayed;
- (void)_loadPhotosBrowser;
- (bool)_shouldSendTypingIndicatorDataForPluginIdentifier:(id)arg1;
- (void)_showAppStoreWithAdamID:(id)arg1;
- (void)_startEditingPayload:(id)arg1;
- (bool)_switcherPluginCanMessageAPI;
- (void)applicationWillAddDeactivationReasonNotification:(id)arg1;
- (id)browserPlugin;
- (id)browserPluginDataSource;
- (bool)browserShouldAutorotate;
- (id)browserSwitcher;
- (void)browserTransitionCoordinator:(id)arg1 expandedStateDidChange:(bool)arg2 withReason:(long long)arg3;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)clearBrowserViewControllerIfNecessary;
- (void)commitPayload:(id)arg1;
- (void)commitSticker:(id)arg1;
- (void)commitSticker:(id)arg1 atScreenCoordinate:(struct CGPoint { double x1; double x2; })arg2 scale:(double)arg3 rotation:(double)arg4;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (id)currentInputViewController;
- (void)dealloc;
- (id)delegate;
- (void)deviceOrientationManager:(id)arg1 orientationDidChange:(long long)arg2;
- (void)didBeginInstallingAppWithBundleIdentifier:(id)arg1;
- (id)digitalTouchTransitionCoordinator;
- (id)dimmingWindow;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(bool)arg1;
- (void)dismissBrowserViewController;
- (void)dismissEntryViewShelf;
- (id)dismissEntryViewShelfUpdater;
- (void)dismissPlugin;
- (id)dragControllerTranscriptDelegate;
- (id)entryView;
- (void)entryViewDidChangeSize;
- (id)entryViewSnapshotForBrowserTransitionCoordinator:(id)arg1;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
- (id)fullscreenIAVOverride;
- (bool)handwritingIsPresentedFullScreen;
- (id)handwritingPresentationController;
- (void)handwritingPresentationControllerDidShowHandwriting:(id)arg1;
- (void)handwritingPresentationControllerWillHideHandwriting:(id)arg1;
- (id)init;
- (id)inputAccessoryView;
- (id)inputViewController;
- (bool)isInputViewVisible;
- (void)keyboardDidHide:(id)arg1;
- (bool)keyboardIsHiding;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)launchAppExtensionDevelopmentTarget;
- (bool)messageEntryShouldHideCaret:(id)arg1;
- (void)messageEntryViewBrowserButtonHit:(id)arg1;
- (void)messageEntryViewBrowserButtonLongPress:(id)arg1;
- (void)messageEntryViewDidTakeFocus:(id)arg1;
- (void)messageEntryViewDigitalTouchButtonHit:(id)arg1;
- (void)messageEntryViewHandwritingButtonHit:(id)arg1;
- (long long)messageEntryViewHighLightInputButton:(id)arg1;
- (void)messageEntryViewPhotoButtonHit:(id)arg1;
- (id)modalBrowserViewController;
- (void)notifyBrowserViewControllerOfMatchingNewMessages:(id)arg1;
- (id)orientationManager;
- (id)orientationUpdater;
- (id)pluginBundleID;
- (void)prepareForSuspend;
- (void)presentAppStoreForAdamID:(id)arg1;
- (void)presentViewControllerWithPluginChatItem:(id)arg1 expanded:(bool)arg2;
- (id)presentedBrowserNavigationController;
- (bool)presentsHandwritingOnRotation;
- (void)requestPhotoBrowserInitFromDraft:(id)arg1;
- (void)requestPhotoBrowserToAppendFinalImagesToComposition;
- (void)requestPhotoBrowserToPrepareForDraft;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)setBrowserPlugin:(id)arg1;
- (void)setBrowserPluginDataSource:(id)arg1;
- (void)setBrowserSwitcher:(id)arg1;
- (void)setCurrentInputViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDigitalTouchTransitionCoordinator:(id)arg1;
- (void)setDimmingWindow:(id)arg1;
- (void)setDismissEntryViewShelfUpdater:(id)arg1;
- (void)setEntryView:(id)arg1;
- (void)setEntryViewHidden:(bool)arg1;
- (void)setHandwritingPresentationController:(id)arg1;
- (void)setInputViewVisible:(bool)arg1;
- (void)setInputViewVisible:(bool)arg1 entryFieldCollapsed:(bool)arg2 animated:(bool)arg3;
- (void)setKeyboardIsHiding:(bool)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)setModalBrowserViewController:(id)arg1;
- (void)setOrientationManager:(id)arg1;
- (void)setOrientationUpdater:(id)arg1;
- (void)setPresentedBrowserNavigationController:(id)arg1;
- (void)setSwitcherInputViewController:(id)arg1;
- (void)showAppsBrowser;
- (void)showBrowserForPlugin:(id)arg1 dataSource:(id)arg2 expanded:(bool)arg3;
- (void)showDTCompose;
- (void)showEntryViewShelf:(id)arg1;
- (void)showHandwritingBrowser;
- (void)showHandwritingBrowserWithExistingPayload:(id)arg1;
- (void)showKeyboard;
- (void)showPhotosBrowser;
- (void)startEditingPayload:(id)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(bool)arg2;
- (id)switcherInputViewController;
- (void)switcherViewController:(id)arg1 willHideSelectionViewWithAnimations:(id /* block */*)arg2 completion:(id /* block */*)arg3;
- (void)switcherViewController:(id)arg1 willShowSelectionViewWithAnimations:(id /* block */*)arg2 completion:(id /* block */*)arg3;
- (void)switcherViewControllerDidCollapse:(id)arg1;
- (void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
- (void)switcherViewControllerDidSelectAppStore:(id)arg1;
- (void)switcherViewControllerDidStartSwitching:(id)arg1;
- (id)workingDirForDraft;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillController : NSObject <WBUFormMetadataObserver> {
    <WBUFormAutoFiller> * _autoFiller;
    <WBUFormAutoFillControllerDelegate> * _delegate;
    NSMutableDictionary * _metadataReplyIdentifierToCompletion;
    NSTimer * _prefillTimer;
    _WKRemoteObjectInterface * _remoteObjectInterface;
    WBUFormAutocompleteStateWK2 * _state;
    WBUFormAutoFillWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView<WBUFormAutoFillWebView> *webView;

- (void).cxx_destruct;
- (void)_autoFillLoginFormSynchronously:(id)arg1 inFrame:(id)arg2;
- (void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)_prefillTimerFired:(id)arg1;
- (void)annotateForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)autoFill;
- (void)autoFillForm:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(bool)arg3 andFocusField:(id)arg4;
- (void)autoFillFromSuggestion:(id)arg1;
- (void)dealloc;
- (void)didCollectFormMetadata:(id)arg1 textFieldMetadata:(id)arg2 replyIdentifier:(id)arg3;
- (void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
- (void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
- (void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)fieldFocusedWithInputSession:(id)arg1;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)prefillFormsSoonIfNeeded;
- (void)setFormControls:(id)arg1 areAutoFilled:(bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (id)webView;
- (void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 loadingIsDeferred:(bool)arg3;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(id /* block */)arg3;
- (void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(id /* block */)arg3;

@end

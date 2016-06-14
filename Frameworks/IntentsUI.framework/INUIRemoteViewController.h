/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface INUIRemoteViewController : _UIRemoteViewController <_INUIRemoteViewControllerHosting> {
    <INUIRemoteViewControllerDelegate> * _delegate;
    _INUIExtensionHostContext * _extensionHostContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INUIExtensionHostContext *extensionHostContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (id)exportedInterface;
+ (void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_errorHandlingServiceViewControllerProxy;
- (void)_queryRepresentedPropertiesWithCompletion:(id /* block */)arg1;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(id /* block */)arg3;
- (id)delegate;
- (id)extensionHostContext;
- (void)serviceViewControllerDesiresConstrainedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtensionHostContext:(id)arg1;
- (void)updateSize;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

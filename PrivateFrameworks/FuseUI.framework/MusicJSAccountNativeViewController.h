/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSAccountNativeViewController : MusicJSNativeViewController <MusicJSAccountNativeViewController> {
    IKAppDocument * _accountDocument;
    NSDictionary * _accountDocumentOptions;
    IKDOMDocument * _accountJSDocument;
    <MusicJSAccountNativeViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) IKAppDocument *accountDocument;
@property (nonatomic, readonly) NSDictionary *accountDocumentOptions;
@property (nonatomic) <MusicJSAccountNativeViewControllerDelegate> *delegate;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;

- (void).cxx_destruct;
- (id)accountDocument;
- (id)accountDocumentOptions;
- (void)close;
- (id)delegate;
- (id)nativeViewIdentifier;
- (void)setAccountDocument:(id)arg1 :(id)arg2;
- (void)setDelegate:(id)arg1;

@end

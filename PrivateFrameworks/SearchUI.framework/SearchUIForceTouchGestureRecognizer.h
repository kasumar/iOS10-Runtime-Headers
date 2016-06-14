/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIForceTouchGestureRecognizer : SBUIForceTouchGestureRecognizer {
    SBFApplication * _application;
    SFSearchResult * _result;
    UIView * _thumbnailView;
}

@property (retain) SBFApplication *application;
@property (retain) SFSearchResult *result;
@property (retain) UIView *thumbnailView;

- (void).cxx_destruct;
- (id)application;
- (id)bundleID;
- (id)bundleURL;
- (double)cornerRadius;
- (id)initWithView:(id)arg1;
- (id)result;
- (void)setApplication:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (id)shortcutItems;
- (id)thumbnailView;
- (id)thumbnailViewCopy;
- (void)updateApplicationIfNecessary;
- (void)updateWithResult:(id)arg1;
- (id)widgetBundleID;

@end

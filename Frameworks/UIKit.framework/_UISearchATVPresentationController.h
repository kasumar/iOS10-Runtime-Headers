/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISearchATVPresentationController : _UISearchPresentationController {
    UIVisualEffectView * _blurView;
}

@property (nonatomic, retain) UIVisualEffectView *blurView;

- (void).cxx_destruct;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x1; long long x2; })arg1;
- (id)adaptivePresentationController;
- (long long)adaptivePresentationStyle;
- (bool)animatorShouldLayoutPresentationViews;
- (id)backgroundObscuringView;
- (id)blurView;
- (unsigned long long)edgeForHidingNavigationBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForContainerView;
- (bool)forceObeyNavigationBarInsets;
- (void)hideBackgroundObscuringView;
- (double)resultsControllerContentOffset;
- (bool)resultsUnderlapsSearchBar;
- (bool)searchBarCanContainScopeBar;
- (bool)searchBarShouldClipToBounds;
- (bool)searchBarToBecomeTopAttached;
- (void)setBlurView:(id)arg1;
- (void)setContentVisible:(bool)arg1;
- (bool)shouldAccountForStatusBar;
- (void)showBackgroundObscuringView;
- (double)statusBarAdjustment;
- (void)traitCollectionDidChange:(id)arg1;

@end

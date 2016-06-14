/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBarsController : NSObject {
    bool  __isUpdateScheduled;
    bool  __needsUpdateBars;
    bool  __needsUpdateContentGuideInsets;
    bool  __needsUpdateGestureRecognizers;
    long long  __updateBarsDisabledCount;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentGuideInsets;
    <PUBarsControllerDelegate> * _delegate;
    struct { 
        bool respondsToViewController; 
        bool respondsToViewHostingGestureRecognizers; 
        bool respondsToContentGuideInsetsDidChange; 
    }  _delegateFlags;
    UIViewController * _viewController;
}

@property (setter=_setUpdateScheduled:, nonatomic) bool _isUpdateScheduled;
@property (setter=_setNeedsUpdateBars:, nonatomic) bool _needsUpdateBars;
@property (setter=_setNeedsUpdateContentGuideInsets:, nonatomic) bool _needsUpdateContentGuideInsets;
@property (setter=_setNeedsUpdateGestureRecognizers:, nonatomic) bool _needsUpdateGestureRecognizers;
@property (setter=_setUpdateBarsDisabledCount:, nonatomic) long long _updateBarsDisabledCount;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentGuideInsets;
@property (nonatomic) <PUBarsControllerDelegate> *delegate;
@property (nonatomic, readonly) long long preferredBarStyle;
@property (nonatomic, readonly) bool prefersStatusBarHidden;
@property (nonatomic) UIViewController *viewController;
@property (nonatomic, readonly) bool wantsNavigationBarVisible;
@property (nonatomic, readonly) bool wantsToolbarVisible;

- (void).cxx_destruct;
- (void)_invalidateGestureRecognizers;
- (bool)_isUpdateBarsDisabled;
- (bool)_isUpdateScheduled;
- (bool)_needsUpdate;
- (bool)_needsUpdateBars;
- (bool)_needsUpdateContentGuideInsets;
- (bool)_needsUpdateGestureRecognizers;
- (void)_reenableUpdateBars;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateBars:(bool)arg1;
- (void)_setNeedsUpdateContentGuideInsets:(bool)arg1;
- (void)_setNeedsUpdateGestureRecognizers:(bool)arg1;
- (void)_setUpdateBarsDisabledCount:(long long)arg1;
- (void)_setUpdateScheduled:(bool)arg1;
- (long long)_updateBarsDisabledCount;
- (void)_updateBarsIfNeeded;
- (void)_updateContentGuideInsetsIfNeeded;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_updateNowIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentGuideInsets;
- (id)delegate;
- (void)disableUpdateBarsForDuration:(double)arg1;
- (id)init;
- (void)invalidateBars;
- (void)invalidateContentGuideInsets;
- (void)invalidateViewControllerView;
- (void)invalidateViewHostingGestureRecognizers;
- (bool)isLocationFromProviderInBarsArea:(id)arg1;
- (long long)preferredBarStyle;
- (bool)prefersStatusBarHidden;
- (void)setContentGuideInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)updateBars;
- (void)updateContentGuideInsets;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)updateIfNeeded;
- (id)viewController;
- (bool)wantsNavigationBarVisible;
- (bool)wantsToolbarVisible;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLInteractiveTransitionController : QLTransitionController <UIViewControllerInteractiveTransitioning> {
    double  _completeProgress;
    double  _initialTransitioningViewWidth;
}

@property (nonatomic) double completeProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (double)completeProgress;
- (void)completeTransition:(bool)arg1 withDuration:(double)arg2;
- (void)setCompleteProgress:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateTransitionWithProgress:(double)arg1;

@end

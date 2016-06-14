/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIChevronView : UIView <_SBFVibrantView> {
    double  _alphaComponent;
    UIView * _alphaContainerView;
    double  _animationDuration;
    UIView * _backgroundView;
    UIColor * _color;
    UIView * _leftGrabberView;
    UIView * _rightGrabberView;
    long long  _state;
    UIView * _tintView;
    bool  _unified;
    _SBFVibrantSettings * _vibrantSettings;
}

@property (nonatomic) double animationDuration;
@property (nonatomic, retain) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SBFVibrantSettings *vibrantSettings;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(bool)arg3;
- (void)_layoutGrabberView:(id)arg1 forState:(long long)arg2;
- (bool)_setState:(long long)arg1;
- (bool)_setUnified:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForGrabberView:(id)arg1 forState:(long long)arg2;
- (double)animationDuration;
- (id)color;
- (id)description;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAnimationDuration:(double)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2;
- (void)setVibrantSettings:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)state;
- (id)vibrantSettings;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULightbulbIconContentView : HUIconContentView {
    double  _brightness;
    HUAnimatableFilterImageView * _coloredBaseView;
    HUAnimatableFilterImageView * _coloredBulbView;
    NSArray * _contentConstraints;
    UIVisualEffectView * _vibrantBaseEffectView;
    HUAnimatableFilterImageView * _vibrantBaseView;
    HUAnimatableFilterImageView * _vibrantBulbView;
    UIVisualEffectView * _vibrantOutlineEffectView;
}

@property (nonatomic) double brightness;
@property (nonatomic, retain) HUAnimatableFilterImageView *coloredBaseView;
@property (nonatomic, retain) HUAnimatableFilterImageView *coloredBulbView;
@property (nonatomic, retain) NSArray *contentConstraints;
@property (nonatomic, retain) UIVisualEffectView *vibrantBaseEffectView;
@property (nonatomic, retain) HUAnimatableFilterImageView *vibrantBaseView;
@property (nonatomic, retain) HUAnimatableFilterImageView *vibrantBulbView;
@property (nonatomic, retain) UIVisualEffectView *vibrantOutlineEffectView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)_allImageViews;
- (bool)_shouldApplyVibrancy;
- (id)_tintColorForImageView:(id)arg1 style:(unsigned long long)arg2;
- (void)_updateBulbState;
- (void)_updateDisplayContextState;
- (void)_updateImages;
- (void)_updateVisualEffect;
- (double)brightness;
- (id)coloredBaseView;
- (id)coloredBulbView;
- (id)contentConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)setBrightness:(double)arg1;
- (void)setColoredBaseView:(id)arg1;
- (void)setColoredBulbView:(id)arg1;
- (void)setContentConstraints:(id)arg1;
- (void)setDisplayContext:(unsigned long long)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (void)setVibrantBaseEffectView:(id)arg1;
- (void)setVibrantBaseView:(id)arg1;
- (void)setVibrantBulbView:(id)arg1;
- (void)setVibrantOutlineEffectView:(id)arg1;
- (void)updateConstraints;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (id)vibrantBaseEffectView;
- (id)vibrantBaseView;
- (id)vibrantBulbView;
- (id)vibrantOutlineEffectView;
- (bool)wantsManagedVibrancyEffect;

@end

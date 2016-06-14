/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFloatingContentView : UIView {
    bool  __disableOutsetShadowPath;
    struct CGSize { 
        double width; 
        double height; 
    }  _asymmetricFocusedSizeIncrease;
    struct CGSize { 
        double width; 
        double height; 
    }  _asymmetricScaleFactor;
    struct __CFDictionary { } * _backgroundColorsByState;
    _UIFloatingContentSpecialAnimatingView * _containerView;
    NSMutableArray * _contentMotionEffects;
    bool  _contentOpaque;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentRotation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentTranslation;
    UIView * _contentView;
    unsigned long long  _controlState;
    double  _cornerRadius;
    bool  _customScale;
    <_UIFloatingContentViewDelegate> * _floatingContentViewDelegate;
    _UIFocusAnimationConfiguration * _focusAnimationConfiguration;
    id /* block */  _focusAnimationConfigurationHandler;
    struct CGPoint { 
        double x; 
        double y; 
    }  _focusDirection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _focusScaleAnchorPoint;
    long long  _highlightStyle;
    _UIFloatingContentSpecialAnimatingView * _highlightView;
    bool  _roundContentWhenDeselected;
    bool  _scalesBackwards;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _shadowContentsCenter;
    bool  _shadowEnabled;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowExpansion;
    UIImage * _shadowImage;
    double  _shadowOpacityDark;
    double  _shadowOpacityLight;
    double  _shadowRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowSize;
    double  _shadowVerticalOffset;
    UIView * _shadowView;
    bool  _stretchableShadowImage;
    bool  _symmetricScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _unfocusedShadowExpansion;
    double  _unfocusedShadowOpacity;
    double  _unfocusedShadowRadius;
    double  _unfocusedShadowVerticalOffset;
    bool  _useShadowImage;
    _UIFloatingContentSpecialAnimatingView * _visualEffectContainerView;
}

@property (nonatomic) bool _disableOutsetShadowPath;
@property (nonatomic) struct CGSize { double x1; double x2; } asymmetricFocusedSizeIncrease;
@property (nonatomic) struct CGSize { double x1; double x2; } asymmetricScaleFactor;
@property (nonatomic) bool clipsContentToBounds;
@property (getter=isContentOpaque, nonatomic) bool contentOpaque;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) unsigned long long controlState;
@property (nonatomic) double cornerRadius;
@property (nonatomic) <_UIFloatingContentViewDelegate> *floatingContentDelegate;
@property (nonatomic, copy) _UIFocusAnimationConfiguration *focusAnimationConfiguration;
@property (nonatomic, copy) id /* block */ focusAnimationConfigurationHandler;
@property (nonatomic) struct CGPoint { double x1; double x2; } focusScaleAnchorPoint;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) long long highlightStyle;
@property (nonatomic) bool roundContentWhenDeselected;
@property (nonatomic) double scaleFactor;
@property (nonatomic) bool scalesBackwards;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } shadowContentsCenter;
@property (getter=isShadowEnabled, nonatomic) bool shadowEnabled;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowExpansion;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowSize;
@property (nonatomic) double shadowVerticalOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } unfocusedShadowExpansion;
@property (nonatomic) double unfocusedShadowOpacity;
@property (nonatomic) double unfocusedShadowRadius;
@property (nonatomic) double unfocusedShadowVerticalOffset;
@property (nonatomic) bool useShadowImage;
@property (nonatomic, readonly) UIView *visualEffectContainerView;

+ (id)_defaultFocusAnimationConfiguration;
+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (double)_currentShadowOpacity;
- (bool)_disableOutsetShadowPath;
- (double)_effectiveShadowOpacity;
- (double)_effectiveShadowRadius;
- (void)_installContentMotionEffects;
- (void)_layoutShadow;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (unsigned long long)_primaryStateForState:(unsigned long long)arg1;
- (void)_setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (void)_setShadowImageIfNeeded;
- (struct CGPath { }*)_shadowPathForSize:(struct CGSize { double x1; double x2; })arg1 radius:(double)arg2;
- (bool)_shouldAppearToFloatForPrimaryState:(unsigned long long)arg1;
- (bool)_shouldApplyCornerRadiusForPrimaryState:(unsigned long long)arg1;
- (void)_uninstallContentMotionEffects;
- (void)_updateBackgroundViewForPrimaryState:(unsigned long long)arg1;
- (void)_updateHighlightViewForPrimaryState:(unsigned long long)arg1;
- (void)_updateScaleFactor;
- (void)_updateShadowContentsScaleForPrimaryState:(unsigned long long)arg1;
- (void)_updateShadowLayer;
- (void)_updateShadowOpacityForPrimaryState:(unsigned long long)arg1;
- (void)_updateTransformForPrimaryState:(unsigned long long)arg1;
- (void)addContentMotionEffect:(id)arg1;
- (struct CGSize { double x1; double x2; })asymmetricFocusedSizeIncrease;
- (struct CGSize { double x1; double x2; })asymmetricScaleFactor;
- (id)backgroundColorForState:(unsigned long long)arg1;
- (bool)canBecomeFocused;
- (bool)clipsContentToBounds;
- (id)contentView;
- (unsigned long long)controlState;
- (double)cornerRadius;
- (void)dealloc;
- (id)floatingContentDelegate;
- (id)focusAnimationConfiguration;
- (id /* block */)focusAnimationConfigurationHandler;
- (struct CGPoint { double x1; double x2; })focusScaleAnchorPoint;
- (double)focusedSizeIncrease;
- (long long)highlightStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isContentOpaque;
- (bool)isShadowEnabled;
- (void)layoutSubviews;
- (void)removeContentMotionEffect:(id)arg1;
- (bool)roundContentWhenDeselected;
- (double)scaleFactor;
- (bool)scalesBackwards;
- (void)setAsymmetricFocusedSizeIncrease:(struct CGSize { double x1; double x2; })arg1;
- (void)setAsymmetricScaleFactor:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClipsContentToBounds:(bool)arg1;
- (void)setContentMotionRotation:(struct CGPoint { double x1; double x2; })arg1 translation:(struct CGPoint { double x1; double x2; })arg2;
- (void)setContentOpaque:(bool)arg1;
- (void)setControlState:(unsigned long long)arg1;
- (void)setControlState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (void)setCornerRadius:(double)arg1;
- (void)setFloatingContentDelegate:(id)arg1;
- (void)setFocusAnimationConfiguration:(id)arg1;
- (void)setFocusAnimationConfigurationHandler:(id /* block */)arg1;
- (void)setFocusScaleAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFocusedSizeIncrease:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightStyle:(long long)arg1;
- (void)setRoundContentWhenDeselected:(bool)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setScalesBackwards:(bool)arg1;
- (void)setShadowContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShadowEnabled:(bool)arg1;
- (void)setShadowExpansion:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowImage:(id)arg1;
- (void)setShadowImage:(id)arg1 stretchable:(bool)arg2;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowOpacity:(double)arg1 forUserInterfaceStyle:(long long)arg2;
- (void)setShadowRadius:(double)arg1;
- (void)setShadowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowVerticalOffset:(double)arg1;
- (void)setUnfocusedShadowExpansion:(struct CGSize { double x1; double x2; })arg1;
- (void)setUnfocusedShadowOpacity:(double)arg1;
- (void)setUnfocusedShadowRadius:(double)arg1;
- (void)setUnfocusedShadowVerticalOffset:(double)arg1;
- (void)setUseShadowImage:(bool)arg1;
- (void)set_disableOutsetShadowPath:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shadowContentsCenter;
- (struct CGSize { double x1; double x2; })shadowExpansion;
- (id)shadowImage;
- (double)shadowOpacity;
- (double)shadowOpacityForUserInterfaceStyle:(long long)arg1;
- (double)shadowRadius;
- (struct CGSize { double x1; double x2; })shadowSize;
- (double)shadowVerticalOffset;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })unfocusedShadowExpansion;
- (double)unfocusedShadowOpacity;
- (double)unfocusedShadowRadius;
- (double)unfocusedShadowVerticalOffset;
- (bool)useShadowImage;
- (id)visualEffectContainerView;

@end

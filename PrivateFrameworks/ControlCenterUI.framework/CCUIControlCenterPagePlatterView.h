/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIControlCenterPagePlatterView : UIView {
    NCMaterialView * _baseMaterialView;
    NSLayoutConstraint * _bottomMargin;
    UIView * _contentView;
    NSLayoutConstraint * _leadingMargin;
    NSSet * _renderedPunchOutMasks;
    NSLayoutConstraint * _topMargin;
    NSLayoutConstraint * _trailingMargin;
    UIImageView * _whiteLayerView;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;

- (void).cxx_destruct;
- (void)_recursivelyVisitSubviewsOfView:(id)arg1 forPunchedThroughView:(id)arg2 collectingMasksIn:(id)arg3;
- (void)_rerenderPunchThroughMaskIfNecessary;
- (bool)_searchForUpdatedMask;
- (id)ccuiPunchOutMaskedContainer;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)setContentView:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end

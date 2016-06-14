/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContextualMemoriesSettingsValueTableViewCell : UITableViewCell {
    NSLayoutConstraint * _bottomLayoutMarginConstraint;
    UIView * _containerView;
    NSLayoutConstraint * _leftLayoutMarginConstraint;
    UIButton * _resetButton;
    id /* block */  _resetHandler;
    NSLayoutConstraint * _rightLayoutMarginConstraint;
    NSLayoutConstraint * _topLayoutMarginConstraint;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomLayoutMarginConstraint;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) NSLayoutConstraint *leftLayoutMarginConstraint;
@property (nonatomic, retain) UIButton *resetButton;
@property (nonatomic, copy) id /* block */ resetHandler;
@property (nonatomic, retain) NSLayoutConstraint *rightLayoutMarginConstraint;
@property (nonatomic, retain) NSLayoutConstraint *topLayoutMarginConstraint;
@property (nonatomic, readonly) UILabel *valueLabel;

- (void).cxx_destruct;
- (void)_didPressReset:(id)arg1;
- (void)_setUpConstraints;
- (id)bottomLayoutMarginConstraint;
- (id)containerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (id)leftLayoutMarginConstraint;
- (id)resetButton;
- (id /* block */)resetHandler;
- (id)rightLayoutMarginConstraint;
- (void)setBottomLayoutMarginConstraint:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setLeftLayoutMarginConstraint:(id)arg1;
- (void)setResetButton:(id)arg1;
- (void)setResetHandler:(id /* block */)arg1;
- (void)setRightLayoutMarginConstraint:(id)arg1;
- (void)setTopLayoutMarginConstraint:(id)arg1;
- (id)topLayoutMarginConstraint;
- (id)valueLabel;

@end

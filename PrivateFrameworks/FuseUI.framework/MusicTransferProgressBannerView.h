/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTransferProgressBannerView : UIControl {
    bool  _didInitialHighlightForTouch;
    UILabel * _label;
    float  _progress;
    UIView * _progressView;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) float progress;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (float)progress;
- (void)setHighlighted:(bool)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

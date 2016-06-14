/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFocusIndicatorView : UIView {
    int  __exposureBiasSide;
    CAMExposureBiasSlider * __exposureBiasSlider;
    CAMFocusIndicatorRectView * __rectView;
    <CAMFocusIndicatorViewDelegate> * _delegate;
    float  _exposureBiasMaximum;
    float  _exposureBiasMinimum;
    float  _exposureBiasValue;
    bool  _showExposureBias;
    long long  _size;
}

@property (nonatomic) int _exposureBiasSide;
@property (nonatomic, readonly) CAMExposureBiasSlider *_exposureBiasSlider;
@property (nonatomic, readonly) CAMFocusIndicatorRectView *_rectView;
@property (nonatomic) <CAMFocusIndicatorViewDelegate> *delegate;
@property (nonatomic) float exposureBiasMaximum;
@property (nonatomic) float exposureBiasMinimum;
@property (nonatomic) float exposureBiasValue;
@property (getter=isPulsing, nonatomic, readonly) bool pulsing;
@property (nonatomic) bool showExposureBias;
@property (nonatomic) long long size;

- (void).cxx_destruct;
- (void)_commonCAMFocusIndicatorViewInitialization;
- (void)_createExposureBiasSlider;
- (void)_createRectViewAndUpdateBounds;
- (int)_exposureBiasSide;
- (id)_exposureBiasSlider;
- (void)_layoutExposureBiasSlider;
- (void)_layoutRectView:(id)arg1;
- (id)_rectView;
- (id)delegate;
- (float)exposureBiasMaximum;
- (float)exposureBiasMinimum;
- (float)exposureBiasValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSize:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPulsing;
- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExposureBiasMaximum:(float)arg1;
- (void)setExposureBiasMinimum:(float)arg1;
- (void)setExposureBiasSide:(int)arg1 animated:(bool)arg2;
- (void)setExposureBiasValue:(float)arg1;
- (void)setShowExposureBias:(bool)arg1;
- (void)setSize:(long long)arg1;
- (void)setSize:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setTintColor:(id)arg1;
- (void)set_exposureBiasSide:(int)arg1;
- (bool)showExposureBias;
- (long long)size;
- (void)startPulsing;
- (void)startScalingWithRepeatCount:(unsigned long long)arg1;
- (void)stopPulsing;

@end

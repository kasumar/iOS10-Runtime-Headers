/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStaticScrollBar : UIView {
    NSArray * _constraints;
    UIView * _dividerLine;
    UIButton * _downButton;
    NSInvocation * _invocation;
    bool  _shouldInsetButtonsForIndex;
    UIButton * _upButton;
}

@property (nonatomic, readonly) bool isOnLeftSide;
@property (nonatomic) bool shouldInsetButtonsForIndex;

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centeringBounds;
- (bool)isOnLeftSide;
- (void)setShouldInsetButtonsForIndex:(bool)arg1;
- (void)setTarget:(id)arg1 forAction:(SEL)arg2;
- (bool)shouldInsetButtonsForIndex;
- (void)updateConstraints;
- (void)willMoveToWindow:(id)arg1;

@end

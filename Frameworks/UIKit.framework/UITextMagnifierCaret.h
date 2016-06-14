/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextMagnifierCaret : UITextMagnifier {
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    double  _yOffset;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) double yOffset;

+ (id)sharedCaretMagnifier;

- (struct CGPoint { double x1; double x2; })animationPoint;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint { double x1; double x2; })arg3 offset:(struct CGPoint { double x1; double x2; })arg4 animated:(bool)arg5;
- (id)initWithFrame;
- (bool)isHorizontal;
- (struct CGPoint { double x1; double x2; })offset;
- (void)remove;
- (void)setAnimationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAutoscrollDirections:(int)arg1;
- (void)setMagnificationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setYOffset:(double)arg1;
- (void)stopMagnifying:(bool)arg1;
- (bool)terminalPointPlacedCarefully;
- (void)updateFrameAndOffset;
- (double)yOffset;
- (void)zoomDownAnimation;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimation;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;

@end

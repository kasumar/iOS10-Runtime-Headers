/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKModernUserLocationHeadingConeLayer : MKUserLocationHeadingConeLayer

- (void)_createMaskLayer;
- (id)_headingImage:(struct CGPoint { double x1; double x2; }*)arg1;
- (unsigned long long)_keyframeIndexForAccuracy:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_normalizedHeadingMaskRectForIndex:(unsigned long long)arg1;
- (bool)_shouldShowHeadingForAccuracy:(double)arg1;
- (void)_updateHeadingMaskForAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)_updateShowHeadingForAccuracy:(double)arg1;
- (id)initWithUserLocationView:(id)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;

@end

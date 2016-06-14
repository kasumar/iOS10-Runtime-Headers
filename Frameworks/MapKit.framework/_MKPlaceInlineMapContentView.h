/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {
    MKViewWithHairline * _hairlineView;
    UIImageView * _mapView;
    MKPlaceInlineMapViewController * _viewController;
}

@property (nonatomic, retain) UIImage *map;
@property (nonatomic) MKPlaceInlineMapViewController *viewController;

- (void).cxx_destruct;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)map;
- (void)setMap:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end

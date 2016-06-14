/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditPrecisionLevelSlider : PUPhotoEditLevelSlider <PUPhotoEditPrecisionLevelContentViewDataSource> {
    PUPhotoEditPrecisionLevelContentView * _precisionSliderContentView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateConversionFactors;
- (double)precisionLevelContentViewIdentityOffset:(id)arg1;
- (id)preferredSliderContentView;
- (void)setupWithLayoutOrientation:(long long)arg1;

@end

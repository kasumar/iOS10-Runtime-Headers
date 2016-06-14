/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHPlaceholderView : UIView {
    UILabel * __airPlayLabel;
    UILabel * __appleTVMessageLabel;
    UIView * __container;
    UIImageView * __imageView;
    long long  _type;
}

@property (setter=_setAirPlayLabel:, nonatomic, retain) UILabel *_airPlayLabel;
@property (setter=_setAppleTVMessageLabel:, nonatomic, retain) UILabel *_appleTVMessageLabel;
@property (setter=_setContainer:, nonatomic, retain) UIView *_container;
@property (setter=_setImageView:, nonatomic, retain) UIImageView *_imageView;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_airPlayLabel;
- (id)_appleTVMessage;
- (id)_appleTVMessageLabel;
- (id)_container;
- (id)_imageView;
- (void)_setAirPlayLabel:(id)arg1;
- (void)_setAppleTVMessageLabel:(id)arg1;
- (void)_setContainer:(id)arg1;
- (void)_setImageView:(id)arg1;
- (void)_setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithType:(long long)arg1;
- (long long)type;

@end

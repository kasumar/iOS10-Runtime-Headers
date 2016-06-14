/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupHeroView : UIView {
    unsigned long long  _animationContext;
    struct CGSize { 
        double width; 
        double height; 
    }  _aspectSize;
    UIImageView * _bridgeWallpaperImageView;
    NSMutableArray * _cardViews;
    long long  _context;
    NSArray * _featuredNetworks;
    UIImageView * _heroImageView;
    UILabel * _instructionLabel;
    bool  _isAnimating;
    UIImageView * _presentedCard;
}

@property (nonatomic, readonly, copy) NSArray *featuredNetworks;

+ (id)supportedFeaturedNetworks;

- (void).cxx_destruct;
- (id)_bridgeHeroImage;
- (id)_bridgeMainBundleHeroImage;
- (id)_bridgeWallpaperImage;
- (id)_cardSizeForContext:(long long)arg1;
- (id)_containerImageSize;
- (void)_createCardViews;
- (void)_createSubviews;
- (void)_finishedTransitionToCard:(id)arg1;
- (unsigned long long)_indexOfNextObject:(id)arg1 withArray:(id)arg2;
- (double)_instructionFontSizeForContext:(long long)arg1;
- (void)_transitionFromCardToCard:(id)arg1;
- (id)_watchAttributeController;
- (void)dealloc;
- (id)featuredNetworks;
- (id)initWithContext:(long long)arg1;
- (id)initWithContext:(long long)arg1 featuredPaymentNetwork:(long long)arg2;
- (id)initWithContext:(long long)arg1 featuredPaymentNetworks:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pk_childrenForAppearance;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end

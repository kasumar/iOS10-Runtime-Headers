/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSStickerView : UIView <CKAnimationTimerObserver, UIGestureRecognizerDelegate> {
    bool  _animating;
    double  _animationDuration;
    NSArray * _durations;
    NSArray * _frames;
    CKImageData * _imageData;
    UIImageView * _imageView;
    bool  _isPeeled;
    UILongPressGestureRecognizer * _longPressRecognizer;
    MSSticker * _sticker;
    NSError * _stickerError;
    UIImage * _stickerImage;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic) bool animating;
@property (nonatomic) double animationDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *durations;
@property (nonatomic, retain) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKImageData *imageData;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, readonly) bool isAnimated;
@property (nonatomic) bool isPeeled;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic, retain) MSSticker *sticker;
@property (nonatomic, retain) NSError *stickerError;
@property (nonatomic, retain) UIImage *stickerImage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapRecognizer;

+ (id)sharedBackgroundQueue;

- (void).cxx_destruct;
- (void)_configureStickerView;
- (void)_prepareForReuse;
- (void)_reloadSticker;
- (void)_setImage:(id)arg1;
- (void)_setupAnimationIfNeeded;
- (void)_swapWithOutlineImage;
- (void)_updateWithSticker:(id)arg1 imageData:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 frame:(unsigned long long)arg4;
- (id)accessibilityLabel;
- (bool)animating;
- (double)animationDuration;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)durations;
- (id)frames;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)imageData;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sticker:(id)arg2;
- (bool)isAnimated;
- (bool)isAnimating;
- (bool)isPeeled;
- (void)layoutSubviews;
- (id)longPressRecognizer;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setDurations:(id)arg1;
- (void)setFrames:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsPeeled:(bool)arg1;
- (void)setSticker:(id)arg1;
- (void)setStickerError:(id)arg1;
- (void)setStickerImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimating;
- (id)sticker;
- (id)stickerError;
- (id)stickerImage;
- (void)stopAnimating;
- (id)tapRecognizer;
- (void)updateAnimationTimerObserving;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {
    NSTimer * _activatedTimer;
    NSMutableDictionary * _activeViewIndex;
    UIKBCacheToken * _cacheToken;
    UIKBKeyView * _candidateGapView;
    UIKBTree * _defaultKeyplane;
    UIKBCacheToken * _defaultKeyplaneCacheToken;
    NSMutableDictionary * _delayedDeactivationKeys;
    UIKeyboardEmojiKeyDisplayController * _emojiKeyManager;
    UIKBRenderFactory * _factory;
    UIKBSplitImageView * _keyBackgrounds;
    UIKBSplitImageView * _keyBorders;
    UIKBSplitImageView * _keyCaps;
    UIKBKeyViewAnimator * _keyViewAnimator;
    UIKBTree * _keyplane;
    bool  _performingDeactivation;
    UIKBRenderConfig * _renderConfig;
    NSMutableDictionary * _renderedKeyViews;
    bool  _shouldDrawRect;
    NSMutableDictionary * _subviewIndex;
}

@property (nonatomic, readonly) bool cacheDeferable;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, retain) UIKBCacheToken *cacheToken;
@property (nonatomic, readonly) double cachedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIKBTree *defaultKeyplane;
@property (nonatomic, retain) UIKBCacheToken *defaultKeyplaneCacheToken;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIKeyboardEmojiKeyDisplayController *emojiKeyManager;
@property (nonatomic, retain) UIKBRenderFactory *factory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepNonPersistent;
@property (nonatomic, retain) UIKBKeyViewAnimator *keyViewAnimator;
@property (nonatomic, retain) UIKBTree *keyplane;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (readonly) Class superclass;

- (bool)_canDrawContent;
- (void)_generateFactoryIfNeeded;
- (bool)_shouldAllowKey:(id)arg1;
- (void)activateKeys;
- (id)activeKeyViews;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (bool)cacheDeferable;
- (id)cacheIdentifierForKey:(id)arg1;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (id)cacheToken;
- (double)cachedWidth;
- (void)cancelDelayedDeactivation;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2;
- (int)cornerMaskForKey:(id)arg1 recursive:(bool)arg2;
- (void)deactivateAdaptiveKey:(id)arg1;
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;
- (void)deactivateKeys;
- (void)dealloc;
- (id)defaultKeyplane;
- (id)defaultKeyplaneCacheToken;
- (void)dimKeys:(id)arg1;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)emojiKeyManager;
- (id)factory;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2;
- (bool)isPasscodeStyle;
- (bool)keepNonPersistent;
- (id)keyViewAnimator;
- (id)keyplane;
- (void)performDelayedDeactivation:(id)arg1;
- (void)prepareForDisplay;
- (void)purgeKeyViews;
- (void)purgeLayerContents;
- (void)purgeSubviews;
- (void)removeFromSuperview;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (id)renderConfig;
- (void)scheduleDelayedDeactivation;
- (void)setCacheToken:(id)arg1;
- (void)setDefaultKeyplane:(id)arg1;
- (void)setDefaultKeyplaneCacheToken:(id)arg1;
- (void)setEmojiKeyManager:(id)arg1;
- (void)setFactory:(id)arg1;
- (void)setKeyViewAnimator:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (bool)shouldAnimateInKeyView:(id)arg1;
- (bool)shouldAnimateOutKeyView:(id)arg1;
- (int)stateForKey:(id)arg1;
- (bool)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1;
- (bool)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (id)viewForKey:(id)arg1;
- (id)viewForKey:(id)arg1 state:(int)arg2;
- (void)willMoveToWindow:(id)arg1;

@end

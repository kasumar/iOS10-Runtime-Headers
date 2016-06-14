/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXKitSettings : PXSettings {
    bool  _allowCapitalization;
    bool  _defaultAsyncTextRenderingEnabled;
    bool  _defaultTextAutoscalingEnabled;
    double  _defaultTextMinimumScaleFactor;
    bool  _defaultTextTruncationEnabled;
    bool  _drawTypographicGuidelines;
    bool  _simulateSlowTextTypesetting;
}

@property (nonatomic) bool allowCapitalization;
@property (nonatomic) bool defaultAsyncTextRenderingEnabled;
@property (nonatomic) bool defaultTextAutoscalingEnabled;
@property (nonatomic) double defaultTextMinimumScaleFactor;
@property (nonatomic) bool defaultTextTruncationEnabled;
@property (nonatomic) bool drawTypographicGuidelines;
@property (nonatomic) bool simulateSlowTextTypesetting;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowCapitalization;
- (bool)defaultAsyncTextRenderingEnabled;
- (bool)defaultTextAutoscalingEnabled;
- (double)defaultTextMinimumScaleFactor;
- (bool)defaultTextTruncationEnabled;
- (bool)drawTypographicGuidelines;
- (void)setAllowCapitalization:(bool)arg1;
- (void)setDefaultAsyncTextRenderingEnabled:(bool)arg1;
- (void)setDefaultTextAutoscalingEnabled:(bool)arg1;
- (void)setDefaultTextMinimumScaleFactor:(double)arg1;
- (void)setDefaultTextTruncationEnabled:(bool)arg1;
- (void)setDefaultValues;
- (void)setDrawTypographicGuidelines:(bool)arg1;
- (void)setSimulateSlowTextTypesetting:(bool)arg1;
- (bool)simulateSlowTextTypesetting;

@end

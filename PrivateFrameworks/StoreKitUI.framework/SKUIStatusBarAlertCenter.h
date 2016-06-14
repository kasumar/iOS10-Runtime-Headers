/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStatusBarAlertCenter : NSObject {
    double  _duration;
    _SKUIStatusBarAlertViewController * _rootViewController;
    UIWindow * _window;
}

@property (nonatomic) double duration;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly) _SKUIStatusBarAlertViewController *rootViewController;
@property (getter=isVisible, nonatomic) bool visible;
@property (nonatomic, readonly) UIWindow *window;

+ (id)sharedCenter;

- (void).cxx_destruct;
- (void)dismiss;
- (double)duration;
- (id)init;
- (bool)isVisible;
- (id)message;
- (id)rootViewController;
- (void)scheduleDismiss;
- (void)setDuration:(double)arg1;
- (void)setVisible:(bool)arg1;
- (void)showMessage:(id)arg1 withStyle:(long long)arg2 forDuration:(double)arg3;
- (void)unscheduleDismiss;
- (id)window;

@end

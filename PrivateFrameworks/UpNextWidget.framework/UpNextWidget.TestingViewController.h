/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.TestingViewController : UIViewController <NCWidgetProviding> {
    void showExpandedMode;
    void testingView;
}

@property (nonatomic) bool showExpandedMode;

- (id /* block */).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setShowExpandedMode:(bool)arg1;
- (bool)showExpandedMode;
- (void)widgetActiveDisplayModeDidChangeWithActiveDisplayMode:(long long)arg1 withMaximumSize:(struct CGSize { double x1; double x2; })arg2;
- (void)widgetPerformUpdateWithCompletionHandler:(id /* block */)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivity : NSObject {
    id /* block */  _activityCompletionWithItemsHandler;
    long long  _defaultPriority;
}

@property (nonatomic, copy) id /* block */ activityCompletionWithItemsHandler;
@property (nonatomic, readonly) NSExtension *applicationExtension;

+ (id)_activityFunctionImage:(id)arg1;
+ (id)_activityImageForApplication:(id)arg1;
+ (id)_activitySettingsImageForApplication:(id)arg1;
+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (bool)_activitySupportsPromiseURLs;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_beforeActivity;
- (bool)_canBeExcludedByActivityViewController:(id)arg1;
- (bool)_canPerformWithSuppliedActivityItems:(id)arg1;
- (void)_cleanup;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_embeddedActivityViewController;
- (void)_injectedJavaScriptResult:(id)arg1;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setActivityCompletionWithItemsHandler:(id /* block */)arg1;
- (void)_setSubject:(id)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (struct CGSize { double x1; double x2; })_thumbnailSize;
- (void)_willPresentAsFormSheet;
- (id /* block */)activityCompletionWithItemsHandler;
- (void)activityDidFinish:(bool)arg1;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityImage;
- (id)activitySettingsImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)applicationExtension;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityCompletionWithItemsHandler:(id /* block */)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Private, _UIDocumentSharingControllerDelegate_Private> {
    NSString * _activityTitle;
    UIViewController * _activityViewController;
}

@property (nonatomic, retain) NSString *activityTitle;
@property (nonatomic, retain) UIViewController *activityViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_allowDocumentSharing;
+ (long long)activityCategory;

- (void).cxx_destruct;
- (bool)_activitySupportsPromiseURLs;
- (void)_cloudShareControllerDidDismiss:(id)arg1;
- (void)_documentSharingControllerDidDismiss:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setActivityViewController:(id)arg1;

@end

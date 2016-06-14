/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKMasterDetailNavigationController : GKNavigationController <UISplitViewControllerDelegate> {
    GKMasterDetailViewController * _parentMasterDetailVC;
}

@property (nonatomic) GKMasterDetailViewController *parentMasterDetailVC;

- (void)collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2;
- (id)parentMasterDetailVC;
- (id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)setParentMasterDetailVC:(id)arg1;
- (bool)splitViewShouldCollapseToDetailViewForPad;

@end

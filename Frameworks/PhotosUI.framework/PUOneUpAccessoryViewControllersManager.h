/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpAccessoryViewControllersManager : NSObject <PUBrowsingViewModelChangeObserver> {
    NSMapTable * __accessoryViewControllers;
    PUBrowsingSession * _browsingSession;
}

@property (nonatomic, readonly) NSMapTable *_accessoryViewControllers;
@property (nonatomic, readonly) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessoryViewControllers;
- (long long)_accessoryViewTypeForAssetReference:(id)arg1;
- (id)_createAccessoryViewControllerForAssetReference:(id)arg1;
- (void)_invalidateAccessoryViewControllersForAssetReferences:(id)arg1;
- (id)accessoryViewControllerForAssetReference:(id)arg1;
- (id)accessoryViewControllerForAssetReference:(id)arg1 createIfNeeded:(bool)arg2;
- (id)assetReferenceForAccessoryViewController:(id)arg1;
- (id)browsingSession;
- (bool)canProvideAccessoryViewControllerForAssetReference:(id)arg1 type:(out long long*)arg2;
- (id)init;
- (id)initWithBrowsingSession:(id)arg1;
- (bool)shouldHideToolbarWhenShowingAccessoryViewControllerForAssetReference:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

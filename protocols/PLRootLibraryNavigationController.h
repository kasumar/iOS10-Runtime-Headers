/* Generated by RuntimeBrowser.
 */

@protocol PLRootLibraryNavigationController <NSObject, PLCloudFeedNavigating>

@required

- (bool)albumIsAvailableForNavigation:(struct NSObject { Class x1; }*)arg1;
- (bool)assetIsAvailableForNavigation:(PLManagedAsset *)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2;
- (bool)assetIsAvailableForNavigationInMoments:(PLManagedAsset *)arg1;
- (bool)assetIsAvailableForNavigationInMoments:(PLManagedAsset *)arg1 refetchSectionsIfNeeded:(bool)arg2;
- (bool)cloudFeedIsAvailableForNavigation;
- (bool)commentIsAvailableForNavigation:(PLCloudSharedComment *)arg1 inAsset:(PLManagedAsset *)arg2;
- (bool)contentModeIsAvailableForNavigation:(int)arg1;
- (void)navigateToAlbum:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: struct NSObject { Class x1; }*, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToAsset:(PLManagedAsset *)arg1 animated:(bool)arg2;
- (void)navigateToAsset:(PLManagedAsset *)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2 animated:(bool)arg3;
- (void)navigateToCloudFeedAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLManagedAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToCloudFeedComment:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedComment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToCloudFeedWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToComment:(PLCloudSharedComment *)arg1 forAsset:(PLManagedAsset *)arg2 animated:(bool)arg3;
- (void)navigateToContentMode:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: int, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)navigateToLastYearPhotosSearchAnimated:(bool)arg1;
- (void)navigateToMemoryWithLocalIdentifier:(NSString *)arg1;
- (void)navigateToOneUpForAsset:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(bool)arg3;
- (void)navigateToPhotosContentBottomAnimated:(bool)arg1;
- (void)navigateToPhotosSearchAnimated:(bool)arg1;
- (void)navigateToRevealAlbum:(struct NSObject { Class x1; }*)arg1 initiallyHidden:(bool)arg2 animated:(bool)arg3;
- (void)navigateToRevealAsset:(PLManagedAsset *)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2 animated:(bool)arg3;
- (void)navigateToRevealCloudFeedAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLManagedAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToRevealCloudFeedComment:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedComment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToRevealCloudFeedInvitationForAlbum:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedAlbum *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*

@end

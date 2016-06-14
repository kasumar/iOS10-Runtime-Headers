/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosAlbumViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate> {
    PUPhotosAlbumViewControllerSpec * __albumSpec;
    bool  __hasAccurateCounts;
    bool  __isCountingAssetTypes;
    PUPhotosPickerViewController * _activePhotosPickerViewController;
    struct NSObject { Class x1; } * _album;
    PHAssetCollection * _assetCollection;
    struct { 
        bool sectionHeadersEnabled; 
    }  _needsUpdateFlags;
}

@property (setter=_setAlbumSpec:, nonatomic, retain) PUPhotosAlbumViewControllerSpec *_albumSpec;
@property (setter=_setHasAccurateCounts:, nonatomic) bool _hasAccurateCounts;
@property (setter=_setCountingAssetTypes:, nonatomic) bool _isCountingAssetTypes;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *album;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *assetCollectionAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldShowSectionHeaders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_albumSpec;
- (void)_countAssetTypesIfNeeded;
- (id)_globalHeaderTitle;
- (bool)_hasAccurateCounts;
- (void)_invalideSectionHeaders;
- (bool)_isCountingAssetTypes;
- (void)_setAlbumSpec:(id)arg1;
- (void)_setCountingAssetTypes:(bool)arg1;
- (void)_setHasAccurateCounts:(bool)arg1;
- (void)_setNeedsUpdate;
- (void)_updateSectionHeadersIfNeeded;
- (struct NSObject { Class x1; }*)album;
- (bool)allowSelectAllButton;
- (id)assetCollection;
- (id)assetCollectionAssets;
- (bool)canBeginStackCollapseTransition;
- (long long)cellFillMode;
- (void)configureGlobalFooterView:(id)arg1;
- (void)configureGlobalHeaderView:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(bool)arg4;
- (struct CGPoint { double x1; double x2; })contentOffsetForPreheating;
- (void)didTapHeaderView:(id)arg1;
- (id)filterPredicateForAlbum:(struct NSObject { Class x1; }*)arg1;
- (double)globalHeaderHeight;
- (void)handleAddFromAction;
- (void)handleAddToAlbum:(id)arg1 pickedAssets:(id)arg2;
- (void)handleTransitionFade:(bool)arg1 animate:(bool)arg2;
- (id)initWithAlbumSpec:(id)arg1;
- (id)initWithSpec:(id)arg1;
- (bool)isCameraRoll;
- (bool)isTrashBinViewController;
- (id)localizedTitleForAssets:(id)arg1;
- (id)newGridLayout;
- (bool)prepareForDismissingForced:(bool)arg1;
- (double)sectionedGridLayout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (id)sessionInfoForTransferredAssets:(id)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1 existingFetchResult:(id)arg2;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3;
- (void)setAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 filterPredicate:(id)arg3 existingFetchResults:(id)arg4;
- (void)setupScrubber;
- (bool)shouldShowSectionHeaders;
- (void)updateLayoutMetrics;
- (bool)updateSpec;
- (void)updateTitle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsGlobalFooter;

@end

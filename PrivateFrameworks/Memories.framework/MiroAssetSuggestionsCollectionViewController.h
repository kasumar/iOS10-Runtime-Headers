/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAssetSuggestionsCollectionViewController : UICollectionViewController {
    NSMutableArray * _allAssets;
    NSArray * _assets;
    <MiroAssetSuggestionsCollectionViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    NSString * _memoryLocalizedTitle;
    UIBarButtonItem * _showAllButton;
}

@property (nonatomic, retain) NSMutableArray *allAssets;
@property (nonatomic, retain) NSArray *assets;
@property (nonatomic) <MiroAssetSuggestionsCollectionViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (nonatomic, copy) NSString *memoryLocalizedTitle;
@property (nonatomic, retain) UIBarButtonItem *showAllButton;

+ (unsigned long long)_indexOAssetWithCreationDate:(id)arg1 inChronologicallySortedAssets:(id)arg2 insertionIndex:(unsigned long long*)arg3;

- (void).cxx_destruct;
- (id)_assetAtIndex:(unsigned long long)arg1;
- (unsigned long long)_assetCount;
- (id)_selectedAssets;
- (void)_setupPopoverPresentationIfNecessary:(id)arg1 fromView:(id)arg2;
- (void)_updateLayoutWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_workaround_24890628_setupSplitScreenWidthConstraint:(id)arg1;
- (id)allAssets;
- (id)assets;
- (bool)assetsArePhotosOnly;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)done:(id)arg1;
- (id)doneButton;
- (void)doneWithCompletion:(id /* block */)arg1;
- (long long)indexOfAsset:(id)arg1;
- (id)memoryLocalizedTitle;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setAllAssets:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setMemoryLocalizedTitle:(id)arg1;
- (void)setShowAllButton:(id)arg1;
- (void)showAll:(id)arg1;
- (id)showAllButton;
- (void)showAllWithCompletion:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

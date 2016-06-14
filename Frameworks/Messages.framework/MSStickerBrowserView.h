/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSStickerBrowserView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSTimer * _animationTimer;
    NSMutableArray * _cellsToAnimate;
    UICollectionView * _collectionView;
    unsigned long long  _currentlyAnimatingIndex;
    <MSStickerBrowserViewDataSource> * _dataSource;
    <MSStickerBrowserViewDisplayDelegate> * _displayDelegate;
    UICollectionViewFlowLayout * _flowLayout;
    MSStickerBrowserViewLayoutSpec * _layoutSpec;
    long long  _stickerSize;
}

@property (nonatomic, retain) NSTimer *animationTimer;
@property (nonatomic, retain) NSMutableArray *cellsToAnimate;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) unsigned long long currentlyAnimatingIndex;
@property (nonatomic) <MSStickerBrowserViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <MSStickerBrowserViewDisplayDelegate> *displayDelegate;
@property (nonatomic, retain) UICollectionViewFlowLayout *flowLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MSStickerBrowserViewLayoutSpec *layoutSpec;
@property (nonatomic, readonly) long long stickerSize;
@property (nonatomic, readonly) long long stickerSizeClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_stickerAtIndexPath:(id)arg1;
- (void)_updateCollectionViewSpecIfNeeded;
- (void)animateNextCell;
- (id)animationTimer;
- (id)cellsToAnimate;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureStickerView;
- (unsigned long long)currentlyAnimatingIndex;
- (id)dataSource;
- (void)dealloc;
- (id)displayDelegate;
- (id)flowLayout;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layout:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stickerSize:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stickerSizeClass:(long long)arg2;
- (id)layoutSpec;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)setAnimationTimer:(id)arg1;
- (void)setCellsToAnimate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCurrentlyAnimatingIndex:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDisplayDelegate:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setLayoutSpec:(id)arg1;
- (long long)stickerSize;
- (long long)stickerSizeClass;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceCardActionsViewController : MKPlaceSectionViewController <MKPlaceCardActionSectionViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    NSArray * _actionItemArray;
    bool  _allowRowSelection;
    <MKPlaceCardActionControllerDelegate> * _delegate;
    bool  _haveTwoColumns;
    MKMapItem * _mapItem;
    bool  _rightAlignSecondItemInTwoColumns;
    bool  _showTopSeparator;
    bool  _useSmallFonts;
    NSArray * _viewArray;
}

@property (nonatomic, copy) NSArray *actionItemArray;
@property (nonatomic) bool allowRowSelection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlaceCardActionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool haveTwoColumns;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) bool rightAlignSecondItemInTwoColumns;
@property (nonatomic) bool showTopSeparator;
@property (readonly) Class superclass;
@property (nonatomic) bool useSmallFonts;
@property (nonatomic, retain) NSArray *viewArray;

- (void).cxx_destruct;
- (void)_setUpSectionViews;
- (id)actionItemArray;
- (bool)allowRowSelection;
- (id)delegate;
- (bool)haveTwoColumns;
- (id)infoCardChildPossibleActions;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (void)openURL:(id)arg1;
- (void)placeCardActionSectionView:(id)arg1 buttonWithActionItemPressed:(id)arg2;
- (bool)rightAlignSecondItemInTwoColumns;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setActionItemArray:(id)arg1;
- (void)setAllowRowSelection:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHaveTwoColumns:(bool)arg1;
- (void)setMapItem:(id)arg1;
- (void)setRightAlignSecondItemInTwoColumns:(bool)arg1;
- (void)setShowTopSeparator:(bool)arg1;
- (void)setUseSmallFonts:(bool)arg1;
- (void)setViewArray:(id)arg1;
- (bool)showTopSeparator;
- (bool)useSmallFonts;
- (id)viewArray;
- (void)viewDidLoad;

@end

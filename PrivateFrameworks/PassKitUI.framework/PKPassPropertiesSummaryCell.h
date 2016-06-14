/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPropertiesSummaryCell : PKTableViewCell {
    PKPassPropertiesSummaryItem * _primaryItem;
    UILabel * _primarySubTitleTextLabel;
    UILabel * _secondaryDetailTextLabel;
    PKPassPropertiesSummaryItem * _secondaryItem;
    UILabel * _secondaryPrimaryTextLabel;
    UILabel * _secondarySubTitleTextLabel;
}

@property (nonatomic, retain) PKPassPropertiesSummaryItem *primaryItem;
@property (nonatomic, retain) PKPassPropertiesSummaryItem *secondaryItem;

+ (id)_detailTextFont;
+ (id)_primaryTextFontForItem:(id)arg1;
+ (id)_subTitleTextFont;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)insertPrimarySummaryItem:(id)arg1 secondaryItem:(id)arg2 withTimeout:(double)arg3;
- (void)insertPrimarySummaryItem:(id)arg1 withTimeout:(double)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)primaryItem;
- (id)secondaryItem;
- (void)setPrimaryItem:(id)arg1;
- (void)setSecondaryItem:(id)arg1;

@end

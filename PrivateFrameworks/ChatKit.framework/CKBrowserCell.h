/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserCell : UICollectionViewCell {
    CKBadgeView * _badgeView;
    UILabel * _browserLabel;
    <CKBrowserCellDelegate> * _delegate;
    CKBrowserCellDeleteButton * _deleteButton;
    bool  _jitter;
    UILayoutGuide * _labelAndBadge;
    NSLayoutConstraint * _labelConstraintBadge;
    NSLayoutConstraint * _labelConstraintNoBadge;
    unsigned long long  _shinyStatus;
    CKBrowserSelectionLabelAccessoryView * _shinyStatusView;
}

@property (nonatomic, retain) CKBadgeView *badgeView;
@property (nonatomic, retain) UILabel *browserLabel;
@property (nonatomic) <CKBrowserCellDelegate> *delegate;
@property (nonatomic, retain) CKBrowserCellDeleteButton *deleteButton;
@property (readonly) UIView *iconView;
@property (nonatomic) bool jitter;
@property (nonatomic, retain) UILayoutGuide *labelAndBadge;
@property (nonatomic, retain) NSLayoutConstraint *labelConstraintBadge;
@property (nonatomic, retain) NSLayoutConstraint *labelConstraintNoBadge;
@property (nonatomic) unsigned long long shinyStatus;
@property (nonatomic, retain) CKBrowserSelectionLabelAccessoryView *shinyStatusView;

+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimation;
+ (Class)classForItemType:(long long)arg1;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_buildConstraints;
- (void)_deleteButtonTapped:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (id)badgeView;
- (id)browserLabel;
- (id)delegate;
- (id)deleteButton;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)jitter;
- (id)labelAndBadge;
- (id)labelConstraintBadge;
- (id)labelConstraintNoBadge;
- (void)prepareForReuse;
- (void)setBadgeView:(id)arg1;
- (void)setBrowserLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setJitter:(bool)arg1;
- (void)setLabelAndBadge:(id)arg1;
- (void)setLabelConstraintBadge:(id)arg1;
- (void)setLabelConstraintNoBadge:(id)arg1;
- (void)setShinyStatus:(unsigned long long)arg1;
- (void)setShinyStatusView:(id)arg1;
- (unsigned long long)shinyStatus;
- (id)shinyStatusView;

@end

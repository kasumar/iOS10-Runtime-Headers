/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFQuickLookDocumentView : UIView {
    NSArray * _actionButtons;
    UIStackView * _actionButtonsView;
    UIView * _backgroundView;
    UIView * _contentView;
    <_SFQuickLookDocumentViewDelegate> * _delegate;
    _SFQuickLookDocumentInfoView * _documentInfoView;
    NSLayoutConstraint * _topContentInsetConstraint;
    UILayoutGuide * _topLayoutGuide;
    NSLayoutConstraint * _topLayoutGuideHeightConstraint;
}

@property (nonatomic) <_SFQuickLookDocumentViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (void)_setUpLayoutConstraints;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForButtonAtIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)updateActionTitles:(id)arg1;
- (void)updateDocumentFileName:(id)arg1;
- (void)updateDocumentFileSize:(id)arg1;
- (void)updateDocumentFileType:(id)arg1;
- (void)updateDocumentIcon:(id)arg1;
- (void)updateTopContentInset:(double)arg1;

@end

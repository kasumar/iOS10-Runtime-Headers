/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassHeaderView : UIView {
    <PKPassHeaderViewDelegate> * _delegate;
    bool  _largeStyle;
    UIImageView * _maskShadow;
    UILabel * _modificationDate;
    PKPass * _pass;
    UIView * _passMaskView;
    PKPassView * _passView;
    UIColor * _primaryTextColor;
    PKRemoteDataAccessor * _remoteDataAccessor;
    UIColor * _secondaryTextColor;
    bool  _showModificationDate;
    unsigned long long  _suppressedContent;
    UILabel * _title;
    UILabel * _type;
}

@property (nonatomic) <PKPassHeaderViewDelegate> *delegate;
@property (getter=isLargeStyle, nonatomic) bool largeStyle;
@property (nonatomic, readonly) PKPass *pass;
@property (nonatomic, readonly) PKPassView *passView;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic) bool showModificationDate;
@property (nonatomic) unsigned long long suppressedContent;

- (void).cxx_destruct;
- (void)_passLibraryDidChange:(id)arg1;
- (id)_primaryTextColor;
- (id)_secondaryTextColor;
- (void)_updateContent;
- (void)dealloc;
- (id)delegate;
- (id)initWithPass:(id)arg1;
- (bool)isLargeStyle;
- (void)layoutSubviews;
- (id)pass;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; })passSizeInfoForHeight:(double)arg1;
- (id)passView;
- (struct CGSize { double x1; double x2; })passViewSizeForHeight:(double)arg1;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (void)setDelegate:(id)arg1;
- (void)setLargeStyle:(bool)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setShowModificationDate:(bool)arg1;
- (void)setSuppressedContent:(unsigned long long)arg1;
- (bool)showModificationDate;
- (unsigned long long)suppressedContent;
- (void)updateModifiedDate;
- (void)updateShadow:(double)arg1;

@end

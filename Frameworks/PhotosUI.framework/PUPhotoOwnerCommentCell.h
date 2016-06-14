/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoOwnerCommentCell : UITableViewCell {
    UILabel * _ownerContentLabel;
    NSAttributedString * _ownerString;
    UIView * _styledSeparatorView;
    bool  _usesCompactSeparators;
}

@property (nonatomic, readonly, retain) UILabel *ownerContentLabel;
@property (nonatomic, copy) NSAttributedString *ownerString;
@property (nonatomic, readonly, retain) UIView *styledSeparatorView;
@property (nonatomic) bool usesCompactSeparators;

+ (id)_ownerStringForAsset:(id)arg1;
+ (double)heightOfOwnerCellWithAsset:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)ownerContentLabel;
- (id)ownerString;
- (void)prepareForReuse;
- (void)setOwnerString:(id)arg1;
- (void)setUsesCompactSeparators:(bool)arg1;
- (id)styledSeparatorView;
- (void)updateContentFromAsset:(id)arg1;
- (bool)usesCompactSeparators;

@end
